//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTCommitChangesetItemController, NSError, NSIndexSet;

@protocol GTCommitChangesetItemControllerDelegate <NSObject>

@optional
- (void)commitChangesetItemController:(GTCommitChangesetItemController *)arg1 didFailReloadingWithError:(NSError *)arg2;
- (void)commitChangesetItemControllerDidReloadItems:(GTCommitChangesetItemController *)arg1;
- (void)commitChangesetItemControllerDidChangeItems:(GTCommitChangesetItemController *)arg1;
- (void)commitChangesetItemController:(GTCommitChangesetItemController *)arg1 didUpdateItemsAtIndexes:(NSIndexSet *)arg2;
- (void)commitChangesetItemController:(GTCommitChangesetItemController *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)commitChangesetItemController:(GTCommitChangesetItemController *)arg1 didInsertItemsAtIndexes:(NSIndexSet *)arg2;
- (void)commitChangesetItemController:(GTCommitChangesetItemController *)arg1 didDeleteItemsAtIndexes:(NSIndexSet *)arg2;
- (void)commitChangesetItemControllerWillChangeItems:(GTCommitChangesetItemController *)arg1;
@end

