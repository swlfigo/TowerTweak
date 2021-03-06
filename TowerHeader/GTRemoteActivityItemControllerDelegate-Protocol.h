//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTRemoteActivityItemController, NSIndexSet;

@protocol GTRemoteActivityItemControllerDelegate <NSObject>

@optional
- (void)remoteActivityItemController:(GTRemoteActivityItemController *)arg1 didDeleteItemsAtIndexes:(NSIndexSet *)arg2;
- (void)remoteActivityItemController:(GTRemoteActivityItemController *)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)remoteActivityItemController:(GTRemoteActivityItemController *)arg1 didUpdateItemsAtIndexes:(NSIndexSet *)arg2;
- (void)remoteActivityItemController:(GTRemoteActivityItemController *)arg1 didInsertItemsAtIndexes:(NSIndexSet *)arg2;
- (void)remoteActivityItemControllerDidChangeItems:(GTRemoteActivityItemController *)arg1;
- (void)remoteActivityItemControllerWillChangeItems:(GTRemoteActivityItemController *)arg1;
- (void)remoteActivityItemControllerDidReloadItems:(GTRemoteActivityItemController *)arg1;
@end

