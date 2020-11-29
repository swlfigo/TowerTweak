//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTService, GTServiceAccountCredentialsStore;

@interface GTServiceAccountCredentialsManager : NSObject
{
    GTService *_service;
    GTServiceAccountCredentialsStore *_serviceAccountCredentialsStore;
}

+ (id)serviceAccountCredentialsManagerWithService:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTServiceAccountCredentialsStore *serviceAccountCredentialsStore; // @synthesize serviceAccountCredentialsStore=_serviceAccountCredentialsStore;
@property(retain, nonatomic) GTService *service; // @synthesize service=_service;
- (long long)credentialsStoreStrategyForServiceAccountCredentials:(id)arg1;
- (BOOL)storeCustomSSHPrivateKeyForServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (BOOL)storeCustomSSHPasswordForServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (BOOL)storeTokensForServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (BOOL)storePasswordsForServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (id)serviceAccountCredentialsForServiceAccount:(id)arg1 error:(id *)arg2;
- (BOOL)storeServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (id)initWithService:(id)arg1 serviceAccountCredentialsStore:(id)arg2;
- (id)initWithService:(id)arg1;
- (id)init;

@end

