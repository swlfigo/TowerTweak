//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTHistoryCommitDetailItem, GTHistoryCommitDetailItemController, NSArray, NSError, NSIndexSet;

@protocol GTHistoryCommitDetailItemControllerDelegate <NSObject>

@optional
- (void)historyCommitDetailItemControllerDidLoadChangesetItems:(GTHistoryCommitDetailItemController *)arg1;
- (void)historyCommitDetailItemController:(GTHistoryCommitDetailItemController *)arg1 didFailReloading:(NSError *)arg2;
- (void)historyCommitDetailItemControllerDidReloadItems:(GTHistoryCommitDetailItemController *)arg1;
- (void)historyCommitDetailItemControllerDidChangeItems:(GTHistoryCommitDetailItemController *)arg1;
- (void)historyCommitDetailItemController:(GTHistoryCommitDetailItemController *)arg1 didUpdateItems:(NSArray *)arg2;
- (void)historyCommitDetailItemController:(GTHistoryCommitDetailItemController *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 inParent:(GTHistoryCommitDetailItem *)arg3 toIndex:(unsigned long long)arg4 inParent:(GTHistoryCommitDetailItem *)arg5;
- (void)historyCommitDetailItemController:(GTHistoryCommitDetailItemController *)arg1 didInsertItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(GTHistoryCommitDetailItem *)arg3;
- (void)historyCommitDetailItemController:(GTHistoryCommitDetailItemController *)arg1 didDeleteItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(GTHistoryCommitDetailItem *)arg3;
- (void)historyCommitDetailItemControllerWillChangeItems:(GTHistoryCommitDetailItemController *)arg1;
@end

