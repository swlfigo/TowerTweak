//
//  NSObject+TowerHook.m
//  TowerTweak
//
//  Created by Sylar on 2020/11/29.
//  Updated for Tower 15.x startup bypass.
//

#import "NSObject+TowerHook.h"
#import <objc/runtime.h>

// ============================================================
// Tower 15.x 启动弹窗绕过 + 许可证 Hook (ObjC Swizzle)
//
// Hook 1: -[GTApplicationStatus isValidProductStatus] → return YES
//         让 openInitialWindowIfNeeded: 直接显示主窗口
//
// Hook 2: -[FNTrialLicense expirationDate] → 2099 年
//         试用到期日期延长 (兼容旧版逻辑)
//
// Hook 3: -[LicenseInfoButton initWithFrame:] → init + hidden + zero-size
//         隐藏工具栏 License 提示按钮
//
// Hook 4: -[GTMainWindowNavigationBarViewController configureLicenseBadge] → no-op
//         -[GTMainWindowNavigationBarViewController updateLicenseBadge] → no-op
//         隐藏导航栏 "Trial expires / Buy now" 标签
//
// Hook 5: -[GTToolbarController updateLicenseInfoToolbarItemVisibility] → no-op
//         -[GTToolbarController configureLicenseInfoToolbarItem:] → no-op
//         隐藏工具栏 License Info 项
//
// Hook 6: -[GTApplicationFlags isGettingStartedCompleted] → return YES
//         Tower 15.x 新增检查: openNewWindow: / showQuickStartWindow:
//         → canOpenWindows → isUserAuthorizedToRunApplication
//         → 需要 isGettingStartedCompleted == YES 才允许创建主窗口
//
// Hook 7: -[FNProductStatus isWithoutStatus/isActiveTrial/isExpiredTrial
//           /isExpiredLicense/isRevokedLicense] → return NO
//         启动决策函数 sub_10083A544 按顺序检查这 5 个状态,
//         任何一个命中就直接显示对应的 Onboarding 弹窗.
//         全部返回 NO 后才会走到 isGettingStartedCompleted 检查 → return 0 (直接启动)
// ============================================================

@implementation NSObject (TowerHook)

static void __attribute__((constructor)) initialize(void) {
    NSLog(@"[TowerTweak] ++++++++ loaded ++++++++");

    // ---- Hook 1: isValidProductStatus → YES ----
    Class appStatusClass = objc_getClass("GTApplicationStatus");
    if (appStatusClass) {
        [appStatusClass jr_swizzleMethod:NSSelectorFromString(@"isValidProductStatus")
                              withMethod:@selector(tweak_isValidProductStatus)
                                   error:nil];
        NSLog(@"[TowerTweak] hooked isValidProductStatus");
    }

    // ---- Hook 2: Trial 过期日期延长 ----
    Class trialClass = objc_getClass("FNTrialLicense");
    if (trialClass) {
        [trialClass jr_swizzleMethod:NSSelectorFromString(@"expirationDate")
                          withMethod:@selector(tweak_expirationDate)
                               error:nil];
        NSLog(@"[TowerTweak] hooked FNTrialLicense.expirationDate");
    }

    // ---- Hook 3: 隐藏 License 提示按钮 ----
    Class licenseButtonClass = objc_getClass("_TtC5Tower17LicenseInfoButton");
    if (licenseButtonClass) {
        [licenseButtonClass jr_swizzleMethod:NSSelectorFromString(@"initWithFrame:")
                                 withMethod:@selector(tweak_initWithFrame:)
                                      error:nil];
        [licenseButtonClass jr_swizzleMethod:NSSelectorFromString(@"initWithCoder:")
                                 withMethod:@selector(tweak_initWithCoder:)
                                      error:nil];
        NSLog(@"[TowerTweak] hooked LicenseInfoButton");
    }

    // ---- Hook 3b: 隐藏 LicenseInfoToolbarItem ----
    Class licenseToolbarItem = objc_getClass("_TtC5Tower22LicenseInfoToolbarItem");
    if (licenseToolbarItem) {
        [licenseToolbarItem jr_swizzleMethod:NSSelectorFromString(@"initWithItemIdentifier:")
                                 withMethod:@selector(tweak_initWithItemIdentifier:)
                                      error:nil];
        NSLog(@"[TowerTweak] hooked LicenseInfoToolbarItem");
    }

    // ---- Hook 4: 隐藏导航栏 License Badge ----
    Class navBarVC = objc_getClass("GTMainWindowNavigationBarViewController");
    if (navBarVC) {
        [navBarVC jr_swizzleMethod:NSSelectorFromString(@"configureLicenseBadge")
                        withMethod:@selector(tweak_configureLicenseBadge)
                             error:nil];
        [navBarVC jr_swizzleMethod:NSSelectorFromString(@"updateLicenseBadge")
                        withMethod:@selector(tweak_updateLicenseBadge)
                             error:nil];
        NSLog(@"[TowerTweak] hooked GTMainWindowNavigationBarViewController (licenseBadge)");
    }

    // ---- Hook 5: 隐藏工具栏 License Info Item ----
    Class toolbarCtrl = objc_getClass("GTToolbarController");
    if (toolbarCtrl) {
        [toolbarCtrl jr_swizzleMethod:NSSelectorFromString(@"updateLicenseInfoToolbarItemVisibility")
                           withMethod:@selector(tweak_updateLicenseInfoToolbarItemVisibility)
                                error:nil];
        [toolbarCtrl jr_swizzleMethod:NSSelectorFromString(@"configureLicenseInfoToolbarItem:")
                           withMethod:@selector(tweak_configureLicenseInfoToolbarItem:)
                                error:nil];
        NSLog(@"[TowerTweak] hooked GTToolbarController (licenseInfoToolbarItem)");
    }

    // ---- Hook 6: isGettingStartedCompleted → YES ----
    // Tower 15.x: openNewWindow:/showQuickStartWindow: 内部调用 canOpenWindows
    // → isUserAuthorizedToRunApplication → 要求 isGettingStartedCompleted == YES
    // 不 hook 此方法会导致: 启动弹窗被跳过但主窗口无法创建
    Class flagsClass = objc_getClass("GTApplicationFlags");
    if (flagsClass) {
        [flagsClass jr_swizzleMethod:NSSelectorFromString(@"isGettingStartedCompleted")
                          withMethod:@selector(tweak_isGettingStartedCompleted)
                               error:nil];
        NSLog(@"[TowerTweak] hooked GTApplicationFlags.isGettingStartedCompleted");
    }

    // ---- Hook 7: 跳过启动弹窗 (产品状态检查全部返回 NO) ----
    // 启动决策函数依次检查: isWithoutStatus → isActiveTrial → isExpiredTrial
    // → isExpiredLicense → isRevokedLicense, 任一命中就显示 Onboarding 弹窗.
    // 全部返回 NO 才走到 isGettingStartedCompleted (Hook 6) → 直接启动
    // 注意: 不能用 JRSwizzle 将多个 selector 交换到同一个方法 (交换会级联覆盖),
    //       使用 method_setImplementation 直接替换 IMP
    Class productStatusClass = objc_getClass("FNProductStatus");
    if (productStatusClass) {
        IMP returnNO = imp_implementationWithBlock(^BOOL(id _self) { return NO; });
        NSArray *sels = @[@"isWithoutStatus", @"isActiveTrial", @"isExpiredTrial",
                          @"isExpiredLicense", @"isRevokedLicense"];
        for (NSString *sel in sels) {
            Method m = class_getInstanceMethod(productStatusClass, NSSelectorFromString(sel));
            if (m) method_setImplementation(m, returnNO);
        }
        NSLog(@"[TowerTweak] hooked FNProductStatus (all status checks → NO)");
    }

    NSLog(@"[TowerTweak] ++++++++ all hooks installed ++++++++");
}

#pragma mark - isValidProductStatus → YES

- (BOOL)tweak_isValidProductStatus {
    return YES;
}

#pragma mark - Trial expirationDate → 2099

- (NSDate *)tweak_expirationDate {
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    [fmt setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    fmt.timeZone = [NSTimeZone systemTimeZone];
    return [fmt dateFromString:@"2099-12-27 08:08:08"];
}

#pragma mark - 隐藏 LicenseInfoButton (init + hidden)

- (id)tweak_initWithFrame:(CGRect)rect {
    id btn = [self tweak_initWithFrame:rect]; // swizzled → calls original
    if (btn) {
        [(NSView *)btn setHidden:YES];
        [(NSView *)btn setFrameSize:NSMakeSize(0, 0)];
    }
    return btn;
}

- (id)tweak_initWithCoder:(NSCoder *)coder {
    id btn = [self tweak_initWithCoder:coder]; // swizzled → calls original
    if (btn) {
        [(NSView *)btn setHidden:YES];
        [(NSView *)btn setFrameSize:NSMakeSize(0, 0)];
    }
    return btn;
}

#pragma mark - 隐藏 LicenseInfoToolbarItem

- (id)tweak_initWithItemIdentifier:(id)identifier {
    id item = [self tweak_initWithItemIdentifier:identifier]; // swizzled → calls original
    if (item) {
        NSView *emptyView = [[NSView alloc] initWithFrame:NSZeroRect];
        [emptyView setHidden:YES];
        [(NSToolbarItem *)item setView:emptyView];
        [(NSToolbarItem *)item setMinSize:NSMakeSize(0, 0)];
        [(NSToolbarItem *)item setMaxSize:NSMakeSize(0, 0)];
    }
    return item;
}

#pragma mark - 隐藏导航栏 License Badge (no-op)

- (void)tweak_configureLicenseBadge {}
- (void)tweak_updateLicenseBadge {}

#pragma mark - 隐藏工具栏 License Info Item (no-op)

- (void)tweak_updateLicenseInfoToolbarItemVisibility {}
- (void)tweak_configureLicenseInfoToolbarItem:(id)arg {}

#pragma mark - isGettingStartedCompleted → YES

- (BOOL)tweak_isGettingStartedCompleted {
    return YES;
}

@end
