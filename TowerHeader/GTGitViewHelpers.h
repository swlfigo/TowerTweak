//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTGitViewHelpers : NSObject
{
}

+ (id)shortCommitHashFromCommitHash:(id)arg1;
+ (id)titleForRemoteActivity:(id)arg1;
+ (id)iconForRemoteActivityOperationType:(long long)arg1;
+ (id)relativeDateStringValueFromDate:(id)arg1;
+ (id)localizedStringValueFromDate:(id)arg1 forDateFormatStyle:(id)arg2 includesTime:(BOOL)arg3;
+ (id)localizedStringValueFromDate:(id)arg1 forDateFormatStyle:(id)arg2;
+ (id)displayColorForFileStatus:(unsigned long long)arg1;
+ (id)displayTitleForFileStatus:(unsigned long long)arg1;
+ (id)sharedInstance;
+ (id)displayTitleForBranch:(id)arg1;
+ (id)displayTitleForRef:(id)arg1;
+ (id)displayTitleForRepository:(id)arg1;
+ (id)navigationBarTitleForRepository:(id)arg1;

@end

