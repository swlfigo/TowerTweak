//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractRepositoryViewController.h"

#import "GTRemoteActivityItemControllerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class GTRemoteActivityItemController;
@protocol GTSidebarActivityViewControllerDelegate;

@interface GTSidebarActivityViewController : GTAbstractRepositoryViewController <GTRemoteActivityItemControllerDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    // Error parsing type: , name: activityView
    // Error parsing type: , name: timeoutInterval
    // Error parsing type: , name: timeoutTimer
    // Error parsing type: , name: rowHeightConstant
    // Error parsing type: , name: delegate
    // Error parsing type: , name: $__lazy_storage_$_remoteManager
    // Error parsing type: , name: $__lazy_storage_$_itemController
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remoteActivityItemControllerDidChangeItems:(id)arg1;
- (void)remoteActivityItemController:(id)arg1 didUpdateItemsAtIndexes:(id)arg2;
- (void)remoteActivityItemController:(id)arg1 didDeleteItemsAtIndexes:(id)arg2;
- (void)remoteActivityItemController:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)remoteActivityItemController:(id)arg1 didInsertItemsAtIndexes:(id)arg2;
- (void)remoteActivityItemControllerWillChangeItems:(id)arg1;
- (void)remoteActivityItemControllerDidReloadItems:(id)arg1;
- (void)cancelCurrentRemoteActivityWithSender:(id)arg1;
- (void)remoteActivitiesDidUpdate:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)mouseUp:(id)arg1;
- (void)viewDidAppear;
- (void)loadView;
@property(nonatomic, retain) GTRemoteActivityItemController *itemController;
@property(nonatomic, readonly) BOOL isActive;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepository:(id)arg1;
@property(nonatomic, readonly) double currentHeight;
@property(nonatomic, retain) id <GTSidebarActivityViewControllerDelegate> delegate; // @synthesize delegate;

@end
