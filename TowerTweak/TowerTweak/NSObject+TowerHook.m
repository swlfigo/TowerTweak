//
//  NSObject+TowerHook.m
//  TowerTweak
//
//  Created by Sylar on 2020/11/29.
//

#import "NSObject+TowerHook.h"
#import <objc/runtime.h>
@implementation NSObject (TowerHook)
static void __attribute__((constructor)) initialize(void) {
    NSLog(@"++++++++ loaded ++++++++");
    
    [objc_getClass("FNLicenseValidator") jr_swizzleMethod:NSSelectorFromString(@"validateTrialLicense:") withMethod:@selector(tweak_validateTrialLicense:) error:nil];

    
    [objc_getClass("FNTrialLicense") jr_swizzleMethod:NSSelectorFromString(@"expirationDate") withMethod:@selector(tweak_expirationDate) error:nil];

    
    
}
//TO1W(-[A-Z]{4}){4}
-(id)tweak_tower1WindowsLicenseValidationPattern{
    id pattern = [self tweak_tower1WindowsLicenseValidationPattern];
    return pattern;
}
//TO2M(-[A-Z]{4}){4}
-(id)tweak_tower2LicenseValidationPattern{
    id pattern = [self tweak_tower2LicenseValidationPattern];
    return pattern;
}
//TOWR(-[A-Z]{4}){4}
//TOWR-AFDC-AFDC-AFDC-AFDC
//新版



- (char)tweak_validateTrialLicense:(id)v1{
    char a = [self tweak_validateTrialLicense:v1];
    return '\1';
    return a;
}

-(NSDate *)tweak_expirationDate{
//    NSDate *date = [self tweak_expirationDate];
    NSString *dateString = @"2099-12-27 08:08:08";
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init] ;
    [formatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    formatter.timeZone = [NSTimeZone systemTimeZone];
    //NSString转NSDate
    NSDate *newDate=[formatter dateFromString:dateString];
    return newDate;
}



@end
