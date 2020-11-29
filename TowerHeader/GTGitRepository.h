//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class FNGitRepository, GTBookmark, GTGitBranch, GTGitBranchManager, GTGitCloneActivity, GTGitFlowConfig, GTGitGPGConfig, GTGitRemote, GTGitRemoteManager, GTGitRepositoryDescriptor, GTGitRepositoryManager, GTGitRepositorySettings, GTGitStash, GTGitStashManager, GTGitSubmodule, GTGitSubmoduleManager, GTGitTagManager, GTGitUser, GTGitWorkingTree, NSArray, NSDate, NSDictionary, NSSet, NSString, NSURL;

@interface GTGitRepository : NSManagedObject
{
    GTGitWorkingTree *_workingTree;
    GTGitBranchManager *_branchManager;
    GTGitTagManager *_tagManager;
    GTGitRemoteManager *_remoteManager;
    GTGitSubmoduleManager *_submoduleManager;
    GTGitStashManager *_stashManager;
    GTGitRepositoryManager *_repositoryManager;
    NSArray *_treeEntries;
}

+ (id)repositoryWithWorkingTreeDirectoryURL:(id)arg1 gitDirectoryURL:(id)arg2 repositoryIdentifier:(id)arg3 managedObjectContext:(id)arg4;
+ (id)repositoryWithWorkingTreeDirectoryURL:(id)arg1 gitDirectoryURL:(id)arg2 managedObjectContext:(id)arg3;
+ (id)bareRepositoryWithGitDirectoryURL:(id)arg1 managedObjectContext:(id)arg2;
+ (id)repositoryWithFileURL:(id)arg1 repositoryIdentifier:(id)arg2 managedObjectContext:(id)arg3;
+ (id)repositoryWithFileURL:(id)arg1 managedObjectContext:(id)arg2;
+ (id)repositoryWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRepositoryWithUUID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchRepositoryWithFileURL:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllRepositoryFileURLsWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllRepositoriesWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingCloning;
+ (id)keyPathsForValuesAffectingDetachedWorkingTree;
+ (id)keyPathsForValuesAffectingBare;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingFileURL;
+ (id)validateFileURLs:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)validateGitRepositoryAtURL:(id)arg1 searchParentDirectories:(BOOL)arg2 error:(id *)arg3;
+ (id)repositoryNameForURL:(id)arg1;
+ (id)repositoryWithGitRepository:(id)arg1 managedObjectContext:(id)arg2;
+ (id)rootURLForGitRepositoryAtURL:(id)arg1 error:(id *)arg2;
+ (BOOL)updateTreeEntries:(id)arg1 forRepositoryWithID:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *treeEntries; // @synthesize treeEntries=_treeEntries;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
@property(retain, nonatomic) GTGitStashManager *stashManager; // @synthesize stashManager=_stashManager;
@property(retain, nonatomic) GTGitSubmoduleManager *submoduleManager; // @synthesize submoduleManager=_submoduleManager;
@property(retain, nonatomic) GTGitRemoteManager *remoteManager; // @synthesize remoteManager=_remoteManager;
@property(retain, nonatomic) GTGitTagManager *tagManager; // @synthesize tagManager=_tagManager;
@property(retain, nonatomic) GTGitBranchManager *branchManager; // @synthesize branchManager=_branchManager;
@property(retain, nonatomic) GTGitWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)updateFileURLIfNeeded;
- (void)didTurnIntoFault;
- (void)willTurnIntoFault;
- (void)willSave;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
@property(readonly, nonatomic) NSArray *allParentRepositories;
@property(readonly, nonatomic, getter=isCloning) BOOL cloning;
@property(readonly, nonatomic, getter=isGitFlowEnabled) BOOL gitFlowEnabled;
@property(readonly, nonatomic, getter=isDetachedWorkingTree) BOOL detachedWorkingTree; // @dynamic detachedWorkingTree;
@property(readonly, nonatomic, getter=isBare) BOOL bare; // @dynamic bare;
@property(nonatomic, getter=isGitLFSEnabled) BOOL gitLFSEnabled;
@property(nonatomic, getter=isIgnored) BOOL ignored;
@property(nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic) NSString *name;
@property(retain, nonatomic) NSURL *workingTreeDirectoryURL;
@property(retain, nonatomic) NSURL *gitDirectoryURL;
@property(retain, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManagedObjectContext:(id)arg1 workingTreeDirectoryURL:(id)arg2 gitDirectoryURL:(id)arg3 repositoryIdentifier:(id)arg4;
- (id)initWithManagedObjectContext:(id)arg1 workingTreeDirectoryURL:(id)arg2 gitDirectoryURL:(id)arg3;
@property(readonly, nonatomic) GTGitRepositoryDescriptor *repositoryDescriptor;
- (void)unloadData;
- (void)prefetchData;
- (id)tagForRefName:(id)arg1;
- (id)tagForFullRefName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allTagNames;
@property(readonly, copy, nonatomic) NSArray *allTags;
@property(readonly, copy, nonatomic) NSArray *allTagsSortedByName;
- (void)recreateUnmergedEntries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)recreateUnmergedEntries:(id)arg1 error:(id *)arg2;
- (void)restoreSnapshot:(id)arg1 resetsEntries:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)restoreSnapshot:(id)arg1 resetsEntries:(BOOL)arg2 error:(id *)arg3;
- (void)restoreSnapshot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)restoreSnapshot:(id)arg1 error:(id *)arg2;
- (void)indexSnapshotForEntries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)indexSnapshotForEntries:(id)arg1 error:(id *)arg2;
- (void)snapshotForEntries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)snapshotForEntries:(id)arg1 error:(id *)arg2;
- (id)stashForCommitHash:(id)arg1;
- (id)stashForFullRefName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allStashNames;
@property(readonly, copy, nonatomic) NSArray *allStashesSortedByIndex;
@property(readonly, copy, nonatomic) NSArray *allStashes;
@property(readonly, nonatomic) GTGitStash *lastStash;
- (id)submoduleForPath:(id)arg1;
- (id)submoduleForName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allSubmodulesSortedByName;
@property(readonly, copy, nonatomic) NSArray *allSubmoduleNames;
@property(readonly, copy, nonatomic) NSArray *allSubmodules;
@property(readonly, nonatomic) BOOL hasSVNRemotes;
@property(readonly, copy, nonatomic) NSArray *allRemoteBranchNames;
@property(readonly, copy, nonatomic) NSArray *allRemoteBranchesSortedByRelevance;
@property(readonly, copy, nonatomic) NSArray *allRemoteBranches;
- (id)remoteBranchForRefName:(id)arg1;
- (id)remoteForName:(id)arg1;
@property(readonly, nonatomic) GTGitRemote *defaultRemote;
@property(readonly, nonatomic) GTGitRemote *originRemote;
@property(readonly, copy, nonatomic) NSArray *allRemotesSortedByRelevance;
@property(readonly, copy, nonatomic) NSArray *allRemotesSortedByName;
@property(readonly, copy, nonatomic) NSArray *allRemoteNames;
@property(readonly, copy, nonatomic) NSArray *allRemotes;
@property(readonly, nonatomic) FNGitRepository *gitRepository;
- (void)updateWithGitRepository:(id)arg1;
- (id)fileURLForSubmoduleGitDirectoryWithName:(id)arg1;
- (id)branchesWithPrefix:(id)arg1;
- (id)branchForRefName:(id)arg1;
- (id)branchForFullRefName:(id)arg1;
@property(readonly, nonatomic) GTGitBranch *headBranch;
@property(readonly, copy, nonatomic) NSArray *allBranchFullRefNames;
@property(readonly, copy, nonatomic) NSArray *allBranchNames;
@property(readonly, copy, nonatomic) NSArray *allBranches;
@property(readonly, copy, nonatomic) NSArray *allBranchesSortedByName;
@property(readonly, copy, nonatomic) NSArray *allBranchesSortedByRelevance;
- (id)commitsForRevisions:(id)arg1 options:(id)arg2;
- (unsigned long long)countCommitsForRevision:(id)arg1;
- (id)commitForRevision:(id)arg1;
- (id)headCommit;
@property(readonly, copy, nonatomic) NSArray *allCommitterContributors;
@property(readonly, copy, nonatomic) NSArray *allAuthorContributors;
@property(readonly, copy, nonatomic) NSArray *allContributors;
- (id)allServiceRepositoriesForService:(id)arg1;
- (id)allRemotesForServiceRepository:(id)arg1;
- (id)allForkRemotesForServiceRepository:(id)arg1;
- (id)allRemotesForService:(id)arg1 serviceRepository:(id)arg2;
- (id)allConfiguredRemotesForService:(id)arg1;
@property(readonly, nonatomic) NSArray *allConfiguredRemotes;
@property(readonly, nonatomic) GTGitRemote *defaultPullRequestRemote;
- (id)allRefsFilteredBySearchTerm:(id)arg1 excludedRefs:(id)arg2;
- (id)refForFullRefName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allBranchRefsSortedByRelevance;
@property(readonly, copy, nonatomic) NSArray *allRefsSortedByRelevance;
@property(readonly, copy, nonatomic) NSArray *allRefs;
- (id)gitFlowRemote;
- (id)gitFlowReleaseBranchForName:(id)arg1;
- (id)allGitFlowReleaseBranches;
- (id)gitFlowHotifxBranchForName:(id)arg1;
- (id)allGitFlowHotfixBranches;
- (id)gitFlowFeatureBranchForName:(id)arg1;
- (id)allGitFlowFeatureBranches;
- (BOOL)configureGitMergeToolWithName:(id)arg1 command:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) GTBookmark *bookmark; // @dynamic bookmark;
@property(retain, nonatomic) NSSet *branches; // @dynamic branches;
@property(retain, nonatomic) NSSet *childRepositories; // @dynamic childRepositories;
@property(retain, nonatomic) GTGitCloneActivity *cloneActivity; // @dynamic cloneActivity;
@property(retain, nonatomic) NSSet *contributors; // @dynamic contributors;
@property(retain, nonatomic) NSString *fileURLString; // @dynamic fileURLString;
@property(retain, nonatomic) NSString *gitDirectoryURLString; // @dynamic gitDirectoryURLString;
@property(retain, nonatomic) GTGitFlowConfig *gitFlowConfig; // @dynamic gitFlowConfig;
@property(retain, nonatomic) GTGitGPGConfig *gpgConfig;
@property(retain, nonatomic) NSDate *lastOpenedDate; // @dynamic lastOpenedDate;
@property(retain, nonatomic) GTGitRepository *parentRepository; // @dynamic parentRepository;
@property(retain, nonatomic) NSSet *remotes; // @dynamic remotes;
@property(retain, nonatomic) GTGitRepositorySettings *settings; // @dynamic settings;
@property(retain, nonatomic) NSSet *stashes; // @dynamic stashes;
@property(retain, nonatomic) GTGitSubmodule *submodule; // @dynamic submodule;
@property(retain, nonatomic) NSSet *submodules; // @dynamic submodules;
@property(retain, nonatomic) NSSet *tags; // @dynamic tags;
@property(retain, nonatomic) GTGitUser *user; // @dynamic user;
@property(retain, nonatomic) NSString *userDescription; // @dynamic userDescription;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *workingTreeDirectoryURLString; // @dynamic workingTreeDirectoryURLString;

@end

