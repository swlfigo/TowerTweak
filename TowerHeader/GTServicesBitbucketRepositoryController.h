//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTServicesBitbucketAPIControllerDelegate-Protocol.h"

@class GTServiceAccount, GTServiceRepositoryCreationInfo, NSArray, NSNumber, NSString;

@interface GTServicesBitbucketRepositoryController : NSObject <GTServicesBitbucketAPIControllerDelegate>
{
    GTServiceAccount *_serviceAccount;
    GTServiceAccount *_selectedAccount;
    NSString *_repositoryTitle;
    NSString *_repositoryName;
    NSString *_repositoryDescription;
    NSNumber *_selectedAccessTypeValue;
    GTServiceRepositoryCreationInfo *_serviceRepositoryCreationInfo;
    NSArray *_accounts;
    NSArray *_accessTypes;
    NSArray *_existingRepositories;
}

+ (id)controllerWithServiceAccount:(id)arg1 serviceRepositoryCreationInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *existingRepositories; // @synthesize existingRepositories=_existingRepositories;
@property(retain, nonatomic) NSArray *accessTypes; // @synthesize accessTypes=_accessTypes;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) GTServiceRepositoryCreationInfo *serviceRepositoryCreationInfo; // @synthesize serviceRepositoryCreationInfo=_serviceRepositoryCreationInfo;
@property(retain, nonatomic) NSNumber *selectedAccessTypeValue; // @synthesize selectedAccessTypeValue=_selectedAccessTypeValue;
@property(retain, nonatomic) NSString *repositoryDescription; // @synthesize repositoryDescription=_repositoryDescription;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *repositoryTitle; // @synthesize repositoryTitle=_repositoryTitle;
@property(retain, nonatomic) GTServiceAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
- (BOOL)validateStringNotEmpty:(id)arg1;
- (BOOL)validateUniqueRepositoryName:(id)arg1;
- (BOOL)validateBitbucketRepositoryNameFormat:(id)arg1;
- (id)makeValidationErrorWithMessage:(id)arg1;
- (BOOL)validate:(id *)arg1;
@property(readonly, nonatomic) NSString *sanitizedRepositoryDescription;
@property(readonly, nonatomic) NSString *sanitizedRepositoryName;
@property(readonly, nonatomic) NSString *sanitizedRepositoryTitle;
- (id)makeAccountsForServiceAccount:(id)arg1;
- (id)initWithServiceAccount:(id)arg1 serviceRepositoryCreationInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

