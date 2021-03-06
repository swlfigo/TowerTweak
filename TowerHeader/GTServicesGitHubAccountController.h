//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTServicesGitHubAPIControllerDelegate-Protocol.h"

@class GTServiceAccount, GTServiceAccountCredentials, GTServiceAccountCredentialsStore, GTServicesGitHubAPIController, GitHubAPIAuthorization, GitHubAPICredentials, NSArray, NSManagedObjectContext, NSNumber, NSString;
@protocol GTServicesGitHubAccountControllerDelegate;

@interface GTServicesGitHubAccountController : NSObject <GTServicesGitHubAPIControllerDelegate>
{
    id <GTServicesGitHubAccountControllerDelegate> _delegate;
    GTServiceAccount *_serviceAccount;
    NSString *_username;
    NSString *_password;
    NSString *_authenticationCode;
    NSNumber *_authenticationMethodValue;
    NSArray *_existingGitHubAccounts;
    NSString *_accessToken;
    GTServiceAccountCredentials *_originalServiceAccountCredentials;
    GTServiceAccountCredentialsStore *_credentialsStore;
    GitHubAPIAuthorization *_authorization;
    GTServicesGitHubAPIController *_gitHubAPIController;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)accountControllerWithServiceAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTServicesGitHubAPIController *gitHubAPIController; // @synthesize gitHubAPIController=_gitHubAPIController;
@property(retain, nonatomic) GitHubAPIAuthorization *authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) GTServiceAccountCredentialsStore *credentialsStore; // @synthesize credentialsStore=_credentialsStore;
@property(retain, nonatomic) GTServiceAccountCredentials *originalServiceAccountCredentials; // @synthesize originalServiceAccountCredentials=_originalServiceAccountCredentials;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSArray *existingGitHubAccounts; // @synthesize existingGitHubAccounts=_existingGitHubAccounts;
@property(retain, nonatomic) NSNumber *authenticationMethodValue; // @synthesize authenticationMethodValue=_authenticationMethodValue;
@property(retain, nonatomic) NSString *authenticationCode; // @synthesize authenticationCode=_authenticationCode;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) __weak id <GTServicesGitHubAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)gitHubAPIController:(id)arg1 didFailWithError:(id)arg2;
- (void)gitHubAPIControllerDidDeleteAuthorization:(id)arg1;
- (void)gitHubAPIController:(id)arg1 didCreateAuthorization:(id)arg2;
- (void)gitHubAPIControllerDidValidateCredentials:(id)arg1;
- (void)cancel;
- (void)validateCredentials;
- (void)reauthorize;
- (void)authorize;
- (BOOL)validateStringNotEmpty:(id)arg1;
- (BOOL)validateUniqueServiceUsername:(id)arg1;
- (BOOL)validateGitHubUsernameFormat:(id)arg1;
- (BOOL)validateAuthorization:(id)arg1;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (BOOL)validate:(id *)arg1;
@property(readonly, nonatomic) GTServiceAccountCredentials *serviceAccountCredentials;
@property(readonly, nonatomic) GitHubAPICredentials *apiCredentials;
@property(readonly, nonatomic) NSString *sanitizedUsername;
@property(readonly, nonatomic) BOOL needsReauthorization;
@property(readonly, nonatomic) BOOL needsAuthorization;
@property(readonly, nonatomic) long long authenticationMethod;
@property(readonly, nonatomic) NSArray *authenticationMethods;
- (void)initOriginalServiceAccountCredentialsWithServiceAccount:(id)arg1;
- (id)initWithServiceAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

