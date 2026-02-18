//
//  NSObject+TowerHook.m
//  TowerTweak
//
//  Created by Sylar on 2020/11/29.
//  Updated for Tower 10.x startup bypass.
//

#import "NSObject+TowerHook.h"
#import <objc/runtime.h>

// ============================================================
// Tower 10.x 启动弹窗绕过 + 许可证 Hook (ObjC Swizzle)
//
// sub_1007F1F40 的 patch 通过 patch.sh 直接写入二进制文件
// 这里只做 ObjC 层面的 hook:
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

@end
