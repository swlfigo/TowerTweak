//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTServicesGitHubAPIController, GitHubAPIAuthorization, NSArray, NSError;

@protocol GTServicesGitHubAPIControllerDelegate <NSObject>

@optional
- (void)gitHubAPIController:(GTServicesGitHubAPIController *)arg1 didFailWithError:(NSError *)arg2;
- (void)gitHubAPIControllerDidDeleteAuthorization:(GTServicesGitHubAPIController *)arg1;
- (void)gitHubAPIController:(GTServicesGitHubAPIController *)arg1 didCreateAuthorization:(GitHubAPIAuthorization *)arg2;
- (void)gitHubAPIController:(GTServicesGitHubAPIController *)arg1 didFetchAuthorizations:(NSArray *)arg2;
- (void)gitHubAPIControllerDidValidateCredentials:(GTServicesGitHubAPIController *)arg1;
@end

