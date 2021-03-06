//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTBookmarksRepositoryItemControllerDelegate-Protocol.h"
#import "GTGitRepositoryObserving-Protocol.h"
#import "GTGitUserProfileUIActions-Protocol.h"
#import "GTGitUserProfilesObserving-Protocol.h"
#import "GTRepositoryUIActions-Protocol.h"

@class GTApplicationController, GTBookmark, GTBookmarksController, GTBookmarksRepositoryItemController, GTFullSizeContentScrollView, GTGitRepositoryController, GTGitRepositoryObserver, GTGitUserProfilesObserver, GTStateManager, NSArrayController, NSString, NSTableView;

@interface GTBookmarksRepositoryViewController : GTViewController <GTGitRepositoryObserving, GTRepositoryUIActions, GTBookmarksRepositoryItemControllerDelegate, GTGitUserProfileUIActions, GTGitUserProfilesObserving>
{
    GTBookmark *_bookmark;
    GTFullSizeContentScrollView *_scrollView;
    NSTableView *_tableView;
    NSArrayController *_settingsItemsController;
    GTStateManager *_viewState;
    GTGitRepositoryObserver *_repositoryObserver;
    GTBookmarksController *_bookmarksController;
    GTGitRepositoryController *_repositoryController;
    GTApplicationController *_appController;
    GTBookmarksRepositoryItemController *_itemController;
    GTGitUserProfilesObserver *_userProfilesObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitUserProfilesObserver *userProfilesObserver; // @synthesize userProfilesObserver=_userProfilesObserver;
@property(retain, nonatomic) GTBookmarksRepositoryItemController *itemController; // @synthesize itemController=_itemController;
@property(retain, nonatomic) GTApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) GTGitRepositoryController *repositoryController; // @synthesize repositoryController=_repositoryController;
@property(retain, nonatomic) GTBookmarksController *bookmarksController; // @synthesize bookmarksController=_bookmarksController;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSArrayController *settingsItemsController; // @synthesize settingsItemsController=_settingsItemsController;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak GTFullSizeContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GTBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void)manageUserProfiles:(id)arg1;
- (void)updateUserWithSelectedProfile:(id)arg1;
- (void)addUserProfile:(id)arg1;
- (void)revealRemoteInBrowser:(id)arg1;
- (void)editUser:(id)arg1;
- (void)editDescription:(id)arg1;
- (void)deleteRepository:(id)arg1;
- (void)reloadRepository:(id)arg1;
- (void)openRepository:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)reloadRepository;
- (void)updateRepository;
- (BOOL)needsUpdateRepository;
- (void)updateSettingsItems;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)gitUserProfilesDidUpdate:(id)arg1;
- (void)bookmarksRepositoryItemControllerDidUpdate;
- (void)repositoryDidUpdateWorkingTree:(id)arg1;
- (void)repositoryDidUpdateRemotes:(id)arg1;
- (void)repositoryDidUpdateBranches:(id)arg1;
- (void)repositoryDidChange:(id)arg1;
- (void)repositoryDidUpdate:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)userProfilesController;
- (void)configureTableView;
- (void)configureScrollView;
- (BOOL)needsUpdate;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

