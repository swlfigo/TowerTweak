# TowerTweak

Tower Git macOS App 逆向研究 (6.1 ~ 10.x)

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

## 仅供学习交流，严禁用于商业用途
