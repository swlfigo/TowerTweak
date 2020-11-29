//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTQuickActionItemControllerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class GTGitRepository, GTQuickActionConfiguration, GTQuickActionItemController, GTQuickActionObjectItem, GTStateManager, NSImage, NSLayoutConstraint, NSMutableArray, NSString, NSTableView, NSTextField, NSTimer, NSView, NSVisualEffectView;
@protocol GTQuickActionObjectActionPerforming;

@interface GTQuickActionViewController : GTViewController <GTQuickActionItemControllerDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    BOOL _showsActions;
    id <GTQuickActionObjectActionPerforming> _actionControllerDelegate;
    GTGitRepository *_repository;
    NSTableView *_tableView;
    NSTextField *_inputField;
    NSView *_itemView;
    NSLayoutConstraint *_itemViewHeightConstraint;
    NSVisualEffectView *_visualEffectView;
    NSString *_searchText;
    GTQuickActionItemController *_itemController;
    GTStateManager *_viewState;
    GTQuickActionConfiguration *_configuration;
    GTQuickActionObjectItem *_activeItem;
    GTQuickActionObjectItem *_selectedItem;
    NSTimer *_searchDelayTimer;
    NSMutableArray *_scopeStack;
}

+ (id)keyPathsForValuesAffectingItemSubTitle;
+ (id)keyPathsForValuesAffectingItemTitle;
+ (id)keyPathsForValuesAffectingItemIcon;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *scopeStack; // @synthesize scopeStack=_scopeStack;
@property(nonatomic) BOOL showsActions; // @synthesize showsActions=_showsActions;
@property(retain, nonatomic) NSTimer *searchDelayTimer; // @synthesize searchDelayTimer=_searchDelayTimer;
@property(retain, nonatomic) GTQuickActionObjectItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) GTQuickActionObjectItem *activeItem; // @synthesize activeItem=_activeItem;
@property(retain, nonatomic) GTQuickActionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTQuickActionItemController *itemController; // @synthesize itemController=_itemController;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) __weak NSLayoutConstraint *itemViewHeightConstraint; // @synthesize itemViewHeightConstraint=_itemViewHeightConstraint;
@property(nonatomic) __weak NSView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) __weak NSTextField *inputField; // @synthesize inputField=_inputField;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(nonatomic) __weak id <GTQuickActionObjectActionPerforming> actionControllerDelegate; // @synthesize actionControllerDelegate=_actionControllerDelegate;
- (void)scheduleDelayedSearches;
- (void)restoreSelection;
- (void)clearState;
- (void)restoreLastState;
- (void)storeCurrentState;
- (BOOL)leaveCurrentScope;
- (void)moveSelectedRowIndex:(long long)arg1;
- (void)quickActionItemControllerDidReload:(id)arg1;
- (void)quickActionItemControllerDidUpdate:(id)arg1;
- (void)observedKeyEquivalentPressed:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)cancel;
- (void)selectNextObject;
- (void)selectPreviousObject;
- (void)deactivateActionMode;
- (void)activateActionMode;
- (void)deactivateScope;
- (void)activateScope;
- (void)performActionWithCurrentSelection;
- (void)didDoubleClickTableView:(id)arg1;
- (void)didClickTableView:(id)arg1;
- (void)resetState;
- (void)updateItemController;
- (BOOL)needsResetState;
- (BOOL)needsUpdateItemController;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureItemView;
- (void)configureInputField;
- (void)configureTableView;
- (void)configureVisualEffectView;
- (void)configureItemController;
- (void)configure;
@property(readonly, nonatomic) BOOL shouldUseExpensiveLoaders;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) NSString *itemSubTitle;
@property(readonly, nonatomic) NSString *itemTitle;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
