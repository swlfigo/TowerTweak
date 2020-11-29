//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTGitRemoteBranch, GTGitRemoteConnection, GTGitRemoteInfo, GTGitRepository, GTService, GTServiceRepository, NSDate, NSDictionary, NSNumber, NSOrderedSet, NSSet, NSString, NSURL;

@interface GTGitRemote : NSManagedObject
{
}

+ (id)newRemoteWithRepository:(id)arg1 name:(id)arg2 url:(id)arg3;
+ (id)fetchRemoteWithName:(id)arg1 forRepository:(id)arg2 error:(id *)arg3;
+ (id)fetchAllRemotesForRepository:(id)arg1 error:(id *)arg2;
+ (id)remoteWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)remoteWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)upstreamRemoteConnectionOptions;
- (id)downstreamRemoteConnectionOptions;
- (id)connectionOptionsForRemoteURL:(id)arg1;
- (id)svnTagRefSpecForStringValue:(id)arg1;
- (id)allSVNTagRefSpecs;
- (id)svnBranchRefSpecForStringValue:(id)arg1;
- (id)allSVNBranchRefSpecs;
- (id)svnTrunkRefSpecForStringValue:(id)arg1;
- (id)allSVNTrunkRefSpecs;
- (id)pushRefSpecForStringValue:(id)arg1;
- (id)allPushRefSpecs;
- (id)fetchRefSpecForStringValue:(id)arg1;
- (id)allFetchRefSpecs;
- (BOOL)refreshRemoteBranches:(id *)arg1;
- (id)remoteBranchForRefName:(id)arg1;
- (id)remoteBranchForFullRefName:(id)arg1;
- (id)allRemoteBranchNames;
- (id)allRemoteBranches;
- (id)allRemoteBranchesSortedByRelevance;
- (id)allRemoteBranchesSortedByName;
- (id)allLocalFullRefNames;
- (BOOL)hasRemoteBranchWithLocalFullRefName:(id)arg1;
- (void)awakeFromInsert;
@property(nonatomic, getter=isSVNRemote) BOOL SVNRemote;
- (id)remoteBranchForLocalRefName:(id)arg1;
@property(readonly, nonatomic) GTGitRemoteBranch *headBranch;
@property(readonly, nonatomic) GTGitRemoteConnection *upstreamRemoteConnection;
@property(readonly, nonatomic) GTGitRemoteConnection *downstreamRemoteConnection;
@property(readonly, nonatomic, getter=isValidServiceRepository) BOOL validServiceRepository;
@property(readonly, nonatomic) GTService *pullRequestService;
@property(readonly, nonatomic) BOOL supportsPullRequests;
@property(readonly, nonatomic) long long pullRequestAvailability;
- (void)removeSvnTagRefSpecs:(id)arg1;
- (void)addSvnTagRefSpecs:(id)arg1;
- (void)removeSvnTagRefSpecsObject:(id)arg1;
- (void)addSvnTagRefSpecsObject:(id)arg1;
- (void)replaceSvnTagRefSpecsAtIndexes:(id)arg1 withSvnTagRefSpecs:(id)arg2;
- (void)replaceObjectInSvnTagRefSpecsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeSvnTagRefSpecsAtIndexes:(id)arg1;
- (void)insertSvnTagRefSpecs:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromSvnTagRefSpecsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSvnTagRefSpecsAtIndex:(unsigned long long)arg2;
- (void)removeSvnBranchRefSpecs:(id)arg1;
- (void)addSvnBranchRefSpecs:(id)arg1;
- (void)removeSvnBranchRefSpecsObject:(id)arg1;
- (void)addSvnBranchRefSpecsObject:(id)arg1;
- (void)replaceSvnBranchRefSpecsAtIndexes:(id)arg1 withSvnBranchRefSpecs:(id)arg2;
- (void)replaceObjectInSvnBranchRefSpecsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeSvnBranchRefSpecsAtIndexes:(id)arg1;
- (void)insertSvnBranchRefSpecs:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromSvnBranchRefSpecsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSvnBranchRefSpecsAtIndex:(unsigned long long)arg2;
- (void)removeSvnTrunkRefSpecs:(id)arg1;
- (void)addSvnTrunkRefSpecs:(id)arg1;
- (void)removeSvnTrunkRefSpecsObject:(id)arg1;
- (void)addSvnTrunkRefSpecsObject:(id)arg1;
- (void)replaceSvnTrunkRefSpecsAtIndexes:(id)arg1 withSvnTrunkRefSpecs:(id)arg2;
- (void)replaceObjectInSvnTrunkRefSpecsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeSvnTrunkRefSpecsAtIndexes:(id)arg1;
- (void)insertSvnTrunkRefSpecs:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromSvnTrunkRefSpecsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSvnTrunkRefSpecsAtIndex:(unsigned long long)arg2;
- (void)removePushRefSpecs:(id)arg1;
- (void)addPushRefSpecs:(id)arg1;
- (void)removePushRefSpecsObject:(id)arg1;
- (void)addPushRefSpecsObject:(id)arg1;
- (void)replacePushRefSpecsAtIndexes:(id)arg1 withPushRefSpecs:(id)arg2;
- (void)replaceObjectInPushRefSpecsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePushRefSpecsAtIndexes:(id)arg1;
- (void)insertPushRefSpecs:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromPushRefSpecsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inPushRefSpecsAtIndex:(unsigned long long)arg2;
- (void)removeFetchRefSpecs:(id)arg1;
- (void)addFetchRefSpecs:(id)arg1;
- (void)removeFetchRefSpecsObject:(id)arg1;
- (void)addFetchRefSpecsObject:(id)arg1;
- (void)replaceFetchRefSpecsAtIndexes:(id)arg1 withFetchRefSpecs:(id)arg2;
- (void)replaceObjectInFetchRefSpecsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeFetchRefSpecsAtIndexes:(id)arg1;
- (void)insertFetchRefSpecs:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFetchRefSpecsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inFetchRefSpecsAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSURL *webURL;
@property(readonly, nonatomic) GTGitRemoteInfo *remoteInfo;

// Remaining properties
@property(retain, nonatomic) NSSet *branches; // @dynamic branches;
@property(retain, nonatomic) NSSet *connectionOptions; // @dynamic connectionOptions;
@property(retain, nonatomic) NSOrderedSet *fetchRefSpecs; // @dynamic fetchRefSpecs;
@property(retain, nonatomic) NSDate *lastFetchedDate; // @dynamic lastFetchedDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSOrderedSet *pushRefSpecs; // @dynamic pushRefSpecs;
@property(retain, nonatomic) NSString *pushURL; // @dynamic pushURL;
@property(retain, nonatomic) NSSet *remoteActivities; // @dynamic remoteActivities;
@property(retain, nonatomic) GTGitRepository *repository; // @dynamic repository;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @dynamic serviceRepository;
@property(retain, nonatomic) NSNumber *skipsDefaultUpdate; // @dynamic skipsDefaultUpdate;
@property(retain, nonatomic) NSNumber *skipsFetchAll; // @dynamic skipsFetchAll;
@property(retain, nonatomic) NSOrderedSet *svnBranchRefSpecs; // @dynamic svnBranchRefSpecs;
@property(retain, nonatomic) NSString *svnPrefix; // @dynamic svnPrefix;
@property(retain, nonatomic) NSOrderedSet *svnTagRefSpecs; // @dynamic svnTagRefSpecs;
@property(retain, nonatomic) NSOrderedSet *svnTrunkRefSpecs; // @dynamic svnTrunkRefSpecs;
@property(retain, nonatomic) NSString *svnUUID; // @dynamic svnUUID;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
