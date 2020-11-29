//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRef.h"

@class GTGitBranchInfo, GTGitCommit, GTGitRemote, GTGitRemoteBranch, GTGitRepository, NSArray, NSString;

@interface GTGitBranch : GTGitRef
{
}

+ (id)detachedHEADBranchRefWithCommitHash:(id)arg1 managedObjectContext:(id)arg2;
+ (id)branchWithFullRefName:(id)arg1 managedObjectContext:(id)arg2;
+ (id)branchWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAllBranchesForRepository:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingTrackingSVN;
+ (id)keyPathsForValuesAffectingTracking;
+ (id)keyPathsForValuesAffectingOrphaned;
+ (id)keyPathsForValuesAffectingDetached;
+ (id)branchForServicePullRequestBranch:(id)arg1 repository:(id)arg2;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSArray *allTrackedRefs;
@property(readonly, nonatomic) GTGitRemote *trackedRemote;
- (BOOL)isTrackingSVNBranch:(id)arg1;
- (BOOL)isTrackingRef:(id)arg1;
@property(readonly, nonatomic, getter=isTrackingSVN) BOOL trackingSVN;
@property(readonly, nonatomic, getter=isTrackingLocalBranch) BOOL trackingLocalBranch;
@property(readonly, nonatomic, getter=isTracking) BOOL tracking;
- (id)trackedRef;
@property(readonly, nonatomic, getter=isOrphaned) BOOL orphaned;
@property(readonly, nonatomic, getter=isDetached) BOOL detached;
@property(nonatomic, getter=isHead) BOOL head; // @dynamic head;
@property(nonatomic) unsigned long long behind; // @dynamic behind;
@property(nonatomic) unsigned long long ahead; // @dynamic ahead;
@property(readonly, nonatomic) GTGitBranchInfo *branchInfo;
@property(readonly, nonatomic, getter=isGitFlowReleaseBranch) BOOL gitFlowReleaseBranch;
@property(readonly, nonatomic, getter=isGitFlowHotfixBranch) BOOL gitFlowHotfixBranch;
@property(readonly, nonatomic, getter=isGitFlowFeatureBranch) BOOL gitFlowFeatureBranch;
@property(readonly, nonatomic, getter=isGitFlowDevelopBranch) BOOL gitFlowDevelopBranch;
@property(readonly, nonatomic, getter=isGitFlowMasterBranch) BOOL gitFlowMasterBranch;
@property(readonly, nonatomic) NSString *gitFlowRefName;
- (id)commitsWithOptions:(id)arg1;
- (id)commitsWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)commitsWithLimit:(unsigned long long)arg1;
- (id)allCommits;
@property(readonly, nonatomic) unsigned long long commitCount;
@property(readonly, nonatomic) GTGitCommit *commit;

// Remaining properties
@property(retain, nonatomic) GTGitRepository *repository; // @dynamic repository;
@property(retain, nonatomic) NSString *trackedRemoteName; // @dynamic trackedRemoteName;
@property(retain, nonatomic) GTGitRemoteBranch *trackedSVNRemoteBranch; // @dynamic trackedSVNRemoteBranch;
@property(retain, nonatomic) NSString *trackedSVNRemoteName; // @dynamic trackedSVNRemoteName;

@end
