//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitWorkingCopyAction.h"

@class GTGitBranch, GTGitRemoteBranch, GTServiceAccount, GTServicePullRequest, GTServicePullRequestMergeOptions, NSString;
@protocol GTGitCheckoutPullRequestActionDelegate;

@interface GTGitCheckoutPullRequestAction : GTGitWorkingCopyAction
{
    BOOL _didCreateBranch;
    id <GTGitCheckoutPullRequestActionDelegate> _delegate;
    GTServicePullRequestMergeOptions *_mergeOptions;
    NSString *_targetRefName;
    GTServicePullRequest *_servicePullRequest;
    GTServiceAccount *_serviceAccount;
    GTGitBranch *_localBranch;
    GTGitRemoteBranch *_remoteBranch;
    NSString *_originalRevision;
}

+ (id)actionWithServicePullRequest:(id)arg1 account:(id)arg2 targetRefName:(id)arg3 repository:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL didCreateBranch; // @synthesize didCreateBranch=_didCreateBranch;
@property(retain, nonatomic) NSString *originalRevision; // @synthesize originalRevision=_originalRevision;
@property(retain, nonatomic) GTGitRemoteBranch *remoteBranch; // @synthesize remoteBranch=_remoteBranch;
@property(retain, nonatomic) GTGitBranch *localBranch; // @synthesize localBranch=_localBranch;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
@property(readonly, nonatomic) NSString *targetRefName; // @synthesize targetRefName=_targetRefName;
@property(retain, nonatomic) GTServicePullRequestMergeOptions *mergeOptions; // @synthesize mergeOptions=_mergeOptions;
@property(nonatomic) __weak id <GTGitCheckoutPullRequestActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidFinish;
- (void)actionDidAbortWithError:(id)arg1;
- (void)actionDidPerformMainAction;
- (void)actionWillPerformMainAction;
- (void)actionNeedsAutoUpdateSubmodules;
- (void)actionNeedsAutoStash;
- (void)actionDidStart;
- (void)actionWillStart;
- (void)actionDidReloadBranches;
- (void)actionDidCheckRevisionAvailability:(BOOL)arg1;
- (void)actionDidCheckoutTargetRef;
- (void)actionDidCreateAndTrackBranch;
- (void)actionDidFetchRemoteURL;
- (void)performFetchForkIntoTargetRef;
- (void)performCreateBranchWithStartingRevision:(id)arg1 options:(unsigned long long)arg2;
- (void)performCheckoutTargetRef;
- (BOOL)checkForkDataAvailability;
- (void)main;
- (id)initWithServicePullRequest:(id)arg1 account:(id)arg2 targetRefName:(id)arg3 repository:(id)arg4;

@end
