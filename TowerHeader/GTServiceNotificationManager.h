//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTServiceNotificationManager : NSObject
{
}

+ (id)sharedManager;
- (void)postServiceActivitiesDidUpdateNotificationWithWithRepositoryID:(id)arg1;
- (void)postServiceActivitiesDidUpdateNotification;
- (void)postServiceAccountDidAuthorizeNotificationWithAuthCode:(id)arg1 state:(id)arg2;
- (void)postServiceActivitiesDidUpdateProgressNotification;
- (void)postServicePullRequestCommentsDidUpdateNotificationWithServiceRepositoryID:(id)arg1 changeset:(id)arg2;
- (void)postServicePullRequestsDidUpdateNotificationWithServiceRepositoryID:(id)arg1 changeset:(id)arg2;
- (void)postServicePublicKeysDidUpdateNotificationWithServiceAccountID:(id)arg1 changeset:(id)arg2;
- (void)postServiceRepositoriesDidUpdateNotificationWithServiceAccountID:(id)arg1 changeset:(id)arg2;
- (void)postServiceRepositoriesDidUpdateNotificationWithChangeset:(id)arg1;
- (void)postServiceAccountsDidUpdateNotificationWithChangeset:(id)arg1;
- (void)postServicesDidUpdateNotificationWithChangeset:(id)arg1;

@end

