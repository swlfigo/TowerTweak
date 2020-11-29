//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTServicesAzureDevOpsAPIControllerDelegate-Protocol.h"

@class AzureDevOpsAPICredentials, GTServiceAccount, GTServiceAccountCredentials, GTServiceAccountCredentialsStore, GTServicesAzureDevOpsAPIController, NSArray, NSData, NSManagedObjectContext, NSNumber, NSString, NSURL;
@protocol GTServicesAzureDevOpsServerAccountControllerDelegate;

@interface GTServicesAzureDevOpsServerAccountController : NSObject <GTServicesAzureDevOpsAPIControllerDelegate>
{
    BOOL _trustsServer;
    id <GTServicesAzureDevOpsServerAccountControllerDelegate> _delegate;
    GTServiceAccount *_serviceAccount;
    NSString *_host;
    NSString *_collectionName;
    NSString *_username;
    NSString *_password;
    NSString *_privateToken;
    NSNumber *_authenticationMethodValue;
    NSArray *_existingAzureDevOpsServerAccounts;
    GTServiceAccountCredentials *_originalServiceAccountCredentials;
    GTServiceAccountCredentialsStore *_credentialsStore;
    GTServicesAzureDevOpsAPIController *_azureDevOpsAPIController;
    NSData *_serverTrustExceptionCookie;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)accountControllerWithServiceAccount:(id)arg1;
+ (id)keyPathsForValuesAffectingAuthenticationMethod;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSData *serverTrustExceptionCookie; // @synthesize serverTrustExceptionCookie=_serverTrustExceptionCookie;
@property(retain, nonatomic) GTServicesAzureDevOpsAPIController *azureDevOpsAPIController; // @synthesize azureDevOpsAPIController=_azureDevOpsAPIController;
@property(retain, nonatomic) GTServiceAccountCredentialsStore *credentialsStore; // @synthesize credentialsStore=_credentialsStore;
@property(retain, nonatomic) GTServiceAccountCredentials *originalServiceAccountCredentials; // @synthesize originalServiceAccountCredentials=_originalServiceAccountCredentials;
@property(retain, nonatomic) NSArray *existingAzureDevOpsServerAccounts; // @synthesize existingAzureDevOpsServerAccounts=_existingAzureDevOpsServerAccounts;
@property(nonatomic) BOOL trustsServer; // @synthesize trustsServer=_trustsServer;
@property(retain, nonatomic) NSNumber *authenticationMethodValue; // @synthesize authenticationMethodValue=_authenticationMethodValue;
@property(retain, nonatomic) NSString *privateToken; // @synthesize privateToken=_privateToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) __weak id <GTServicesAzureDevOpsServerAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)azureDevOpsAPIController:(id)arg1 didFailWithError:(id)arg2;
- (void)azureDevOpsAPIControllerDidValidateCredentials:(id)arg1;
- (void)cancel;
- (void)validateCredentials;
- (BOOL)validateStringNotEmpty:(id)arg1;
- (BOOL)validateUniqueServiceHost:(id)arg1 username:(id)arg2;
- (BOOL)validateUsernameFormat:(id)arg1;
- (BOOL)validateHostFormat:(id)arg1;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (BOOL)validate:(id *)arg1;
@property(readonly, nonatomic) GTServiceAccountCredentials *serviceAccountCredentials;
@property(readonly, nonatomic) AzureDevOpsAPICredentials *apiCredentials;
@property(readonly, nonatomic) NSString *sanitizedCollectionName;
@property(readonly, nonatomic) NSString *sanitizedUsername;
@property(readonly, nonatomic) NSString *sanitizedHost;
@property(readonly, nonatomic) NSURL *normalizedAPIURL;
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

