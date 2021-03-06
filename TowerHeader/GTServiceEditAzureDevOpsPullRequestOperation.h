//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceEditPullRequestOperation.h"

@class AzureDevOpsAPIClient, AzureDevOpsAPIRequest, NSString;

@interface GTServiceEditAzureDevOpsPullRequestOperation : GTServiceEditPullRequestOperation
{
    AzureDevOpsAPIClient *_apiClient;
    AzureDevOpsAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountID;
    NSString *_accountUsername;
    NSString *_repositoryName;
    NSString *_collectionName;
    NSString *_pullRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pullRequestID; // @synthesize pullRequestID=_pullRequestID;
@property(retain, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) AzureDevOpsAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) AzureDevOpsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startRequest;
- (void)cancel;
- (void)performRequest;
- (void)operationWillExecute;

@end

