//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitStashInfo, GTGitWorkingTreeSnapshot;

@interface GTGitUndoApplyStashAction : GTGitAction
{
    BOOL _needsRestoreStash;
    GTGitStashInfo *_stashInfo;
    GTGitWorkingTreeSnapshot *_snapshot;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsRestoreStash; // @synthesize needsRestoreStash=_needsRestoreStash;
@property(retain, nonatomic) GTGitWorkingTreeSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) GTGitStashInfo *stashInfo; // @synthesize stashInfo=_stashInfo;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidRestoreSnapshot;
- (void)actionDidRevertApplyStash;
- (void)main;

@end

