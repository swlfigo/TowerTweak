//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceUpdateRepositoriesOperation.h"

@class GitHubAPIClient, GitHubAPIRequest, NSString;

@interface GTServiceUpdateGitHubRepositoriesOperation : GTServiceUpdateRepositoriesOperation
{
    GitHubAPIClient *_apiClient;
    GitHubAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountUsername;
    NSString *_organizationUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *organizationUsername; // @synthesize organizationUsername=_organizationUsername;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) GitHubAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GitHubAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startFetchRequestWithPage:(unsigned long long)arg1;
- (void)cancel;
- (void)performFetchRequest;
- (void)operationWillExecute;

@end

