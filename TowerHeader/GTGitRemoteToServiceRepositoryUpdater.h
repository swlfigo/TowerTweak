//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServiceRepository, GTUpdateChangeset, NSDictionary, NSManagedObjectContext, NSManagedObjectID, NSMutableArray, NSString;
@protocol GTServiceRepositoryAdapter;

@interface GTGitRemoteToServiceRepositoryUpdater : NSObject
{
    NSManagedObjectID *_remoteID;
    NSManagedObjectID *_serviceAccountID;
    NSString *_repoAccountName;
    id <GTServiceRepositoryAdapter> _fetchedServiceRepository;
    GTUpdateChangeset *_changeset;
    GTServiceRepository *_serviceRepository;
    NSManagedObjectContext *_managedObjectContext;
    NSDictionary *_changes;
    NSMutableArray *_obsoleteServiceRepositories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteServiceRepositories; // @synthesize obsoleteServiceRepositories=_obsoleteServiceRepositories;
@property(retain, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) id <GTServiceRepositoryAdapter> fetchedServiceRepository; // @synthesize fetchedServiceRepository=_fetchedServiceRepository;
@property(retain, nonatomic) NSString *repoAccountName; // @synthesize repoAccountName=_repoAccountName;
@property(retain, nonatomic) NSManagedObjectID *serviceAccountID; // @synthesize serviceAccountID=_serviceAccountID;
@property(retain, nonatomic) NSManagedObjectID *remoteID; // @synthesize remoteID=_remoteID;
- (void)updateServiceRepository:(id)arg1 withFetchedServiceRepository:(id)arg2;
- (void)updateRemote;
- (void)createOrUpdateServiceRepository;
- (BOOL)update:(id *)arg1;
- (id)initWithRemoteID:(id)arg1 serviceAccountID:(id)arg2 fetchedServiceRepository:(id)arg3 repoAccountName:(id)arg4 managedObjectContext:(id)arg5;

@end

