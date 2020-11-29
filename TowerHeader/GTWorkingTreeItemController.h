//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNTreeManagerDelegate-Protocol.h"

@class FNTreeManager, GTGitRepository, GTWorkingTreeItemLoader, NSArray, NSMutableSet, NSString;
@protocol GTWorkingTreeItemControllerDelegate;

@interface GTWorkingTreeItemController : NSObject <FNTreeManagerDelegate>
{
    BOOL _autoExpandsItems;
    GTGitRepository *_repository;
    id <GTWorkingTreeItemControllerDelegate> _delegate;
    long long _viewMode;
    NSArray *_sortDescriptors;
    NSString *_filterString;
    FNTreeManager *_treeManager;
    GTWorkingTreeItemLoader *_itemLoader;
    NSMutableSet *_expandedPaths;
    NSArray *_autoExpandablePaths;
    NSMutableSet *_excludedAutoExpandPaths;
    NSArray *_autoExpandableItems;
}

+ (id)controllerWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *autoExpandableItems; // @synthesize autoExpandableItems=_autoExpandableItems;
@property(retain, nonatomic) NSMutableSet *excludedAutoExpandPaths; // @synthesize excludedAutoExpandPaths=_excludedAutoExpandPaths;
@property(retain, nonatomic) NSArray *autoExpandablePaths; // @synthesize autoExpandablePaths=_autoExpandablePaths;
@property(retain, nonatomic) NSMutableSet *expandedPaths; // @synthesize expandedPaths=_expandedPaths;
@property(retain, nonatomic) GTWorkingTreeItemLoader *itemLoader; // @synthesize itemLoader=_itemLoader;
@property(retain, nonatomic) FNTreeManager *treeManager; // @synthesize treeManager=_treeManager;
@property(nonatomic) BOOL autoExpandsItems; // @synthesize autoExpandsItems=_autoExpandsItems;
@property(retain, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property __weak id <GTWorkingTreeItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)controllerDidChangeItems;
- (void)controllerDidUpdateItems:(id)arg1;
- (void)controllerDidMoveItemAtIndex:(unsigned long long)arg1 inParent:(id)arg2 toIndex:(unsigned long long)arg3 inParent:(id)arg4;
- (void)controllerDidInsertItemsAtIndexPaths:(id)arg1 inParent:(id)arg2;
- (void)controllerDidDeleteItemsAtIndexPaths:(id)arg1 inParent:(id)arg2;
- (void)controllerWillChangeItems;
- (void)controllerDidReloadItems;
- (void)treeManager:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 inParent:(id)arg3 toIndex:(unsigned long long)arg4 inParent:(id)arg5;
- (void)treeManager:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 inParent:(id)arg3;
- (void)treeManager:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 inParent:(id)arg3;
- (void)treeManager:(id)arg1 didUpdateItems:(id)arg2;
- (BOOL)treeManager:(id)arg1 updateItem:(id)arg2 withItem:(id)arg3;
- (void)updateParentItem:(id)arg1 withChildItems:(id)arg2;
- (void)updateRootItemsWithItems:(id)arg1;
- (id)directoryItemForFilePath:(id)arg1;
- (id)fileItemForFilePath:(id)arg1;
- (id)itemForFilePath:(id)arg1;
- (id)itemForWorkingTreeEntry:(id)arg1;
- (void)waitUntilAllItemsAreLoaded;
- (void)cancelLoading;
- (BOOL)hasLoadedChildItemsOfItem:(id)arg1;
- (void)unloadChildItemsOfItem:(id)arg1;
- (void)loadChildItemsOfItem:(id)arg1;
- (void)reload;
- (void)updateFiltering;
- (void)applyNewSortDescriptors;
@property(readonly, nonatomic) NSArray *effectiveAutoExpandablePaths;
@property(readonly, nonatomic) NSArray *rootItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

