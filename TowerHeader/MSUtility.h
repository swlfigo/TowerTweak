//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSUtility : NSObject
{
}

+ (id)archiveKeyedData:(id)arg1;
+ (id)unarchiveKeyedData:(id)arg1;
+ (id)sdkVersion;
+ (id)sdkName;
+ (BOOL)isAppStoreReceiptSandbox;
+ (BOOL)hasEmbeddedMobileProvision;
+ (long long)currentAppEnvironment;
+ (void)sharedAppOpenUrl:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (long long)sharedAppState;
+ (id)sharedAppDelegate;
+ (id)sharedApp;
+ (long long)applicationState;
+ (id)ISO8601DateFormatter;
+ (id)dateFromISO8601:(id)arg1;
+ (id)dateToISO8601:(id)arg1;
+ (double)nowInMilliseconds;
+ (BOOL)disableBackupForDirectoryURL:(id)arg1;
+ (BOOL)createDirectoryAtURL:(id)arg1;
+ (id)appCenterDirectoryURL;
+ (id)fullURLForPathComponent:(id)arg1;
+ (BOOL)fileExistsForPathComponent:(id)arg1;
+ (id)contentsOfDirectory:(id)arg1 propertiesForKeys:(id)arg2;
+ (id)loadDataForPathComponent:(id)arg1;
+ (id)createDirectoryForPathComponent:(id)arg1;
+ (BOOL)deleteFileAtURL:(id)arg1;
+ (BOOL)deleteItemForPathComponent:(id)arg1;
+ (id)createFileAtPathComponent:(id)arg1 withData:(id)arg2 atomically:(BOOL)arg3 forceOverwrite:(BOOL)arg4;

@end
