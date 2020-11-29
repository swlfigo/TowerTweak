//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceUpdateRepositoriesOperation.h"

@class BitbucketAPIClient, BitbucketAPIRequest, NSString;

@interface GTServiceUpdateBitbucketRepositoriesOperation : GTServiceUpdateRepositoriesOperation
{
    BitbucketAPIClient *_apiClient;
    BitbucketAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountUsername;
    NSString *_organizationUserID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *organizationUserID; // @synthesize organizationUserID=_organizationUserID;
@property(retain, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) BitbucketAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) BitbucketAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startFetchRequestWithNextPageURL:(id)arg1;
- (void)cancel;
- (void)performFetchRequest;
- (void)operationWillExecute;

@end

