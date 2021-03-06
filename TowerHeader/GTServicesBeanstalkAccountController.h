//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTServicesBeanstalkAPIControllerDelegate-Protocol.h"

@class BeanstalkAPICredentials, GTServiceAccount, GTServiceAccountCredentials, GTServicesBeanstalkAPIController, NSArray, NSManagedObjectContext, NSNumber, NSString;
@protocol GTServicesBeanstalkAccountControllerDelegate;

@interface GTServicesBeanstalkAccountController : NSObject <GTServicesBeanstalkAPIControllerDelegate>
{
    id <GTServicesBeanstalkAccountControllerDelegate> _delegate;
    GTServiceAccount *_serviceAccount;
    NSNumber *_authenticationMethodValue;
    NSString *_accountName;
    NSString *_username;
    NSString *_password;
    NSString *_privateToken;
    GTServiceAccountCredentials *_serviceAccountCredentials;
    NSArray *_existingBeanstalkAccounts;
    GTServiceAccountCredentials *_originalServiceAccountCredentials;
    GTServicesBeanstalkAPIController *_beanstalkAPIController;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)accountControllerWithServiceAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTServicesBeanstalkAPIController *beanstalkAPIController; // @synthesize beanstalkAPIController=_beanstalkAPIController;
@property(retain, nonatomic) GTServiceAccountCredentials *originalServiceAccountCredentials; // @synthesize originalServiceAccountCredentials=_originalServiceAccountCredentials;
@property(retain, nonatomic) NSArray *existingBeanstalkAccounts; // @synthesize existingBeanstalkAccounts=_existingBeanstalkAccounts;
@property(retain, nonatomic) GTServiceAccountCredentials *serviceAccountCredentials; // @synthesize serviceAccountCredentials=_serviceAccountCredentials;
@property(retain, nonatomic) NSString *privateToken; // @synthesize privateToken=_privateToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSNumber *authenticationMethodValue; // @synthesize authenticationMethodValue=_authenticationMethodValue;
@property(readonly, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) __weak id <GTServicesBeanstalkAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beanstalkAPIController:(id)arg1 didFailWithError:(id)arg2;
- (void)beanstalkAPIControllerDidValidateCredentials:(id)arg1;
- (BOOL)validateStringNotEmpty:(id)arg1;
- (BOOL)validateUniqueServiceAccountName:(id)arg1 username:(id)arg2;
- (BOOL)validateBeanstalkUsernameFormat:(id)arg1;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (void)cancel;
- (void)validateAPICredentials;
- (BOOL)validate:(id *)arg1;
@property(readonly, nonatomic) BeanstalkAPICredentials *apiCredentials;
@property(readonly, nonatomic) NSString *sanitizedUsername;
@property(readonly, nonatomic) NSString *sanitizedAccountName;
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

