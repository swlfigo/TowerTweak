//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FNTreeManager, FNTreeNode, NSArray, NSIndexSet;

@protocol FNTreeManagerDelegate <NSObject>

@optional
- (void)treeManager:(FNTreeManager *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 inParent:(FNTreeNode *)arg3 toIndex:(unsigned long long)arg4 inParent:(FNTreeNode *)arg5;
- (void)treeManager:(FNTreeManager *)arg1 willMoveItemAtIndex:(unsigned long long)arg2 inParent:(FNTreeNode *)arg3 toIndex:(unsigned long long)arg4 inParent:(FNTreeNode *)arg5;
- (void)treeManager:(FNTreeManager *)arg1 didDeleteItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(FNTreeNode *)arg3;
- (void)treeManager:(FNTreeManager *)arg1 willDeleteItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(FNTreeNode *)arg3;
- (void)treeManager:(FNTreeManager *)arg1 didInsertItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(FNTreeNode *)arg3;
- (void)treeManager:(FNTreeManager *)arg1 willInsertItemsAtIndexPaths:(NSIndexSet *)arg2 inParent:(FNTreeNode *)arg3;
- (void)treeManager:(FNTreeManager *)arg1 didUpdateItems:(NSArray *)arg2;
- (BOOL)treeManager:(FNTreeManager *)arg1 updateItem:(FNTreeNode *)arg2 withItem:(FNTreeNode *)arg3;
@end
