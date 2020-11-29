//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceCreateRepositoryOperation.h"

@class GitLabAPIClient, GitLabAPIRequest, NSString;

@interface GTServiceCreateGitLabRepositoryOperation : GTServiceCreateRepositoryOperation
{
    GitLabAPIClient *_apiClient;
    GitLabAPIRequest *_request;
    long long _serviceAccountType;
    long long _accountID;
    NSString *_accountName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) GitLabAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GitLabAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)cancel;
- (void)performFetchRequest;
- (void)operationWillExecute;

@end
