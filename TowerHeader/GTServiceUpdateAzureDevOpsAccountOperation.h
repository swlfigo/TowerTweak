//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceUpdateAccountOperation.h"

@class AzureDevOpsAPIClient, AzureDevOpsAPIRequest, NSString;

@interface GTServiceUpdateAzureDevOpsAccountOperation : GTServiceUpdateAccountOperation
{
    AzureDevOpsAPIClient *_apiClient;
    AzureDevOpsAPIRequest *_request;
    long long _serviceAccountType;
    NSString *_username;
    NSString *_accountID;
    unsigned long long _serviceType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long serviceAccountType; // @synthesize serviceAccountType=_serviceAccountType;
@property(retain, nonatomic) AzureDevOpsAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) AzureDevOpsAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveUserResponse:(id)arg1;
- (void)cancel;
- (void)performFetchRequest;
- (void)operationWillExecute;

@end

