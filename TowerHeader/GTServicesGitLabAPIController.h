//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNRESTAPIRequest, GTServiceAPIVersionEnumerator, GTServiceOAuthClient, GitLabAPIClient, GitLabAPICredentials, GitLabAPIResponse;
@protocol GTServicesGitLabAPIControllerDelegate;

@interface GTServicesGitLabAPIController : NSObject
{
    id <GTServicesGitLabAPIControllerDelegate> _delegate;
    unsigned long long _serviceType;
    GitLabAPIResponse *_lastResponse;
    unsigned long long _serverAPIVersion;
    GTServiceOAuthClient *_oauthAPIClient;
    GitLabAPIClient *_apiClient;
    FNRESTAPIRequest *_request;
    GTServiceAPIVersionEnumerator *_apiVersionEnumerator;
    GitLabAPICredentials *_currentAPICredentials;
}

+ (id)controllerWithServiceType:(unsigned long long)arg1;
+ (id)keyPathsForValuesAffectingLoading;
- (void).cxx_destruct;
@property(retain, nonatomic) GitLabAPICredentials *currentAPICredentials; // @synthesize currentAPICredentials=_currentAPICredentials;
@property(retain, nonatomic) GTServiceAPIVersionEnumerator *apiVersionEnumerator; // @synthesize apiVersionEnumerator=_apiVersionEnumerator;
@property(retain, nonatomic) FNRESTAPIRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GitLabAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) GTServiceOAuthClient *oauthAPIClient; // @synthesize oauthAPIClient=_oauthAPIClient;
@property(nonatomic) unsigned long long serverAPIVersion; // @synthesize serverAPIVersion=_serverAPIVersion;
@property(retain, nonatomic) GitLabAPIResponse *lastResponse; // @synthesize lastResponse=_lastResponse;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) __weak id <GTServicesGitLabAPIControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidCancelRequest;
- (void)controllerDidFailWithError:(id)arg1;
- (void)controllerDidReceiveValidateCredentialsAPIResponse:(id)arg1;
- (void)controllerDidReceiveAuthorization:(id)arg1;
- (void)cancel;
- (void)validateCredentials:(id)arg1 apiVersion:(unsigned long long)arg2;
- (void)validateCredentials:(id)arg1;
- (void)createAuthorizationWithCode:(id)arg1;
- (void)requestAuthorizationCode:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (id)initWithServiceType:(unsigned long long)arg1;

@end

