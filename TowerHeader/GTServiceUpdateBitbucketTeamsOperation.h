//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceUpdateOrganizationsOperation.h"

@class BitbucketAPIClient, BitbucketAPIRequest;

@interface GTServiceUpdateBitbucketTeamsOperation : GTServiceUpdateOrganizationsOperation
{
    BitbucketAPIClient *_apiClient;
    BitbucketAPIRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BitbucketAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) BitbucketAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void)apiClientDidCancelRequest;
- (void)apiClientDidReceiveResponse:(id)arg1;
- (void)startFetchRequestWithPage:(unsigned long long)arg1;
- (void)cancel;
- (void)performFetchRequest;

@end

