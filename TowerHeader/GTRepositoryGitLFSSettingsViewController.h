//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTRepositoryBaseViewController.h"

#import "GTRepositoryGitLFSActions-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class GTGitLFSManager, GTGitRepositoryController, GTStateManager, NSArray, NSArrayController, NSString, NSTableView;

@interface GTRepositoryGitLFSSettingsViewController : GTRepositoryBaseViewController <NSTableViewDelegate, NSTableViewDataSource, GTRepositoryGitLFSActions>
{
    NSTableView *_tableView;
    NSArrayController *_settingsItemsController;
    NSArray *_settingsItems;
    GTStateManager *_viewState;
    GTGitLFSManager *_gitLFSManager;
    GTGitRepositoryController *_repositoryController;
    NSArray *_trackingEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *trackingEntries; // @synthesize trackingEntries=_trackingEntries;
@property(retain, nonatomic) GTGitRepositoryController *repositoryController; // @synthesize repositoryController=_repositoryController;
@property(retain, nonatomic) GTGitLFSManager *gitLFSManager; // @synthesize gitLFSManager=_gitLFSManager;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSArray *settingsItems; // @synthesize settingsItems=_settingsItems;
@property(retain, nonatomic) NSArrayController *settingsItemsController; // @synthesize settingsItemsController=_settingsItemsController;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void)gitLFSUntrack:(id)arg1;
- (void)gitLFSCreateTrackingPattern:(id)arg1;
- (void)installGitLFS:(id)arg1;
- (void)openInEditor:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)updateSettingsItems;
- (BOOL)needsUpdateSettingsItems;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)reloadIgnorePatterns;
- (void)repositoryDidUpdateWorkingCopy:(id)arg1;
- (void)repositoryDidUpdate:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)makeTrackingEntryItemsFromTrackingEntries:(id)arg1;
- (id)makeGroupItem;
- (id)makeSettingsItems;
- (void)configureTableView;
- (BOOL)needsUpdate;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

