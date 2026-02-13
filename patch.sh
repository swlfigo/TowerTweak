#!/bin/bash
# ============================================================
# TowerTweak - Tower 10.x Patch 脚本
#
# 用法:
#   ./patch.sh           # patch (自动备份原始二进制)
#   ./patch.sh restore   # 还原为原始二进制
#
# 流程: 备份原始二进制 → 编译 dylib → 二进制 patch → 注入 dylib → 重签名
# 还原: 从备份恢复原始二进制 → 移除 dylib → 重签名
# ============================================================

set -e

# ---- 配置 ----
TOWER_APP="/Applications/Tower.app"
TOWER_BINARY="$TOWER_APP/Contents/MacOS/Tower"
BACKUP_BINARY="$TOWER_APP/Contents/MacOS/Tower.bak"
FRAMEWORKS_DIR="$TOWER_APP/Contents/Frameworks"

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
TWEAK_SRC_DIR="$SCRIPT_DIR/TowerTweak/TowerTweak"
INSERT_DYLIB="$SCRIPT_DIR/TowerTweak/insert_dylib"

DYLIB_NAME="TowerTweak.dylib"
DYLIB_INSTALL_PATH="@executable_path/../Frameworks/$DYLIB_NAME"

BUILD_DIR="$SCRIPT_DIR/build"

# ---- 颜色输出 ----
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
CYAN='\033[0;36m'
NC='\033[0m'

info()  { echo -e "${GREEN}[✓]${NC} $1"; }
warn()  { echo -e "${YELLOW}[!]${NC} $1"; }
error() { echo -e "${RED}[✗]${NC} $1"; exit 1; }
step()  { echo -e "${CYAN}---${NC} $1"; }

# ============================================================
# 还原模式
# ============================================================
if [ "$1" = "restore" ]; then
    echo "============================================"
    echo "  TowerTweak - 还原原始 Tower"
    echo "============================================"
    echo

    [ -f "$BACKUP_BINARY" ] || error "未找到备份: $BACKUP_BINARY (没有可还原的内容)"

    step "恢复原始二进制 ..."
    cp "$BACKUP_BINARY" "$TOWER_BINARY"
    info "二进制已恢复"

    step "移除 TowerTweak.dylib ..."
    rm -f "$FRAMEWORKS_DIR/$DYLIB_NAME"
    info "dylib 已移除"

    step "移除备份文件 ..."
    rm -f "$BACKUP_BINARY"
    info "备份已清理"

    step "重签名 ..."
    xattr -cr "$TOWER_APP" 2>/dev/null || true
    codesign --force --deep --sign - "$TOWER_APP"
    info "签名完成"

    echo
    info "Tower 已还原为原始版本"
    exit 0
fi

# ============================================================
# Patch 模式
# ============================================================
echo "============================================"
echo "  TowerTweak - Tower 10.x Patch"
echo "============================================"
echo

[ -d "$TOWER_APP" ] || error "未找到 Tower.app: $TOWER_APP"
[ -f "$TOWER_BINARY" ] || error "未找到 Tower 二进制: $TOWER_BINARY"
[ -f "$INSERT_DYLIB" ] || error "未找到 insert_dylib: $INSERT_DYLIB"
chmod +x "$INSERT_DYLIB"

command -v clang    >/dev/null || error "未找到 clang"
command -v codesign >/dev/null || error "未找到 codesign"
command -v python3  >/dev/null || error "未找到 python3"

# ---- Step 1: 备份 ----
if [ -f "$BACKUP_BINARY" ]; then
    warn "备份已存在: $BACKUP_BINARY (跳过备份，使用已有备份)"
else
    step "备份原始二进制 ..."
    cp "$TOWER_BINARY" "$BACKUP_BINARY"
    info "已备份: $BACKUP_BINARY"
fi

# ---- Step 2: 编译 dylib ----
step "编译 $DYLIB_NAME ..."

mkdir -p "$BUILD_DIR"

clang -dynamiclib \
    -arch arm64 \
    -framework Foundation \
    -framework AppKit \
    -I"$TWEAK_SRC_DIR" \
    -I"$TWEAK_SRC_DIR/Utils" \
    -install_name "$DYLIB_INSTALL_PATH" \
    -o "$BUILD_DIR/$DYLIB_NAME" \
    "$TWEAK_SRC_DIR/NSObject+TowerHook.m" \
    "$TWEAK_SRC_DIR/NSButton+TowerHook.m" \
    "$TWEAK_SRC_DIR/Utils/JRSwizzle.m" \
    -mmacosx-version-min=12.0 \
    -fobjc-arc

info "编译完成"

# ---- Step 3: 从备份还原干净的二进制 (避免重复 patch) ----
step "从备份恢复干净二进制 ..."
cp "$BACKUP_BINARY" "$TOWER_BINARY"

# ---- Step 4: 二进制 Patch ----
step "二进制 Patch ..."

python3 - "$TOWER_BINARY" <<'PATCHSCRIPT'
import sys, struct

binary_path = sys.argv[1]

# 定位 ARM64 slice
with open(binary_path, 'rb') as f:
    magic = struct.unpack('>I', f.read(4))[0]

arm64_offset = 0
if magic == 0xCAFEBABE:
    with open(binary_path, 'rb') as f:
        f.seek(4)
        nfat = struct.unpack('>I', f.read(4))[0]
        for i in range(nfat):
            cputype, cpusubtype, offset, size, align = struct.unpack('>iiIII', f.read(20))
            if cputype == 0x100000C:
                arm64_offset = offset
                break
    if arm64_offset == 0:
        print("    [!] 未找到 ARM64 slice"); sys.exit(1)
    print(f"    FAT Binary, ARM64 @ 0x{arm64_offset:X}")

# 解析 __TEXT 段
with open(binary_path, 'rb') as f:
    f.seek(arm64_offset + 16)
    ncmds = struct.unpack('<I', f.read(4))[0]
    f.seek(arm64_offset + 32)

    text_vmaddr = text_fileoff = None
    for _ in range(ncmds):
        pos = f.tell()
        cmd, cmdsize = struct.unpack('<II', f.read(8))
        if cmd == 0x19:
            segname = f.read(16).split(b'\x00')[0].decode()
            vmaddr, vmsize, fileoff, filesize = struct.unpack('<QQQQ', f.read(32))
            if segname == '__TEXT':
                text_vmaddr, text_fileoff = vmaddr, fileoff
                break
        f.seek(pos + cmdsize)

    if text_vmaddr is None:
        print("    [!] 未找到 __TEXT 段"); sys.exit(1)

# Patch 定义
patches = [
    {
        'name': 'sub_1007F1F40 (跳过启动弹窗)',
        'va': 0x1007F1F40,
        'orig': bytes.fromhex('ff8301d1f85f02a9'),
        'patch': struct.pack('<II', 0x52800000, 0xD65F03C0),
    },
    {
        'name': 'isValidProductStatus (产品状态有效)',
        'va': 0x1004CC1F4,
        'orig': bytes.fromhex('f44fbea9fd7b01a9'),
        'patch': struct.pack('<II', 0x52800020, 0xD65F03C0),
    },
]

ok = True
with open(binary_path, 'r+b') as f:
    for p in patches:
        foff = arm64_offset + text_fileoff + (p['va'] - text_vmaddr)
        f.seek(foff)
        cur = f.read(8)
        if cur != p['orig']:
            print(f"    [!] {p['name']}: 字节不匹配，可能版本不同")
            ok = False
            continue
        f.seek(foff)
        f.write(p['patch'])
        print(f"    {p['name']}: OK")

if not ok:
    sys.exit(1)
PATCHSCRIPT

info "二进制 Patch 完成"

# ---- Step 5: 放入 dylib ----
step "放入 dylib ..."
cp "$BUILD_DIR/$DYLIB_NAME" "$FRAMEWORKS_DIR/$DYLIB_NAME"
info "已放入: $FRAMEWORKS_DIR/$DYLIB_NAME"

# ---- Step 6: 注入 LC_LOAD_DYLIB ----
step "注入 LC_LOAD_DYLIB ..."
"$INSERT_DYLIB" --inplace --no-strip-codesig --all-yes \
    "$DYLIB_INSTALL_PATH" \
    "$TOWER_BINARY" \
    2>/dev/null
info "注入完成"

# ---- Step 7: 重签名 ----
step "重签名 ..."
xattr -cr "$TOWER_APP" 2>/dev/null || true
codesign --force --deep --sign - "$TOWER_APP"
info "签名完成"

codesign -v "$TOWER_APP" 2>/dev/null && \
    info "签名验证通过" || \
    warn "签名验证失败"

echo
echo "============================================"
info "Patch 完成! 直接打开 Tower 即可"
info "还原命令: ./patch.sh restore"
echo "============================================"
