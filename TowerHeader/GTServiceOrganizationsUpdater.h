//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServiceAccount, GTUpdateChangeset, NSArray, NSDictionary, NSManagedObjectContext, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface GTServiceOrganizationsUpdater : NSObject
{
    GTServiceAccount *_serviceAccount;
    NSArray *_fetchedServiceOrganizations;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSDictionary *_changes;
    NSMutableArray *_obsoleteServiceOrganizations;
    NSMutableSet *_serviceOrganizations;
    NSMutableSet *_updatedAccountIDs;
    NSMutableDictionary *_fetchedOrganizationsByID;
    NSMutableDictionary *_organizationsByID;
    NSMutableDictionary *_addedSubGroupsByGroupID;
    NSMapTable *_removedGroupsByAccountID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *removedGroupsByAccountID; // @synthesize removedGroupsByAccountID=_removedGroupsByAccountID;
@property(retain, nonatomic) NSMutableDictionary *addedSubGroupsByGroupID; // @synthesize addedSubGroupsByGroupID=_addedSubGroupsByGroupID;
@property(retain, nonatomic) NSMutableDictionary *organizationsByID; // @synthesize organizationsByID=_organizationsByID;
@property(retain, nonatomic) NSMutableDictionary *fetchedOrganizationsByID; // @synthesize fetchedOrganizationsByID=_fetchedOrganizationsByID;
@property(retain, nonatomic) NSMutableSet *updatedAccountIDs; // @synthesize updatedAccountIDs=_updatedAccountIDs;
@property(retain, nonatomic) NSMutableSet *serviceOrganizations; // @synthesize serviceOrganizations=_serviceOrganizations;
@property(retain, nonatomic) NSMutableArray *obsoleteServiceOrganizations; // @synthesize obsoleteServiceOrganizations=_obsoleteServiceOrganizations;
@property(retain, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *fetchedServiceOrganizations; // @synthesize fetchedServiceOrganizations=_fetchedServiceOrganizations;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
- (void)deleteObsoleteServiceOrganizations;
- (void)removeObsoleteGroups;
- (void)createOrUpdateFetchedOrganization:(id)arg1;
- (void)createOrUpdateServiceOrganizations;
- (BOOL)update:(BOOL)arg1 error:(id *)arg2;
- (BOOL)update:(id *)arg1;
- (void)clearCaches;
- (id)initWithServiceAccount:(id)arg1 fetchedServiceOrganizations:(id)arg2;
- (id)init;

@end

