//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GTRepositoryPullRequestsActions <NSObject>

@optional
- (void)showChangesetView:(id)arg1;
- (void)showCommitsView:(id)arg1;
- (void)showConversationView:(id)arg1;
- (void)showRemoteSelector:(id)arg1;
- (void)showDiffForCommit:(id)arg1;
- (void)showCommits:(id)arg1;
- (void)showCommit:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)editComment:(id)arg1;
- (void)replyToComment:(id)arg1;
- (void)showDiffForPullRequestChangesetEntries:(id)arg1;
- (void)showFileHistoryForPullRequestChangesetEntry:(id)arg1;
- (void)showFileForPullRequestChangesetEntry:(id)arg1;
- (void)showDiffForCommitChangesetEntries:(id)arg1;
- (void)showFileHistoryForCommitChangesetEntry:(id)arg1;
- (void)showFileForCommitChangesetEntry:(id)arg1;
- (void)viewPullRequestInBrowser:(id)arg1;
- (void)selectRemote:(id)arg1;
- (void)checkoutPullRequest:(id)arg1;
- (void)editPullRequestBody:(id)arg1;
- (void)editPullRequest:(id)arg1;
- (void)createServicePullRequestFromRef:(id)arg1;
- (void)createServicePullRequest:(id)arg1;
@end

