//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceEditPullRequestCommentOperation.h"

@class AzureDevOpsAPIClient, AzureDevOpsAPIRequest, NSNumber, NSString;

@interface GTServiceEditAzureDevOpsPullRequestCommentOperation : GTServiceEditPullRequestCommentOperation
{
    AzureDevOpsAPIClient *_apiClient;
    AzureDevOpsAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountUsername;
    NSString *_collectionName;
    NSString *_repositoryName;
    NSNumber *_pullRequestNumber;
    NSString *_pullRequestCommentID;
    NSString *_pullRequestCommentThreadID;
    NSString *_pullRequestParentCommentID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pullRequestParentCommentID; // @synthesize pullRequestParentCommentID=_pullRequestParentCommentID;
@property(retain, nonatomic) NSString *pullRequestCommentThreadID; // @synthesize pullRequestCommentThreadID=_pullRequestCommentThreadID;
@property(retain, nonatomic) NSString *pullRequestCommentID; // @synthesize pullRequestCommentID=_pullRequestCommentID;
@property(retain, nonatomic) NSNumber *pullRequestNumber; // @synthesize pullRequestNumber=_pullRequestNumber;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) AzureDevOpsAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) AzureDevOpsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)cancel;
- (void)performRequest;
- (void)operationWillExecute;

@end

