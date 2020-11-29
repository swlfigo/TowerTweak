//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTApplicationInitializing-Protocol.h"

@class NSString, NSUserDefaults;

@interface GTUserDefaultsInitializer : NSObject <GTApplicationInitializing>
{
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)migrateCherryPickDefaultsIfNeeded;
- (void)resetWindowTitleVisibilityOnMacOS11;
- (void)registerTagsSortSettingsDefaults;
- (void)registerHistoryViewSettingsDefaults;
- (BOOL)initialize:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
