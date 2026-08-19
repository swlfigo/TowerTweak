# TowerTweak

Tower Git macOS App 逆向研究 (6.1 ~ 17.x)

> ✅ **算号方案对 Tower 17.x 依然有效**:salt 未变(`JuD324...`,仅运行时混淆),旧 FNLicensing 机制完整保留。
> 17.x 为「旧 FNLicensing + 新 Swift LicensingService」混合架构,详见
> [§ Tower 17.x 授权体系（混合架构）](#tower-17x-授权体系混合架构) 与 `Tower17_Pro_Plan.md`。

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

## Tower 17.x 授权体系（混合架构）

> 基于 Tower 17.1 (Build 551) ARM64 逆向 (IDA + idalib MCP)。

**结论:老的 FNLicensing 算号机制在 17.x 中并未移除,仍然完整可用。** 17.x 是**混合架构** ——
在保留旧 `FNLicensing.framework` + `GTProductController`/`GTProductConfig` 的同时,新增了一套
Swift `LicensingService` 框架(现代化的服务器激活 UI / 设备激活)。**仓库现有的 `TowerCodeGenerator.py`
算号方案对 17.x 依然有效。**

| 维度 | 6.1 ~ 15.x | Tower 17.1 |
|------|-----------|-----------|
| 授权框架 | ObjC `FNLicensing.framework` | **仍在** + 新增 Swift `LicensingService`(并存) |
| 算法 | `MD5(hashSource + salt)`，salt=`JuD324...` | **不变**,salt 仍为 `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` |
| salt 存储 | 明文常量 | Swift `HashingSalt.hashingSalt` 运行时用字符串数组 `joined("")` 拼接(反字符串搜索混淆) |
| 授权模型 | 本地 plist + 机器绑定哈希 | 旧 trial.plist/license.plist 路径**仍在**;新增 `activateLicenseWithEmail:licenseCode:` 服务器激活 |
| 产品配置 | productVersion `10.0` | **不变**:`productName=tower` / `productVersion=10.0` / `numberOfTrialDays=30` |
| 运行时状态 | `FNProductStatus.mode` | 旧路径 `GTProductController reloadStatus:` → `FNProductConfig`;新增 Swift `Tower.LicenseInfo` |
| 功能门控 | `mustCheckFeatureAvailability`（仅 license 模式检查，trial 全解锁） | 新增 Swift `FeatureAvailability` / `ProFeatureSpec`（待进一步确认是否沿用旧规则） |

### 关键发现

- **salt 未变，只是混淆**：明文 `JuD324...` 搜不到，是因为 `HashingSalt.hashingSalt` 在运行时把字符串数组
  用空分隔符 `joined(separator:"")` 拼接而成。用老 salt 对现存 `trial.plist` 字段重算 `code`
  与文件内存储值**完全一致**，证明算法与 salt 均未改变。
- **旧机制完整保留**：`+[GTProductConfig defaultConfig]` 仍设置 `hashingSalt` / `machineUUID`(经
  `FNLicensingHelpers` 混淆) / `licensingBaseURL=account.git-tower.com/api/`;`GTProductController`
  仍有 `registerTrial` / `activateLicense` / `reloadStatus` / trial.plist 读写。
- **新增 Swift 层是附加而非替换**：`LicensingService`（`APIClient`/`DeviceActivation`/`AccountInfo`）+
  UserDefaults 缓存键 `GTLicenseActivationState`(Int) + `GTLicenseActivationLastUpdatedDate`(Date)。
  该缓存无签名，但非权威判定入口(字符串全库仅 1 处引用，位于 `FeatureAdoptionSettings`)。
- **调试生成器已编译掉**:`GTDebugProductStatusMenuGenerator` 的菜单项构造代码尚在，但其 action
  `generateProLicense:` 在 release 版**无实现**(方法表中不存在)，此路不通。

### 破解路线（详见 `Tower17_Pro_Plan.md`）

1. **路线 A — 沿用算号（推荐，最省事）**：用 `TowerCodeGenerator.py` 生成/续期本地 `trial.plist`
   或正式 `license.plist`。salt 与算法 17.x 未变，直接可用。若需 Pro 功能，生成 `plan=pro`
   的正式 license（需确认 17.x 功能门控是否仍按 plan/trial 区分）。
2. **路线 B — dylib 运行时 Hook（兜底）**：与现有 `patch.sh` 一致，hook `isValidProductStatus` /
   `FeatureAvailability` 等。当前 `/Applications/Tower.app` 已用此方式打补丁。

### 待确认

- salt 的**权威确认**:静态 `code` 重算 + salt 命中已强力佐证；如需 100% 确定,可对**未打补丁**的
  二进制(`Tower.bak`)注入 dylib 运行时 dump `[GTProductConfig hashingSalt]`。
- 17.x 功能门控是否仍沿用「trial 全解锁、仅正式 license 按 plan 限制」的旧规则
  （`FeatureAvailability` / `ProFeatureSpec` 判定逻辑待反编译）。

### 已定位关键符号 (Tower 17.1 主二进制)

| 符号 | 地址 | 说明 |
|------|------|------|
| `+[GTProductConfig defaultConfig]` | `0x1004e8da0` | 产品配置：tower / 10.0 / 30 天 / salt / baseURL |
| `+[GTProductConfig hashingSalt]` → `+[HashingSalt hashingSalt]` | `0x1004e8ee4` / `0x1007576f4` | salt 运行时拼接 |
| `-[GTProductController reloadStatus:]` | `0x1004e57f0` | 旧状态加载入口 |
| `-[GTProductController activateLicenseWithEmail:licenseCode:...]` | `0x1004e5854` | 服务器激活 |
| UserDefaults `GTLicenseActivationState` / `...LastUpdatedDate` | 串 `0x101068420` / `0x101068440` | 新体系状态缓存（非权威） |
| `Tower.FeatureAvailability` / `Tower.ProFeatureSpec` | `0x100a38ec4` / `0x1009c0168` 区 | Pro 功能门控 |

---

## 仅供学习交流，严禁用于商业用途
