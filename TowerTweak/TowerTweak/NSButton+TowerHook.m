//
//  NSButton+TowerHook.m
//  Hook
//
//  Created by Sylar on 2020/11/28.
//

#import "NSButton+TowerHook.h"

@implementation NSButton (TowerHook)
static void __attribute__((constructor)) initialize(void) {
    NSLog(@"++++++++ loaded ++++++++");
    
    [objc_getClass("_TtC5Tower17LicenseInfoButton") jr_swizzleMethod:NSSelectorFromString(@"initWithFrame:") withMethod:@selector(tweak_initWithFrame:) error:nil];
    
    [objc_getClass("_TtC5Tower17LicenseInfoButton") jr_swizzleMethod:NSSelectorFromString(@"configureButtonStyleWithLicenseInfo:") withMethod:@selector(tweak_configureButtonStyleWithLicenseInfo:) error:nil];
    
    

}

-(id)tweak_initWithFrame:(CGRect)rect{
    return nil;
    //If you want to Modify Trail Expire UI, Can Just Retrun Ori Frame and Eidt in Below Func
    return [self tweak_initWithFrame:rect];
}

- (void)tweak_configureButtonStyleWithLicenseInfo:(_TtC5Tower11LicenseInfo*)arg1{
    [self tweak_configureButtonStyleWithLicenseInfo:arg1];
    self.title = @"Tower Tweak!";
}
@end
