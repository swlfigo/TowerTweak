//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitRemoteBranchInfo, NSString;

@interface GTGitRenameRemoteBranchAction : GTGitAction
{
    GTGitRemoteBranchInfo *_remoteBranchInfo;
    NSString *_theNewRefName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *theNewRefName; // @synthesize theNewRefName=_theNewRefName;
@property(retain, nonatomic) GTGitRemoteBranchInfo *remoteBranchInfo; // @synthesize remoteBranchInfo=_remoteBranchInfo;
- (id)refSpecForNewRemoteBranch;
- (void)actionDidFinish;
- (void)actionDidPublishNewRemoteBranch;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end

