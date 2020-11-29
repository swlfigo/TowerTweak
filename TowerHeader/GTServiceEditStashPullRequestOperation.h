//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceEditPullRequestOperation.h"

@class NSNumber, NSString, StashAPIClient, StashAPIRequest;

@interface GTServiceEditStashPullRequestOperation : GTServiceEditPullRequestOperation
{
    StashAPIClient *_apiClient;
    StashAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountUsername;
    NSString *_repositoryName;
    NSNumber *_pullRequestNumber;
    NSNumber *_pullRequestVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pullRequestVersion; // @synthesize pullRequestVersion=_pullRequestVersion;
@property(retain, nonatomic) NSNumber *pullRequestNumber; // @synthesize pullRequestNumber=_pullRequestNumber;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) StashAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) StashAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startRequest;
- (void)cancel;
- (void)performRequest;
- (void)operationWillExecute;

@end
