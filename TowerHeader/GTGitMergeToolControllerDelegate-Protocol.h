//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTGitMergeToolController, GTGitWorkingTreeEntry, NSError;

@protocol GTGitMergeToolControllerDelegate <NSObject>

@optional
- (void)mergeToolControllerDidCancel:(GTGitMergeToolController *)arg1;
- (void)mergeToolController:(GTGitMergeToolController *)arg1 didFailMergingEntry:(GTGitWorkingTreeEntry *)arg2 error:(NSError *)arg3;
- (void)mergeToolController:(GTGitMergeToolController *)arg1 didFinishMergingEntry:(GTGitWorkingTreeEntry *)arg2;
- (void)mergeToolController:(GTGitMergeToolController *)arg1 didFailLaunchingMergeToolWithError:(NSError *)arg2;
@end
