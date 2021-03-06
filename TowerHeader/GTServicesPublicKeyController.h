//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNCommandOperationDelegate-Protocol.h"

@class FNCommandOperation, GTServiceAccount, NSArray, NSString;
@protocol GTServicesPublicKeyControllerDelegate;

@interface GTServicesPublicKeyController : NSObject <FNCommandOperationDelegate>
{
    id <GTServicesPublicKeyControllerDelegate> _delegate;
    GTServiceAccount *_serviceAccount;
    NSString *_name;
    NSString *_contents;
    NSArray *_existingPublicKeys;
    FNCommandOperation *_sshKeyGenCommand;
}

+ (id)controllerWithServiceAccount:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FNCommandOperation *sshKeyGenCommand; // @synthesize sshKeyGenCommand=_sshKeyGenCommand;
@property(retain, nonatomic) NSArray *existingPublicKeys; // @synthesize existingPublicKeys=_existingPublicKeys;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) __weak id <GTServicesPublicKeyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidFailToValidateKeyFormatWithError:(id)arg1;
- (void)controllerDidValidateKeyFormat;
- (void)commandDidFailToLaunch:(id)arg1;
- (void)commandDidTerminate:(id)arg1;
- (void)cancel;
- (void)validateKeyFormat;
- (BOOL)validateStringNotEmpty:(id)arg1;
- (BOOL)validateUniqueServicePublicKey:(id)arg1;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (BOOL)validate:(id *)arg1;
- (id)loadExistingPublicKeysForServiceAccount:(id)arg1;
- (id)initWithServiceAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

