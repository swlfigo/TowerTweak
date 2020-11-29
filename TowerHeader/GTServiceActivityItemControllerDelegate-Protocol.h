//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTServiceActivityItemController, NSIndexSet;

@protocol GTServiceActivityItemControllerDelegate <NSObject>

@optional
- (void)serviceActivityItemController:(GTServiceActivityItemController *)arg1 didDeleteItemsAtIndexes:(NSIndexSet *)arg2;
- (void)serviceActivityItemController:(GTServiceActivityItemController *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)serviceActivityItemController:(GTServiceActivityItemController *)arg1 didUpdateItemsAtIndexes:(NSIndexSet *)arg2;
- (void)serviceActivityItemController:(GTServiceActivityItemController *)arg1 didInsertItemsAtIndexes:(NSIndexSet *)arg2;
- (void)serviceActivityItemControllerDidChangeItems:(GTServiceActivityItemController *)arg1;
- (void)serviceActivityItemControllerWillChangeItems:(GTServiceActivityItemController *)arg1;
- (void)serviceActivityItemControllerDidReloadItems:(GTServiceActivityItemController *)arg1;
@end

