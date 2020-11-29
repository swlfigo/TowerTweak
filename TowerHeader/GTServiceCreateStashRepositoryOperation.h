//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceCreateRepositoryOperation.h"

@class NSString, StashAPIClient, StashAPIRequest;

@interface GTServiceCreateStashRepositoryOperation : GTServiceCreateRepositoryOperation
{
    StashAPIClient *_apiClient;
    StashAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_accountSlug;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accountSlug; // @synthesize accountSlug=_accountSlug;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) StashAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) StashAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)cancel;
- (void)performFetchRequest;
- (void)operationWillExecute;

@end

