//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTService, GTServiceAccount, GTServiceAccountCredentials, NSData, NSManagedObjectContext, NSNumber, NSString, NSURL;
@protocol GTCancelling, GTServicesAccountControllerDelegate;

@interface GTServicesAccountController : NSObject
{
    BOOL _trustsServer;
    id <GTServicesAccountControllerDelegate> _delegate;
    unsigned long long _serviceType;
    GTServiceAccount *_serviceAccount;
    NSString *_host;
    NSString *_accountName;
    NSString *_username;
    NSString *_password;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSData *_serverTrustExceptionCookie;
    NSNumber *_authenticationMethodValue;
    GTService *_service;
    id <GTCancelling> _serviceAccountValidator;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)accountControllerWithServiceType:(unsigned long long)arg1;
+ (id)accountControllerWithServiceAccount:(id)arg1;
+ (id)keyPathsForValuesAffectingNeedsToken;
+ (id)keyPathsForValuesAffectingNeedsPassword;
+ (id)keyPathsForValuesAffectingAuthenticationMethod;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) id <GTCancelling> serviceAccountValidator; // @synthesize serviceAccountValidator=_serviceAccountValidator;
@property(retain, nonatomic) GTService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSNumber *authenticationMethodValue; // @synthesize authenticationMethodValue=_authenticationMethodValue;
@property(retain, nonatomic) NSData *serverTrustExceptionCookie; // @synthesize serverTrustExceptionCookie=_serverTrustExceptionCookie;
@property(nonatomic) BOOL trustsServer; // @synthesize trustsServer=_trustsServer;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) __weak id <GTServicesAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidFailValidatingCredentialsWithError:(id)arg1;
- (void)controllerDidValidateCredentials:(id)arg1;
- (void)cancel;
- (void)validateCredentials;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (BOOL)validate:(id *)arg1;
- (id)makeUserInputValidators;
@property(readonly, nonatomic) GTServiceAccountCredentials *serviceAccountCredentials;
@property(readonly, nonatomic) NSString *sanitizedUsername;
@property(readonly, nonatomic) NSString *sanitizedHost;
@property(readonly, nonatomic) NSURL *normalizedAPIURL;
@property(readonly, nonatomic) BOOL needsToken;
@property(readonly, nonatomic) BOOL needsPassword;
@property(readonly, nonatomic) BOOL needsAuthorization;
@property(readonly, nonatomic) long long authenticationMethod;
- (id)initWithServiceType:(unsigned long long)arg1;
- (id)initWithServiceAccount:(id)arg1;

@end

