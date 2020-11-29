//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitRemoteBranchInfo, NSArray;

@interface GTGitRestoreBranchesAction : GTGitAction
{
    BOOL _restoresRemoteBranch;
    NSArray *_branchInfos;
    GTGitRemoteBranchInfo *_remoteBranchInfo;
}

+ (id)actionWithRepository:(id)arg1 branchInfos:(id)arg2 restoresRemoteBranch:(BOOL)arg3 remoteBranchInfo:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL restoresRemoteBranch; // @synthesize restoresRemoteBranch=_restoresRemoteBranch;
@property(retain, nonatomic) GTGitRemoteBranchInfo *remoteBranchInfo; // @synthesize remoteBranchInfo=_remoteBranchInfo;
@property(retain, nonatomic) NSArray *branchInfos; // @synthesize branchInfos=_branchInfos;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidPublishBranch;
- (void)actionDidRestoreLocalBranches;
- (void)main;
- (id)initWithRepository:(id)arg1 branchInfos:(id)arg2 restoresRemoteBranch:(BOOL)arg3 remoteBranchInfo:(id)arg4;

@end

