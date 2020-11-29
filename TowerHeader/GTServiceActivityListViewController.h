//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNViewController.h>

#import "GTSearchControllerDelegate-Protocol.h"
#import "GTServiceActivityItemControllerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class GTSearchController, GTServiceActivityItemController, GTServiceActivitySearchScopeConfiguration, NSScrollView, NSString, NSTableView, NSView;
@protocol GTServiceActivityListViewControllerDelegate;

@interface GTServiceActivityListViewController : FNViewController <NSTableViewDataSource, NSTableViewDelegate, GTServiceActivityItemControllerDelegate, GTSearchControllerDelegate>
{
    id <GTServiceActivityListViewControllerDelegate> _delegate;
    GTSearchController *_searchController;
    GTServiceActivityItemController *_itemController;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    GTServiceActivitySearchScopeConfiguration *_searchScopeConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServiceActivitySearchScopeConfiguration *searchScopeConfiguration; // @synthesize searchScopeConfiguration=_searchScopeConfiguration;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GTServiceActivityItemController *itemController; // @synthesize itemController=_itemController;
@property(nonatomic) __weak GTSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <GTServiceActivityListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)update;
@property(readonly, nonatomic) NSView *searchControllerKeyView;
- (void)searchControllerDidEndSearching;
- (void)searchControllerDidUpdate;
- (void)serviceActivityItemController:(id)arg1 didUpdateItemsAtIndexes:(id)arg2;
- (void)serviceActivityItemController:(id)arg1 didDeleteItemsAtIndexes:(id)arg2;
- (void)serviceActivityItemController:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)serviceActivityItemController:(id)arg1 didInsertItemsAtIndexes:(id)arg2;
- (void)serviceActivityItemControllerDidReloadItems:(id)arg1;
- (void)serviceActivityItemControllerDidChangeItems:(id)arg1;
- (void)serviceActivityItemControllerWillChangeItems:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)classNameForItem:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)configureSearchController;
- (void)configureTableView;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

