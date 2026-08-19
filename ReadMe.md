# TowerTweak

Tower Git macOS App 逆向研究 (6.1 ~ 17.x)

> ⚠️ **Tower 17.x 起换了一整套授权体系**,下方「算号 / 改 plist」方法**仅适用于 6.1 ~ 15.x**。
> 17.x 的分析见 [§ Tower 17.x 授权体系变更](#tower-17x-授权体系变更) 与 `Tower17_Pro_Plan.md`。

## 一键 Patch（推荐）

```bash
# 在项目根目录执行
./patch.sh
```

脚本自动完成：编译 dylib → 复制 Tower.app 到桌面 → 注入 dylib → 重签名

输出：`~/Desktop/Tower.app`（原版 `/Applications/Tower.app` 不受影响）

### 原理

通过 `insert_dylib` 注入 `TowerTweak.dylib`，dylib 在加载时执行以下 hook：

| Hook | 目标 | 效果 |
|------|------|------|
| Runtime Patch | `sub_1007F1F40` | `MOV W0,#0; RET` 跳过启动弹窗 |
| ObjC Swizzle | `-[GTApplicationStatus isValidProductStatus]` | 返回 YES，显示主窗口 |
| ObjC Swizzle | `-[FNTrialLicense expirationDate]` | 返回 2099 年 |
| ObjC Swizzle | `-[LicenseInfoButton initWithFrame:]` | 返回 nil，隐藏按钮 |

## 方法二：算号（修改 plist）

```bash
# 自动查找并修改 trial.plist 过期时间
python3 ./TowerCodeGenerator.py

# 或指定路径
python3 ./TowerCodeGenerator.py -f '/path/to/trial.plist'

# 生成正式订阅许可证
python3 ./TowerCodeGenerator.py --gen-license
```

许可证路径：`~/Library/Application Support/com.fournova.Tower3/{machineUUID}/trial.plist`

## 方法三：Framework 算号

打开 `TowerCodeFramework` 中的工程，替换 plist 路径后运行。

## 项目结构

```
TowerTweak/
├── patch.sh                 # 一键 patch 脚本
├── TowerCodeGenerator.py    # Python 算号工具
├── ReverseEngineering.md    # 逆向分析文档（算号 + 启动流程）
├── FNLicenseFrameworkHeaderExport.h
├── TowerHeader/             # class-dump 导出头文件
├── TowerCodeFramework/      # Framework 算号工程
└── TowerTweak/
    ├── insert_dylib          # Mach-O dylib 注入工具
    ├── TowerTweak.xcodeproj  # Xcode 工程（可选）
    └── TowerTweak/
        ├── NSObject+TowerHook.m   # 核心 hook 代码
        ├── NSButton+TowerHook.m
        ├── TowerHeader.h          # Tower 类声明
        └── Utils/JRSwizzle.*      # ObjC 方法交换库
```

## Tower 17.x 授权体系变更

> 基于 Tower 17.1 (Build 551) ARM64 逆向 (IDA + idalib MCP)。

Tower 17.x 弃用了旧的 ObjC `FNLicensing.framework`，改为全新的 Swift `LicensingService` 框架，
采用**服务器激活模型**。旧的算号方案（`MD5(hashSource + salt)`）在 17.x **完全失效**。

| 维度 | 6.1 ~ 15.x | Tower 17.1 |
|------|-----------|-----------|
| 授权框架 | ObjC `FNLicensing.framework` | Swift `LicensingService`（全新） |
| 算法 | `MD5(hashSource + salt)`，salt=`JuD324...` | 已移除，二进制内搜不到 salt / `FNLicense*` |
| 授权模型 | 本地 plist + 机器绑定哈希 | 服务器激活 `activateLicense(email:code:)` → `account.git-tower.com` |
| 本地存储 | `trial.plist` / `license.plist`（含 code 校验） | NSUserDefaults 键 `GTLicenseActivationState`（无签名文件） |
| 运行时状态 | `FNProductStatus.mode` | Swift 类 `Tower.LicenseInfo`（`licenseType`/`daysLeft`/`revoked`/`expired`） |
| 功能门控 | `mustCheckFeatureAvailability` | Swift `FeatureAvailability` 枚举 + `ProFeatureSpec` |

### 关键发现

- **持久化层无签名校验**：激活状态存于 UserDefaults `GTLicenseActivationState` / `GTLicenseActivationLastUpdatedDate`，
  读取路径未见 HMAC / 签名验证 → 篡改本地缓存（如过期时间）不会触发完整性报错。真正的校验发生在**联网激活那一刻**，之后缓存被本地信任。
- **二进制自带本地 license 生成器**：调试类 `GTDebugProductStatusMenuGenerator` 含命令
  `Generate Valid Pro License`（action `generateProLicense:`）、`Generate Valid Basic License`、
  `Generate Valid License with Other Machine UUID`、`Generate Expired/Revoked License` 等 →
  纯客户端构造「被 App 认可的 Pro license」的算法就在二进制里。

### 破解路线（详见 `Tower17_Pro_Plan.md`）

1. **路线 A — 本地伪造激活状态**：直接写 UserDefaults `GTLicenseActivationState`，伪造有效 Pro 授权。零侵入、可离线；依赖 blob 结构正确且解码不验签。
2. **路线 B — dylib 运行时 Hook（推荐兜底）**：注入 dylib，hook `Tower.LicenseInfo` / `FeatureAvailability` / `isValidProductStatus`，与现有 `patch.sh` 一致。基于方法名，版本更新不易失效。

### 已定位关键符号 (Tower 17.1)

| 符号 | 地址 | 说明 |
|------|------|------|
| `-[GTDebugProductStatusMenuGenerator makeGenerateValidProLicenseMenuItem]` | `0x1002ef408` | action=`generateProLicense:` |
| `-[GTDebugProductStatusMenuGenerator makeMenuItems]` | `0x1002eef64` | 全部调试生成命令入口 |
| sel `generateProLicense:` | `0x100f8496b` | 本地造 Pro license 的动作 |
| UserDefaults `GTLicenseActivationState` | 串 `0x101068420` | 激活状态持久化键 |
| `Tower.FeatureAvailability`（enum） | 元数据 `0x100a38ec4` | 功能可用性判定 |
| `Tower.ProFeatureSpec`（struct） | `0x1009c0168` 区 | Pro 功能描述 |
| 激活 API | `account.git-tower.com/activations/{uuid}/resume` | 服务器激活 / 续期 |

---

## 仅供学习交流，严禁用于商业用途
