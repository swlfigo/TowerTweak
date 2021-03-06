//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTBackgroundSession, GTGitBranch, GTGitHistoryManager, GTGitRepository, GTGitWorkingTreeManager, GTHistoryRefsConfiguration, NSOperationQueue;
@protocol GTBaseBranchStatusControllerDelegate;

@interface GTBaseBranchStatusController : NSObject
{
    BOOL _baseBranchHasConflict;
    id <GTBaseBranchStatusControllerDelegate> _delegate;
    GTGitRepository *_repository;
    GTGitBranch *_baseBranch;
    GTHistoryRefsConfiguration *_refsConfiguration;
    unsigned long long _behindBaseBranchCommitCount;
    unsigned long long _aheadBaseBranchCommitCount;
    GTGitHistoryManager *_historyManager;
    GTGitWorkingTreeManager *_workingTreeManager;
    GTBackgroundSession *_backgroundSession;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) GTGitWorkingTreeManager *workingTreeManager; // @synthesize workingTreeManager=_workingTreeManager;
@property(retain, nonatomic) GTGitHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic) unsigned long long aheadBaseBranchCommitCount; // @synthesize aheadBaseBranchCommitCount=_aheadBaseBranchCommitCount;
@property(nonatomic) unsigned long long behindBaseBranchCommitCount; // @synthesize behindBaseBranchCommitCount=_behindBaseBranchCommitCount;
@property(nonatomic) BOOL baseBranchHasConflict; // @synthesize baseBranchHasConflict=_baseBranchHasConflict;
@property(retain, nonatomic) GTHistoryRefsConfiguration *refsConfiguration; // @synthesize refsConfiguration=_refsConfiguration;
@property(retain, nonatomic) GTGitBranch *baseBranch; // @synthesize baseBranch=_baseBranch;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(nonatomic) __weak id <GTBaseBranchStatusControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)waitUntilStatusIsLoaded:(id)arg1;
- (void)controllerDidComputeAheadCount:(unsigned long long)arg1 task:(id)arg2;
- (void)controllerDidComputeBehindCount:(unsigned long long)arg1 task:(id)arg2;
- (void)controllerDidComputeMergeability:(BOOL)arg1 task:(id)arg2;
- (void)computeAheadBaseBranchCommitsCount:(id)arg1 refsConfiguration:(id)arg2 task:(id)arg3;
- (void)computeBehindBaseBranchCommitsCount:(id)arg1 refsConfiguration:(id)arg2 task:(id)arg3;
- (void)computeMergeability:(id)arg1 refsConfiguration:(id)arg2 task:(id)arg3;
- (void)reset;
- (void)reload;
- (BOOL)isLoading;

@end

