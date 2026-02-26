#!/bin/bash
# ============================================================
# TowerTweak - Tower 15.x Patch 脚本
#
# 用法:
#   ./patch.sh           # patch (自动备份原始二进制)
#   ./patch.sh restore   # 还原为原始二进制
#
# 流程: 备份原始二进制 → 编译 dylib → 注入 dylib → 重签名
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
echo "  TowerTweak - Tower 15.x Patch"
echo "============================================"
echo

[ -d "$TOWER_APP" ] || error "未找到 Tower.app: $TOWER_APP"
[ -f "$TOWER_BINARY" ] || error "未找到 Tower 二进制: $TOWER_BINARY"
[ -f "$INSERT_DYLIB" ] || error "未找到 insert_dylib: $INSERT_DYLIB"
chmod +x "$INSERT_DYLIB"

command -v clang    >/dev/null || error "未找到 clang"
command -v codesign >/dev/null || error "未找到 codesign"

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

# ---- Step 3: 放入 dylib ----
step "放入 dylib ..."
cp "$BUILD_DIR/$DYLIB_NAME" "$FRAMEWORKS_DIR/$DYLIB_NAME"
info "已放入: $FRAMEWORKS_DIR/$DYLIB_NAME"

# ---- Step 4: 注入 LC_LOAD_DYLIB ----
step "注入 LC_LOAD_DYLIB ..."
"$INSERT_DYLIB" --inplace --no-strip-codesig --all-yes \
    "$DYLIB_INSTALL_PATH" \
    "$TOWER_BINARY" \
    2>/dev/null
info "注入完成"

# ---- Step 5: 重签名 ----
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
