//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTHistoryCommitTreeItemControllerDelegate-Protocol.h"
#import "GTOpenFileActions-Protocol.h"
#import "GTRepositoryHistoryActions-Protocol.h"
#import "GTRepositoryWorkingCopyActions-Protocol.h"
#import "GTSearchControllerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class GTGitRepository, GTHistoryCommitTreeItemController, GTHistoryTreeSearchScopeConfiguration, GTSearchController, GTStateManager, GTTreeActionSenderValidator, GTTreeEntryMenuGenerator, NSArray, NSOutlineView, NSString, NSTimer, NSView;
@protocol GTHistoryCommitTreeViewControllerDelegate;

@interface GTHistoryCommitTreeViewController : GTViewController <GTHistoryCommitTreeItemControllerDelegate, GTSearchControllerDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate, NSMenuDelegate, GTOpenFileActions, GTRepositoryHistoryActions, GTRepositoryWorkingCopyActions>
{
    BOOL _restoringSelection;
    GTGitRepository *_repository;
    NSString *_commitHash;
    NSString *_filePath;
    NSOutlineView *_outlineView;
    id <GTHistoryCommitTreeViewControllerDelegate> _delegate;
    GTSearchController *_searchController;
    GTHistoryTreeSearchScopeConfiguration *_searchScopeConfiguration;
    GTHistoryCommitTreeItemController *_itemController;
    GTTreeEntryMenuGenerator *_menuGenerator;
    GTTreeActionSenderValidator *_treeActionsValidator;
    NSArray *_storedSelectedItems;
    GTStateManager *_viewState;
    NSString *_searchPattern;
    NSTimer *_reloadingTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *reloadingTimer; // @synthesize reloadingTimer=_reloadingTimer;
@property(retain, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(nonatomic, getter=isRestoringSelection) BOOL restoringSelection; // @synthesize restoringSelection=_restoringSelection;
@property(retain, nonatomic) NSArray *storedSelectedItems; // @synthesize storedSelectedItems=_storedSelectedItems;
@property(retain, nonatomic) GTTreeActionSenderValidator *treeActionsValidator; // @synthesize treeActionsValidator=_treeActionsValidator;
@property(retain, nonatomic) GTTreeEntryMenuGenerator *menuGenerator; // @synthesize menuGenerator=_menuGenerator;
@property(retain, nonatomic) GTHistoryCommitTreeItemController *itemController; // @synthesize itemController=_itemController;
@property(retain, nonatomic) GTHistoryTreeSearchScopeConfiguration *searchScopeConfiguration; // @synthesize searchScopeConfiguration=_searchScopeConfiguration;
@property(nonatomic) __weak GTSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <GTHistoryCommitTreeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *commitHash; // @synthesize commitHash=_commitHash;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)restoreSelection;
- (void)storeCurrentSelection;
- (void)reloadOutlineView;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowDidChangeFirstResponder;
- (void)menuNeedsUpdate:(id)arg1;
- (void)archiveRevision:(id)arg1;
- (void)exportRevision:(id)arg1;
- (void)openWithOtherApplication:(id)arg1;
- (void)openWithApplication:(id)arg1;
- (void)openWithDefaultApplication:(id)arg1;
- (void)resetToRevision:(id)arg1;
- (void)showFileHistory:(id)arg1;
- (void)blame:(id)arg1;
- (void)openDiffToolForFileAtRevision:(id)arg1;
- (void)rawFileAtRevision:(id)arg1;
- (void)doubleClick:(id)arg1;
- (void)updateItemController;
- (BOOL)needsUpdateItemController;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)update;
@property(readonly, nonatomic) NSView *searchControllerKeyView;
- (void)searchControllerDidEndSearching;
- (void)searchControllerDidUpdate;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)historyCommitTreeItemControllerDidFinishLoading;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)configureOutlineView;
- (void)configure;
- (id)affectedTreeEntries;
- (id)affectedItems;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

