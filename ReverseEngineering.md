# Tower 10.0 许可证逆向分析

> 基于 Tower 10.0 (macOS) 的 FNLicensing.framework 逆向分析，使用 IDA Pro + Hex-Rays 反编译。

## 目录

- [整体架构](#整体架构)
- [核心类关系](#核心类关系)
- [许可证文件结构](#许可证文件结构)
- [算号算法详解](#算号算法详解)
- [验证流程](#验证流程)
- [状态判定流程](#状态判定流程)
- [运行时参数提取](#运行时参数提取)
- [逆向工具与方法](#逆向工具与方法)

---

## 整体架构

```
Tower 主二进制
├── GTProductConfig          // 存储产品配置（salt、版本、机器标识等）
│   └── FNProductConfig      // FNLicensing 框架内部的配置类
└── GTProductController      // 产品授权控制器
    └── isUserAuthorizedToRunApplication
        └── isValidProductStatus
            └── FNProductStatus.isValid

FNLicensing.framework
├── FNLicenseManager         // 许可证管理入口
│   ├── loadProductStatus    // 加载许可证状态
│   ├── readProductLicense   // 读取正式许可证
│   └── readTrialLicense     // 读取试用许可证
├── FNLicenseValidator       // 许可证验证器
│   ├── validateProductLicense:
│   └── validateTrialLicense:
├── FNLicenseHashGenerator   // 哈希生成器（核心算法）
│   ├── generateHashForLicense:
│   ├── generateHashForDictionary:
│   └── hashSourceForDictionary:
├── FNLicenseStoreManager    // 许可证文件读写
├── FNProductLicense         // 正式许可证模型
├── FNTrialLicense           // 试用许可证模型
└── FNProductStatus          // 产品状态（mode 枚举）
```

---

## 核心类关系

```
GTProductConfig (Tower主二进制)
    │
    │  初始化时设置:
    │  - hashingSalt = "JuD324AiNyS89oTtS10sVyJoUaAgNv1q"
    │  - productName = "tower"
    │  - productVersion = "10.0"
    │  - machineUUID = MD5(IOPlatformSerialNumber + ...)
    │  - userName = MD5(NSUserName() + ...)
    │
    ▼
FNProductConfig (FNLicensing)
    │
    ├──▶ FNLicenseHashGenerator (用于生成/验证哈希)
    │
    └──▶ FNLicenseValidator (用于验证许可证)
```

---

## 许可证文件结构

### 存储路径

```
~/Library/Application Support/com.fournova.Tower3/{machineUUID}/
├── trial.plist      // 试用许可证
└── license.plist    // 正式许可证
```

### Trial License (trial.plist)

```xml
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>code</key>
    <string>d2944881663c2ce05ddb192913fc419e</string>
    <key>expiration_date</key>
    <string>2099-02-21T23:59:59Z</string>
    <key>machine</key>
    <string>71c4ce7f8e6e2b471375b46efa5d0b17</string>
    <key>product</key>
    <string>tower</string>
    <key>product_version</key>
    <string>10.0</string>
    <key>type</key>
    <string>TRIAL</string>
    <key>user</key>
    <string>2520fba7a33f07e4130f1e0078490745</string>
</dict>
</plist>
```

### Product License (license.plist)

包含以下字段：`identifier`, `license`, `email`, `masked`, `plan`, `type`, `machine`, `user`, `expiration_date`, `features`, `code` 等。

---

## 算号算法详解

### 核心公式

```
code = MD5( hashSource + hashingSalt )
```

其中：
- `hashSource` = 按规则处理后的字段值，逗号连接
- `hashingSalt` = `JuD324AiNyS89oTtS10sVyJoUaAgNv1q`

### 算法步骤（`generateHashForDictionary:` → `hashSourceForDictionary:`）

#### 第 1 步：获取字典所有 key

从许可证 plist 字典中取出所有 key。

```
Trial 示例: ["code", "expiration_date", "machine", "product", "product_version", "type", "user"]
```

#### 第 2 步：过滤 key

移除 `"code"` key（因为 code 就是要计算的结果）。

```
过滤后: ["expiration_date", "machine", "product", "product_version", "type", "user"]
```

#### 第 3 步：按字母顺序排序

```
排序后: ["expiration_date", "machine", "product", "product_version", "type", "user"]
```

#### 第 4 步：按排序后的 key 取值并做替换

遍历排序后的 key，按以下规则取值：

| key 名称 | 处理方式 |
|----------|---------|
| `"user"` | 替换为 `FNProductConfig.userName`（不使用字典原值） |
| `"machine"` | 替换为 `FNProductConfig.machineUUID`（不使用字典原值） |
| 值为 `NSArray` 类型 | 数组元素排序后用 `","` 连接 |
| 其他 | 直接使用字典中的值 |

> 关键点：`user` 和 `machine` 的值在验证时会被本地配置值覆盖，确保许可证绑定到当前机器。

#### 第 5 步：逗号连接所有值

```
hashSource = "2099-02-21T23:59:59Z,71c4ce7f8e6e2b471375b46efa5d0b17,tower,10.0,TRIAL,2520fba7a33f07e4130f1e0078490745"
```

格式：`expiration_date值,machine值,product值,product_version值,type值,user值`

#### 第 6 步：拼接 salt

hashSource 和 salt 之间**无分隔符**，直接拼接：

```
fullString = hashSource + "JuD324AiNyS89oTtS10sVyJoUaAgNv1q"
```

#### 第 7 步：计算 MD5

```
code = MD5(fullString)
     = "d2944881663c2ce05ddb192913fc419e"
```

### 反编译伪代码

```c
// -[FNLicenseHashGenerator generateHashForDictionary:]
id generateHashForDictionary(self, dict) {
    NSString *hashSource = [self hashSourceForDictionary:dict];
    NSString *salt = [[self productConfig] hashingSalt];
    NSString *fullString = [NSString stringWithFormat:@"%@%@", hashSource, salt];
    return [fullString MD5String];
}

// -[FNLicenseHashGenerator hashSourceForDictionary:]
NSString* hashSourceForDictionary(self, dict) {
    NSArray *allKeys = [dict allKeys];
    // 1. 过滤掉 "code"
    NSArray *filteredKeys = filter(allKeys, ^(NSString *key) {
        return ![key isEqualToString:@"code"];
    });
    // 2. 按字母序排序
    NSArray *sortedKeys = [filteredKeys sortedArrayUsingSelector:@selector(compare:)];
    // 3. 按规则取值
    NSMutableArray *values = [NSMutableArray array];
    for (NSString *key in sortedKeys) {
        if ([key isEqualToString:@"user"]) {
            [values addObject:[[self productConfig] userName]];
        } else if ([key isEqualToString:@"machine"]) {
            [values addObject:[[self productConfig] machineUUID]];
        } else {
            id value = dict[key];
            if ([value isKindOfClass:[NSArray class]]) {
                value = [[value sortedArrayUsingSelector:@selector(compare:)]
                         componentsJoinedByString:@","];
            }
            [values addObject:value];
        }
    }
    // 4. 逗号连接
    return [values componentsJoinedByString:@","];
}
```

---

## 验证流程

### `validateTrialLicense:` / `validateProductLicense:`

```
输入: license 对象 (FNTrialLicense / FNProductLicense)
输出: BOOL

1. 从 license 获取 dictionaryRepresentation (即 plist 字典)
2. 调用 generateHashForDictionary: 计算期望的 code
3. 获取 license.code (plist 中存储的 code)
4. 比较两个 code 是否相等 (FNEqualStrings)
5. 相等 → return YES (验证通过)
   不等 → return NO  (验证失败，许可证无效)
```

### 反编译伪代码

```c
// -[FNLicenseValidator validateProductLicense:]
bool validateProductLicense(self, license) {
    FNLicenseHashGenerator *generator = [self licenseHashGenerator];
    NSString *expectedCode = [generator generateHashForLicense:license];
    NSString *actualCode = [license code];
    return FNEqualStrings(expectedCode, actualCode);
}
```

---

## 状态判定流程

### `loadProductStatus:` 流程图

```
loadProductStatus
│
├─ 1. 尝试 readProductLicense (读取 license.plist)
│     │
│     ├─ 读取成功且哈希验证通过
│     │     │
│     │     ├─ revoked == YES → mode = 5 (revokedLicense)
│     │     ├─ expired == YES → mode = 4 (expiredLicense)
│     │     └─ 否则         → mode = 3 (activeLicense) ✅
│     │
│     └─ 读取失败或验证不通过 → 继续
│
├─ 2. 尝试 readTrialLicense (读取 trial.plist)
│     │
│     ├─ 读取成功且哈希验证通过
│     │     │
│     │     ├─ expired == YES → mode = 2 (expiredTrial)
│     │     └─ 否则         → mode = 1 (activeTrial) ✅
│     │
│     └─ 读取失败或验证不通过 → 继续
│
└─ 3. 无有效许可证 → mode = 0 (withoutStatus)
```

### FNProductStatus mode 枚举

| mode | 名称 | isValid | 含义 |
|------|------|---------|------|
| 0 | withoutStatus | NO | 无许可证 |
| 1 | activeTrial | YES | 有效试用期 |
| 2 | expiredTrial | NO | 试用已过期 |
| 3 | activeLicense | YES | 有效正式许可证 |
| 4 | expiredLicense | NO | 正式许可证已过期 |
| 5 | revokedLicense | NO | 许可证已被吊销 |

`isValid` = `(mode == 1) || (mode == 3)`

---

## 运行时参数提取

由于 `hashingSalt`、`machineUUID`、`userName` 等值在运行时由 Tower 主二进制设置，无法直接从 FNLicensing.framework 中提取。使用 dylib 注入方式获取：

### 方法：DYLD_INSERT_LIBRARIES 注入

1. 编写 constructor dylib，延迟读取 `GTProductConfig.defaultConfig` 的各属性
2. 复制 Tower 二进制，去除代码签名 (`codesign --remove-signature`)
3. 重新 ad-hoc 签名 (`codesign -f -s -`)
4. 设置 `DYLD_FRAMEWORK_PATH` 指向 Tower 的 Frameworks 目录
5. 使用 `DYLD_INSERT_LIBRARIES` 加载 dylib 运行

```bash
# 编译 dylib
clang -dynamiclib -framework Foundation -o dump_salt.dylib dump_salt.m

# 去签名 + 重签
cp /Applications/Tower.app/Contents/MacOS/Tower ./Tower_unsigned
codesign --remove-signature ./Tower_unsigned
codesign -f -s - ./Tower_unsigned

# 注入运行
DYLD_INSERT_LIBRARIES=./dump_salt.dylib \
DYLD_FRAMEWORK_PATH="/Applications/Tower.app/Contents/Frameworks" \
DYLD_LIBRARY_PATH="/Applications/Tower.app/Contents/Frameworks" \
./Tower_unsigned
```

### 提取到的配置值

| 参数 | 值 | 说明 |
|------|---|------|
| hashingSalt | `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` | 哈希盐值（硬编码，所有机器相同） |
| productName | `tower` | 产品名 |
| productVersion | `10.0` | 产品版本 |
| machineUUID | `71c4ce7f8e6e2b471375b46efa5d0b17` | 机器标识（每台机器不同） |
| userName | `2520fba7a33f07e4130f1e0078490745` | 用户标识（每台机器不同） |
| licensingBaseURL | `https://account.git-tower.com/api/` | 许可证服务器 |
| developerSecret | (null) | 开发者密钥（未设置） |

> **注意**：`hashingSalt` 自 Tower 6.1 至 10.0 未变化，为硬编码常量。`machineUUID` 和 `userName` 每台机器不同。

---

## 逆向工具与方法

| 工具 | 用途 |
|------|------|
| IDA Pro + Hex-Rays | 反编译 FNLicensing.framework 和 Tower 主二进制 |
| IDA MCP (ida-pro-mcp) | 通过 Claude Code 远程调用 IDA 反编译能力 |
| otool -ov | 导出 ObjC 类/方法元数据 |
| nm | 符号表分析 |
| lipo | 从 Universal Binary 提取 arm64 切片 |
| codesign | 去除/重新签名代码签名 |
| DYLD_INSERT_LIBRARIES | 运行时 dylib 注入提取配置值 |
| class-dump / otool | 头文件导出 |

### 分析路径

```
/Applications/Tower.app/Contents/MacOS/Tower              → 主二进制（GTProductConfig 等）
/Applications/Tower.app/Contents/Frameworks/FNLicensing.framework → 许可证核心框架
/Applications/Tower.app/Contents/Frameworks/FNFoundation.framework → 基础框架（MD5String 等）
```

---

## 算号 Python 实现

```python
import hashlib
import plistlib

HASH_SALT = "JuD324AiNyS89oTtS10sVyJoUaAgNv1q"

def generate_code(license_dict: dict, machine_uuid: str, user_name: str) -> str:
    """
    Tower 许可证算号核心算法

    Args:
        license_dict: 许可证 plist 字典（包含所有字段）
        machine_uuid: 本机 machineUUID (从 GTProductConfig 获取)
        user_name: 本机 userName (从 GTProductConfig 获取)

    Returns:
        计算出的 code (MD5 hex string)
    """
    # 1. 获取所有 key，过滤掉 "code"
    keys = [k for k in license_dict.keys() if k != "code"]

    # 2. 按字母序排序
    keys.sort()

    # 3. 按规则取值
    values = []
    for k in keys:
        if k == "user":
            values.append(user_name)
        elif k == "machine":
            values.append(machine_uuid)
        elif isinstance(license_dict[k], list):
            values.append(",".join(sorted(license_dict[k])))
        else:
            values.append(str(license_dict[k]))

    # 4. 逗号连接
    hash_source = ",".join(values)

    # 5. 拼接 salt 并计算 MD5
    full_string = hash_source + HASH_SALT
    return hashlib.md5(full_string.encode("utf-8")).hexdigest()


def patch_trial(plist_path: str):
    """修改试用许可证过期时间并重新计算 code"""
    with open(plist_path, "rb") as f:
        pl = plistlib.load(f)

    # 验证当前 code 是否匹配（确认 salt 可用）
    current_code = generate_code(pl, pl["machine"], pl["user"])
    if current_code != pl["code"]:
        print("Hash Salt 不适用于此版本")
        return

    # 修改过期时间
    pl["expiration_date"] = "2099-12-31T23:59:59Z"

    # 重新计算 code
    pl["code"] = generate_code(pl, pl["machine"], pl["user"])

    # 写回文件
    with open(plist_path, "wb") as f:
        plistlib.dump(pl, f)

    print("Done! Reopen Tower, Enjoy!")
```

---

## 版本兼容性

| Tower 版本 | hashingSalt | 算法 | 状态 |
|-----------|-------------|------|------|
| 6.1 | `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` | 相同 | 已验证 |
| 6.3 (Build 273) | `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` | 相同 | 已验证 |
| 10.0 | `JuD324AiNyS89oTtS10sVyJoUaAgNv1q` | 相同 | 已验证 |

算号核心算法和 hashingSalt 在 6.1 到 10.0 之间保持不变。
