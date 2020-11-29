//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTWorkingTreeItem, GTWorkingTreeItemController, NSArray, NSError, NSIndexSet;

@protocol GTWorkingTreeItemControllerDelegate <NSObject>

@optional
- (void)workingTreeItemController:(GTWorkingTreeItemController *)arg1 didFailReloading:(NSError *)arg2;
- (void)workingTreeItemControllerDidReloadItems:(GTWorkingTreeItemController *)arg1;
- (void)workingTreeItemControllerDidChangeItems:(GTWorkingTreeItemController *)arg1;
- (void)workingTreeItemController:(GTWorkingTreeItemController *)arg1 didUpdateItems:(NSArray *)arg2;
- (void)workingTreeItemController:(GTWorkingTreeItemController *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 inParent:(GTWorkingTreeItem *)arg3 toIndex:(unsigned long long)arg4 inParent:(GTWorkingTreeItem *)arg5;
- (void)workingTreeItemController:(GTWorkingTreeItemController *)arg1 didInsertItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(GTWorkingTreeItem *)arg3;
- (void)workingTreeItemController:(GTWorkingTreeItemController *)arg1 didDeleteItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(GTWorkingTreeItem *)arg3;
- (void)workingTreeItemControllerWillChangeItems:(GTWorkingTreeItemController *)arg1;
@end
