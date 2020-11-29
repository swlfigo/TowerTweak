//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BeanstalkAPIClient, BeanstalkAPIRequest;
@protocol GTServicesBeanstalkAPIControllerDelegate;

@interface GTServicesBeanstalkAPIController : NSObject
{
    id <GTServicesBeanstalkAPIControllerDelegate> _delegate;
    BeanstalkAPIClient *_apiClient;
    BeanstalkAPIRequest *_request;
}

+ (id)keyPathsForValuesAffectingLoading;
- (void).cxx_destruct;
@property(retain, nonatomic) BeanstalkAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) BeanstalkAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(nonatomic) __weak id <GTServicesBeanstalkAPIControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidCancelRequest;
- (void)controllerDidFailWithError:(id)arg1;
- (void)controllerDidReceiveAPIResponse:(id)arg1;
- (void)cancel;
- (void)validateCredentials:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;

@end

