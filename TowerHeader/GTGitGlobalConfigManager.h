//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTGitGlobalConfigManager : NSObject
{
}

+ (id)sharedManager;
- (void)postConfigChangedNotification;
- (void)setKeepMergeToolBackupFiles:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateGlobalGPGConfigValuesWithGPGConfigInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateGlobalUserWithUserInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadGlobalConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)reloadGlobalConfig:(id *)arg1;

@end

