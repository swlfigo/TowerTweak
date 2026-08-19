# Tower 17.x Pro 授权破解 — 执行计划

> 目标:在 Tower 17.1 (Build 551) 上让 App 认为当前为**有效 Pro 正式授权**,解锁全部 Pro-only 功能,且不依赖联网激活。
> 基于 IDA (idalib MCP) 对 `/Applications/Tower.app/Contents/MacOS/Tower` 的逆向。

---

## 0. 背景:17.x 为混合架构,老算号机制仍然有效(RE-1 已完成)

> ⚠️ 早期草稿曾误判「FNLicensing 被移除、算法失效」。经 RE-1 逆向核实:**该判断错误**。
> 真相:17.x 保留旧 FNLicensing,并新增 Swift `LicensingService` 并存。

| 维度 | 旧方案 (6.1 ~ 15.x) | Tower 17.1 现状 |
|------|--------------------|-----------------|
| 授权框架 | ObjC `FNLicensing.framework` | **仍在** + 新增 Swift `LicensingService`(并存) |
| 算法 / salt | `MD5(hashSource+salt)`,salt=`JuD324...` | **均不变**;salt 改由 `HashingSalt.hashingSalt` 运行时数组拼接(混淆) |
| 产品配置 | productVersion `10.0` | **不变**:`tower` / `10.0` / `numberOfTrialDays=30` |
| 授权模型 | 本地 trial.plist/license.plist | 旧路径**仍在** + 新增 `activateLicenseWithEmail:licenseCode:` 服务器激活 |
| 运行时状态 | `FNProductStatus.mode` | 旧 `GTProductController reloadStatus:` + 新 Swift `Tower.LicenseInfo` |
| 功能门控 | `mustCheckFeatureAvailability`(trial 全解锁) | 新增 `FeatureAvailability` / `ProFeatureSpec`(是否沿用旧规则待确认) |

**结论:仓库现有 `TowerCodeGenerator.py` 算号方案对 17.x 依然有效,无需新算法。**

### RE-1 已确认的关键事实
- **salt 未变(强证据)**:明文搜不到是因 `HashingSalt.hashingSalt` 运行时用字符串数组 `joined("")` 拼接。
  用老 salt `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` 对现存 `trial.plist` 字段重算 `code`,与文件存储值
  `d2944881663c...` **完全一致** → 算法与 salt 均未改变。
- **旧机制完整**:`+[GTProductConfig defaultConfig]`(salt / machineUUID / baseURL)、`GTProductController`
  (registerTrial / activateLicense / reloadStatus / trial.plist 读写)、`FNLicensing.framework`(随包发布)全在。
- **新 Swift 层为附加**:`GTLicenseActivationState`(Int,无签名)是状态缓存,非权威判定(全库仅 1 处引用)。
- **调试生成器不可用**:`generateProLicense:` 在 release 版无实现,此路不通(改用算号)。
- **注意**:当前 `/Applications/Tower.app` 已被 `TowerTweak.dylib` 打补丁(有 Tower.bak),
  故「改时间不报错」的行为证据被 hook 污染,不能单独作为验证;上面的 salt 重算是独立于补丁的静态证据。

---

## 1. 待确认项(动手前必须锁死的逆向问题)

| # | 问题 | 目的 | 方法 |
|---|------|------|------|
| RE-1 | `generateProLicense:` 生成器实现 | 拿到本地造 Pro license 的**确切字段与取值** | 定位 selector `generateProLicense:` 的 IMP(target 类),反编译 |
| RE-2 | `GTLicenseActivationState` 的编码/解码格式 | 确定要写入的 blob 结构(JSON?plist?字段名) | 反编译 LicensingStore 的 load/persist,或 dump 运行时 UserDefaults 值 |
| RE-3 | 解码时是否验签 | 排除「blob 内含服务器签名、解码时校验」 | 检查解码路径是否调用 CryptoKit / SecKey / HMAC |
| RE-4 | `FeatureAvailability` / `ProFeatureSpec` 判定 Pro 的入口 | 确认「licenseType=license + plan=pro」即解锁,或需额外字段 | 反编译 FeatureAvailability 判定函数 |

> RE-1 ~ RE-3 决定「路线 A(造文件)」是否可行;RE-4 是两条路线共用的验收依据。

---

## 2. 两条实现路线

### 路线 A — 本地伪造激活状态(不改二进制,不注入)
**思路**:直接写入 UserDefaults `GTLicenseActivationState`,伪造一个「有效 Pro 正式授权」的激活 blob。

前置:RE-1 / RE-2 / RE-3 全部完成且确认无解码验签。

步骤:
1. 按 RE-2 得到的结构,构造 activation blob(plan=pro、status=active、expires=远期、activation_id=任意合法 UUID、机器标识=本机)。
2. 若 RE-1 显示 code/hash 字段,按其算法补齐。
3. 写入:`defaults write com.fournova.Tower3 GTLicenseActivationState <blob>`(域名以实际 bundle id 为准),同步 `GTLicenseActivationLastUpdatedDate`。
4. 断网启动 Tower,验收(见 §3)。

优点:零侵入、可完全离线、不碰代码签名。
风险:blob 结构错一个字段就失败;App 更新可能改结构;若 RE-3 发现验签则此路不通。

### 路线 B — dylib 运行时 Hook(与现有 TowerTweak 一致,推荐兜底)
**思路**:注入 dylib,在运行时改写授权判定,不碰持久化。

Hook 目标(基于方法名,版本更新不易失效):
1. `Tower.LicenseInfo`:`licenseType` → 正式 license、`expired` → NO、`revoked` → NO、`daysLeft` → 大值。
2. `FeatureAvailability` / `ProFeatureSpec` 判定入口 → Pro 功能一律「可用」(依 RE-4)。
3. `GTApplicationStatus.isValidProductStatus` → YES(沿用旧方案)。
4. `FNProductStatus`/新状态枚举的启动弹窗绕过(沿用 15.x 的 `method_setImplementation` 手法)。

落地:复用现有 `patch.sh`(编译 dylib → 复制 Tower.app 到桌面 → `insert_dylib` 注入 → `codesign --force --deep --sign -`)。

优点:稳、可维护、和现有工程一致。
风险:需重签名;每次 App 更新需回归验证 hook 是否命中。

---

## 3. 验收标准(两条路线通用)
1. 断网启动 Tower,无「激活/试用」弹窗,主窗口正常打开。
2. 「关于 / License Info」显示为有效 Pro 正式授权,无到期/吊销标记。
3. 至少一个 Pro-only 功能可正常使用(具体功能待 RE-4 枚举后选定验证点)。
4. 重启 App、跨重启仍有效。

## 4. 回滚
- 路线 A:`defaults delete com.fournova.Tower3 GTLicenseActivationState`(及 LastUpdatedDate)。
- 路线 B:用 `Tower.bak` 还原二进制 / 删除注入的 dylib 后重签名。
- 动手前完整备份:`~/Library/Application Support/com.fournova.Tower3/` 与相关 UserDefaults 域。

## 5. 建议执行顺序
1. **先做 RE-1 ~ RE-4**(纯只读逆向,零风险)——产出「Pro license 精确字段表」+「FeatureAvailability 判定说明」。
2. 依 RE-3 结果决策:
   - 无解码验签 → **优先路线 A**(最干净),路线 B 作兜底。
   - 有验签 → **直接路线 B**。
3. 实现 → 按 §3 验收 → 更新 `ReverseEngineering.md` 增补「17.x 架构变更」章节。

---

## 附:已定位的关键符号 (Tower 17.1 / session d8b7ade1)
| 符号 | 地址 | 说明 |
|------|------|------|
| `-[GTDebugProductStatusMenuGenerator makeGenerateValidProLicenseMenuItem]` | `0x1002ef408` | 生成 Pro license 菜单项,action=`generateProLicense:` |
| `-[GTDebugProductStatusMenuGenerator makeMenuItems]` | `0x1002eef64` | 全部调试生成命令入口 |
| sel `generateProLicense:` | `0x100f8496b` | 本地造 Pro license 的动作(IMP 待 RE-1 定位) |
| `Tower.LicenseInfo` ivars | `licenseType`/`daysLeft`/`revoked` | 运行时授权状态对象 |
| UserDefaults `GTLicenseActivationState` | 串 `0x101068420` | 激活状态持久化键 |
| `Tower.FeatureAvailability`(enum) | 元数据 `0x100a38ec4` | 功能可用性判定 |
| `Tower.ProFeatureSpec`(struct) | `0x1009c0168` 区 | Pro 功能描述 |
| 激活 API | `account.git-tower.com/activations/{uuid}/resume` | 服务器激活/续期 |
