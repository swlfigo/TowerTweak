//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTService, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;

@interface GTServiceAccount : NSManagedObject
{
    BOOL initialized;
}

+ (id)organizationServiceAccountWithService:(id)arg1 name:(id)arg2;
+ (id)organizationServiceAccountWithManagedObjectContext:(id)arg1;
+ (id)userServiceAccountWithService:(id)arg1 username:(id)arg2;
+ (id)userServiceAccountWithManagedObjectContext:(id)arg1;
+ (id)serviceAccountWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (long long)serviceAccountAuthenticationMethodForIdentifier:(id)arg1;
+ (id)identifierForServiceAccountAuthenticationMethod:(long long)arg1;
+ (id)fetchServiceOrganizationWithAccountID:(id)arg1 service:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchServiceAccountWithAccountID:(id)arg1 service:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchServiceAccountWithAccountName:(id)arg1 username:(id)arg2 serviceType:(unsigned long long)arg3 serviceAPIURL:(id)arg4 managedObjectContext:(id)arg5 error:(id *)arg6;
+ (id)fetchServiceAccountWithUsername:(id)arg1 serviceType:(unsigned long long)arg2 serviceAPIURL:(id)arg3 managedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)fetchServiceAccountWithUUID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllServiceAccountsMarkedForDeletionWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllUserServiceAccountsWithServiceType:(unsigned long long)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllUserServiceAccountsWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllConfiguredUserServiceAccountsWithServiceType:(unsigned long long)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllConfiguredUserServiceAccountsWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)defaultServiceAPIAccountForRemote:(id)arg1;
+ (void)updateAccount:(id)arg1 fetchedServiceAccount:(id)arg2 error:(id *)arg3;
+ (id)createAccountWithFetchedServiceAccount:(id)arg1 service:(id)arg2;
+ (id)fetchOrCreateServiceAccountWithService:(id)arg1 fetchedServiceAccount:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingOrganizationAccountType;
+ (id)keyPathsForValuesAffectingUserAccountType;
+ (id)serviceAccountForRemoteConnectionOptions:(id)arg1;
+ (id)validateCredentials:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateLastUpdatedDate;
- (void)normalizePrivateSSHKeyFileURLIfNeeded;
- (void)willSave;
- (void)awakeFromInsert;
@property(readonly, nonatomic, getter=isConfigured) BOOL configured;
@property(readonly, nonatomic, getter=isInitialized) BOOL initialized; // @synthesize initialized;
@property(retain, nonatomic) NSURL *privateSSHKeyFileURL;
@property(nonatomic) unsigned long long defaultCloneProtocol;
@property(nonatomic) BOOL trustsServer;
@property(nonatomic, getter=isMarkedForDeletion) BOOL markedForDeletion;
@property(nonatomic, getter=isValid) BOOL valid;
@property(nonatomic, getter=isOffline) BOOL offline;
@property(nonatomic) long long type;
@property(nonatomic) BOOL usesAccessTokenForHTTPRemoteURLs;
@property(nonatomic) long long authenticationMethod;
@property(retain, nonatomic) NSURL *webURL;
@property(retain, nonatomic) NSURL *avatarURL;
- (id)allRepositoriesForCollaborationInviterWithName:(id)arg1;
- (id)allRepositoriesForOrganizationWithName:(id)arg1;
- (id)repositoryForName:(id)arg1;
- (id)repositoryForRepositoryID:(id)arg1;
@property(readonly, nonatomic) NSArray *allOrganizationRepositories;
@property(readonly, nonatomic) NSArray *allCollaboratorRepositories;
@property(readonly, nonatomic) NSArray *allAccessibleRepositories;
@property(readonly, nonatomic) NSArray *allRepositories;
- (id)defaultUsernameForRemoteURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)collaborationInviterForAccountID:(id)arg1;
- (id)organizationOrGroupForAccountID:(id)arg1;
- (id)organizationForAccountID:(id)arg1;
@property(readonly, nonatomic) NSArray *allAccountsWithAccessibleRepositoriesSortedByUsername;
@property(readonly, nonatomic) NSArray *allCollaborationInvitersSortedByUsername;
@property(readonly, nonatomic) NSArray *allCollaborationInviters;
@property(readonly, nonatomic) NSArray *allAccessibleGroupsSortedByUsername;
@property(readonly, nonatomic) NSArray *allOrganizationsSortedByUsername;
@property(readonly, nonatomic) NSArray *allAccessibleGroups;
@property(readonly, nonatomic) NSArray *allOrganizations;
@property(readonly, nonatomic) NSArray *allMembers;
@property(readonly, nonatomic) GTServiceAccount *parentUserAccount;
- (id)publicKeyForPublicKeyID:(id)arg1;
@property(readonly, nonatomic) NSArray *allPublicKeys;
@property(readonly, nonatomic) NSString *defaultHTTPUsername;
@property(readonly, nonatomic) NSString *defaultSSHUsername;
@property(readonly, nonatomic) BOOL needsSSHPrivateKeyForSSHRemoteURLs;
@property(readonly, nonatomic) BOOL needsAccessTokenForHTTPRemoteURLs;
@property(readonly, nonatomic, getter=isOrganizationAccountType) BOOL organizationAccountType;
@property(readonly, nonatomic, getter=isUserAccountType) BOOL userAccountType;
@property(readonly, nonatomic) NSString *gitRemoteConfigIdentifier;

// Remaining properties
@property(retain, nonatomic) NSSet *accessibleGroups; // @dynamic accessibleGroups;
@property(retain, nonatomic) NSSet *accessibleRepositories; // @dynamic accessibleRepositories;
@property(retain, nonatomic) NSString *accountID; // @dynamic accountID;
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(retain, nonatomic) NSSet *assignedPullRequests; // @dynamic assignedPullRequests;
@property(retain, nonatomic) NSSet *authoredPullRequests; // @dynamic authoredPullRequests;
@property(retain, nonatomic) NSString *avatarURLString; // @dynamic avatarURLString;
@property(retain, nonatomic) NSSet *cloneActivities; // @dynamic cloneActivities;
@property(retain, nonatomic) NSSet *collaborationInviters; // @dynamic collaborationInviters;
@property(retain, nonatomic) NSSet *collaborators; // @dynamic collaborators;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *fullName; // @dynamic fullName;
@property(retain, nonatomic) NSDate *lastAccountUpdateDate; // @dynamic lastAccountUpdateDate;
@property(retain, nonatomic) NSDate *lastOrganizationsUpdateDate; // @dynamic lastOrganizationsUpdateDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) NSSet *members; // @dynamic members;
@property(retain, nonatomic) NSSet *organizations; // @dynamic organizations;
@property(retain, nonatomic) GTServiceAccount *parentGroup; // @dynamic parentGroup;
@property(retain, nonatomic) NSString *privateSSHKeyFileURLString; // @dynamic privateSSHKeyFileURLString;
@property(retain, nonatomic) NSSet *publicKeys; // @dynamic publicKeys;
@property(retain, nonatomic) NSSet *pullRequestBranches; // @dynamic pullRequestBranches;
@property(retain, nonatomic) NSSet *pullRequestComments; // @dynamic pullRequestComments;
@property(retain, nonatomic) NSSet *repositories; // @dynamic repositories;
@property(retain, nonatomic) NSData *serverTrustExceptionCookie; // @dynamic serverTrustExceptionCookie;
@property(retain, nonatomic) GTService *service; // @dynamic service;
@property(retain, nonatomic) NSString *slug; // @dynamic slug;
@property(retain, nonatomic) NSSet *subGroups; // @dynamic subGroups;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *webURLString; // @dynamic webURLString;

@end

