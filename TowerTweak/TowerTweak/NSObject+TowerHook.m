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
// Hook 3: -[LicenseInfoButton initWithFrame:] → return nil
//         隐藏工具栏 License 提示按钮
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
        NSLog(@"[TowerTweak] hooked LicenseInfoButton");
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

#pragma mark - 隐藏 LicenseInfoButton

- (id)tweak_initWithFrame:(CGRect)rect {
    return nil;
}

@end
