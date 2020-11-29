//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceEditPullRequestCommentOperation.h"

@class BitbucketAPIClient, BitbucketAPIRequest, NSNumber, NSString;

@interface GTServiceEditBitbucketPullRequestCommentOperation : GTServiceEditPullRequestCommentOperation
{
    BitbucketAPIClient *_apiClient;
    BitbucketAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountID;
    NSString *_accountUsername;
    NSString *_repositoryName;
    NSNumber *_pullRequestNumber;
    NSNumber *_pullRequestCommentID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pullRequestCommentID; // @synthesize pullRequestCommentID=_pullRequestCommentID;
@property(retain, nonatomic) NSNumber *pullRequestNumber; // @synthesize pullRequestNumber=_pullRequestNumber;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) BitbucketAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) BitbucketAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startFetchRequestWithPage:(unsigned long long)arg1;
- (void)cancel;
- (void)performRequest;
- (void)operationWillExecute;

@end

