# Tower 17.x Pro 授权破解 — 执行计划

> 目标:在 Tower 17.1 (Build 551) 上让 App 认为当前为**有效 Pro 正式授权**,解锁全部 Pro-only 功能,且不依赖联网激活。
> 基于 IDA (idalib MCP) 对 `/Applications/Tower.app/Contents/MacOS/Tower` 的逆向。

---

## 0. 背景:17.x 已换掉整套授权体系(与现有文档的差异)

| 维度 | 旧方案 (6.1 ~ 15.x, 见 ReverseEngineering.md) | Tower 17.1 现状 |
|------|----------------------------------------------|-----------------|
| 授权框架 | ObjC `FNLicensing.framework` | **Swift `LicensingService`**(全新) |
| 算法 | `MD5(hashSource + salt)`,salt=`JuD324...` | **已移除**,二进制内搜不到 salt / FNLicense* |
| 授权模型 | 本地 plist + 机器绑定哈希 | **服务器激活**:`activateLicense(email:code:)` → `account.git-tower.com` → 设备激活 |
| 本地存储 | `trial.plist` / `license.plist`(带 code 校验) | **NSUserDefaults 键 `GTLicenseActivationState`**(无签名 plist 文件) |
| 运行时状态 | `FNProductStatus.mode` | Swift 类 `Tower.LicenseInfo`(`licenseType` / `daysLeft` / `revoked` / `expired`) |
| 功能门控 | `mustCheckFeatureAvailability`(仅 license 模式检查) | Swift `FeatureAvailability` 枚举 + `ProFeatureSpec` |

**结论:老的「算号改 plist」对 17.1 完全失效,需要新方案。**

### 已确认的关键事实
- **持久化层无签名校验**:激活状态存于 UserDefaults `GTLicenseActivationState` / `GTLicenseActivationLastUpdatedDate`,读取路径未见 HMAC / 签名验证 → 篡改缓存(如过期时间)不会触发完整性报错(与实测一致)。
- **二进制自带本地 license 生成器**:调试类 `GTDebugProductStatusMenuGenerator` 含命令
  `Generate Valid Pro License`(action `generateProLicense:`)、`Generate Valid Basic License`、
  `Generate Valid License with Other Machine UUID`、`Generate Expired/Revoked License` 等 →
  **纯客户端构造「被 App 认可的 Pro license」的算法就在二进制里**。

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
