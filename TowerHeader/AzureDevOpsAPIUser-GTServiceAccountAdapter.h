//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AzureDevOpsAPI/AzureDevOpsAPIUser.h>

#import "GTServiceAccountAdapter-Protocol.h"

@class NSString, NSURL;

@interface AzureDevOpsAPIUser (GTServiceAccountAdapter) <GTServiceAccountAdapter>
@property(readonly, nonatomic) long long serviceAccountType;
@property(readonly, nonatomic) NSString *serviceAccountEmail;
@property(readonly, nonatomic) NSURL *serviceAccountWebURL;
@property(readonly, nonatomic) NSURL *serviceAccountAvatarURL;
@property(readonly, nonatomic) NSString *serviceAccountFullName;
@property(readonly, nonatomic) NSString *serviceAccountSlug;
@property(readonly, nonatomic) NSString *serviceAccountUsername;
@property(readonly, nonatomic) NSString *serviceAccountAccountName;
@property(readonly, nonatomic) NSString *serviceAccountID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

