//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTServiceAccount, NSArray, NSDate, NSSet, NSString, NSURL;

@interface GTService : NSManagedObject
{
}

+ (id)serviceWithType:(unsigned long long)arg1 apiURL:(id)arg2 managedObjectContext:(id)arg3;
+ (id)serviceWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)keyPathsForValuesAffectingWebURL;
+ (id)keyPathsForValuesAffectingApiURL;
+ (unsigned long long)serviceTypeForIdentifier:(id)arg1;
+ (id)identifierForServiceType:(unsigned long long)arg1;
+ (id)APIURLForPublicServiceType:(unsigned long long)arg1;
+ (id)nameForServiceType:(unsigned long long)arg1 apiURL:(id)arg2;
+ (id)serviceTypeNameForServiceType:(unsigned long long)arg1;
+ (id)serviceForRemoteConnectionOptions:(id)arg1;
+ (id)keyPathsForValuesAffectingPublicServiceType;
+ (id)keyPathsForValuesAffectingPrivateServiceType;
+ (id)keyPathsForValuesAffectingAzureDevOpsServerServiceType;
+ (id)keyPathsForValuesAffectingAzureDevOpsServiceType;
+ (id)keyPathsForValuesAffectingGitLabEEServiceType;
+ (id)keyPathsForValuesAffectingGitLabCEServiceType;
+ (id)keyPathsForValuesAffectingGitLabServiceType;
+ (id)keyPathsForValuesAffectingGitSwarmServiceType;
+ (id)keyPathsForValuesAffectingStashServiceType;
+ (id)keyPathsForValuesAffectingGitHubEnterpriseServiceType;
+ (id)keyPathsForValuesAffectingGitHubServiceType;
+ (id)keyPathsForValuesAffectingBitbucketServiceType;
+ (id)keyPathsForValuesAffectingBeanstalkServiceType;
+ (BOOL)isEnterpriseServiceType:(unsigned long long)arg1;
+ (BOOL)isPrivateServiceType:(unsigned long long)arg1;
+ (BOOL)isPublicServiceType:(unsigned long long)arg1;
+ (id)enterpriseServiceTypes;
+ (id)privateServiceTypes;
+ (id)publicServiceTypes;
+ (id)fetchPrivateServiceWithType:(unsigned long long)arg1 apiURL:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchPublicServiceWithType:(unsigned long long)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchServiceWithUUID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllServicesForType:(unsigned long long)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllServicesSortedByNameWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllOrphanedPrivateServicesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllServicesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreatePrivateServiceWithType:(unsigned long long)arg1 apiURL:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchOrCreatePublicServiceWithType:(unsigned long long)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (void)updateAPIURLIfNeeded;
- (void)updateWebURLIfNeeded;
- (void)updateNameIfNeeded;
- (void)updateLastUpdatedDate;
- (void)willSave;
- (void)awakeFromInsert;
- (BOOL)validateUniqueServiceTypeAndAPIURLCombination:(id *)arg1;
- (BOOL)validateType:(id *)arg1 error:(id *)arg2;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
@property(retain, nonatomic) NSURL *webURL;
@property(retain, nonatomic) NSURL *apiURL;
@property(nonatomic) unsigned long long type;
- (BOOL)isSupportedAuthenticationMethod:(long long)arg1;
@property(readonly, nonatomic) NSArray *supportedAuthenticationMethodInfos;
@property(readonly, nonatomic) NSArray *supportedAuthenticationMethods;
@property(readonly, nonatomic) BOOL supportsMultipleAPIVersions;
@property(readonly, nonatomic) NSArray *supportedAPIVersions;
- (id)repositoryNameFromRemoteURL:(id)arg1;
- (id)repositoryOwnerNameFromRemoteURL:(id)arg1;
- (id)accountUsernameFromRemoteURL:(id)arg1;
- (id)accountNameFromRemoteURL:(id)arg1;
- (id)remoteHostURLForRemoteURL:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedCloneProtocols;
@property(readonly, nonatomic) NSArray *allSSHRemoteHostURLs;
@property(readonly, nonatomic) NSArray *allHTTPRemoteHostURLs;
@property(readonly, nonatomic) NSArray *remoteHostURLs;
- (void)applyServiceDefaults:(id)arg1;
@property(readonly, nonatomic, getter=isPublicServiceType) BOOL publicServiceType;
@property(readonly, nonatomic, getter=isPrivateServiceType) BOOL privateServiceType;
@property(readonly, nonatomic, getter=isAzureDevOpsServerServiceType) BOOL AzureDevOpsServerServiceType;
@property(readonly, nonatomic, getter=isAzureDevOpsServiceType) BOOL azureDevOpsServiceType;
@property(readonly, nonatomic, getter=isCustomServiceType) BOOL customServiceType;
@property(readonly, nonatomic, getter=isGitSwarmServiceType) BOOL gitSwarmServiceType;
@property(readonly, nonatomic, getter=isGitLabCEEEServiceType) BOOL gitLabCEEEServiceType;
@property(readonly, nonatomic, getter=isGitLabServiceType) BOOL gitLabServiceType;
@property(readonly, nonatomic, getter=isStashServiceType) BOOL stashServiceType;
@property(readonly, nonatomic, getter=isBitbucketServiceType) BOOL bitbucketServiceType;
@property(readonly, nonatomic, getter=isBeanstalkServiceType) BOOL beanstalkServiceType;
@property(readonly, nonatomic, getter=isGitHubEnterpriseServiceType) BOOL gitHubEnterpriseServiceType;
@property(readonly, nonatomic, getter=isGitHubServiceType) BOOL gitHubServiceType;
- (id)serviceAccountWithID:(id)arg1;
- (id)serviceAccountForAccountName:(id)arg1 username:(id)arg2;
- (id)serviceAccountForUsername:(id)arg1;
- (BOOL)existsServiceAccountWithUsername:(id)arg1;
@property(readonly, nonatomic) NSArray *allUnconfiguredServiceAccounts;
@property(readonly, nonatomic) NSArray *allConfiguredServiceAccounts;
@property(readonly, nonatomic) NSArray *allServiceOrganizationAccounts;
@property(readonly, nonatomic) NSArray *allServiceUserAccountsSortedByUsername;
@property(readonly, nonatomic) NSArray *allConfiguredServiceUserAccountsSortedByUsername;
@property(readonly, nonatomic) NSArray *allServiceUserAccounts;
@property(readonly, nonatomic) NSArray *allServiceAccountUsernames;
@property(readonly, nonatomic) NSArray *allServiceAccounts;
@property(readonly, nonatomic) GTServiceAccount *defaultServiceAccount;

// Remaining properties
@property(retain, nonatomic) NSSet *accounts; // @dynamic accounts;
@property(retain, nonatomic) NSString *apiURLString; // @dynamic apiURLString;
@property(nonatomic) unsigned long long apiVersion; // @dynamic apiVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *defaultHTTPUsername; // @dynamic defaultHTTPUsername;
@property(retain, nonatomic) NSString *defaultSSHUsername; // @dynamic defaultSSHUsername;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long sortingOrder; // @dynamic sortingOrder;
@property(nonatomic) BOOL supportsPublicKeys; // @dynamic supportsPublicKeys;
@property(nonatomic) BOOL supportsPullRequestCommentReplies; // @dynamic supportsPullRequestCommentReplies;
@property(nonatomic) BOOL supportsPullRequestCommentThreads; // @dynamic supportsPullRequestCommentThreads;
@property(nonatomic) BOOL supportsPullRequests; // @dynamic supportsPullRequests;
@property(nonatomic) BOOL supportsRepositories; // @dynamic supportsRepositories;
@property(nonatomic) BOOL supportsRepositoryForks; // @dynamic supportsRepositoryForks;
@property(nonatomic) BOOL supportsRepositoryLastUpdateDate; // @dynamic supportsRepositoryLastUpdateDate;
@property(nonatomic) BOOL supportsRepositoryWatchers; // @dynamic supportsRepositoryWatchers;
@property(nonatomic) BOOL usesAccessTokenForHTTPRemoteURLs; // @dynamic usesAccessTokenForHTTPRemoteURLs;
@property(nonatomic) BOOL usesOAuthRefreshTokens; // @dynamic usesOAuthRefreshTokens;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *webURLString; // @dynamic webURLString;

@end
