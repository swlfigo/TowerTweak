//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitDiff, GTGitRepository, GTGitWorkingTreeEntry, GTGitWorkingTreeManager, NSArray, NSMutableDictionary, NSString;
@protocol GTDiffItemControllerDelegate;

@interface GTDiffItemController : NSObject
{
    BOOL _ignoresWhitespaceChanges;
    BOOL _needsReload;
    id <GTDiffItemControllerDelegate> _delegate;
    GTGitRepository *_repository;
    GTGitWorkingTreeEntry *_workingTreeEntry;
    long long _diffMode;
    unsigned long long _diffContextLines;
    FNGitDiff *_diff;
    NSArray *_items;
    NSMutableDictionary *_cachedItems;
    GTGitWorkingTreeManager *_workingTreeManager;
    NSString *_currentContextIdentifier;
}

+ (id)keyPathsForValuesAffectingItemCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentContextIdentifier; // @synthesize currentContextIdentifier=_currentContextIdentifier;
@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(retain, nonatomic) GTGitWorkingTreeManager *workingTreeManager; // @synthesize workingTreeManager=_workingTreeManager;
@property(retain, nonatomic) NSMutableDictionary *cachedItems; // @synthesize cachedItems=_cachedItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) FNGitDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) BOOL ignoresWhitespaceChanges; // @synthesize ignoresWhitespaceChanges=_ignoresWhitespaceChanges;
@property(nonatomic) unsigned long long diffContextLines; // @synthesize diffContextLines=_diffContextLines;
@property(nonatomic) long long diffMode; // @synthesize diffMode=_diffMode;
@property(retain, nonatomic) GTGitWorkingTreeEntry *workingTreeEntry; // @synthesize workingTreeEntry=_workingTreeEntry;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(nonatomic) __weak id <GTDiffItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)makeDiffChunkItemWithType:(long long)arg1 diff:(id)arg2 diffChunkIndex:(unsigned long long)arg3;
- (id)makeDiffEmptyItem;
- (id)makeDiffChunkContentItemWithDiff:(id)arg1 diffChunkIndex:(unsigned long long)arg2;
- (id)makeDiffChunkHeaderItemWithDiff:(id)arg1 diffChunkIndex:(unsigned long long)arg2;
- (id)makeDiffHeaderItemWithDiff:(id)arg1;
- (void)controllerDidChangeItems;
- (void)controllerDidUpdateItemsAtIndexes:(id)arg1;
- (void)controllerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)controllerDidInsertItemsAtIndexes:(id)arg1;
- (void)controllerDidDeleteItemsAtIndexes:(id)arg1;
- (void)controllerWillChangeItems;
- (void)controllerDidReloadItems;
- (void)controllerDidLoadDiff:(id)arg1 contextIdentifier:(id)arg2;
- (id)chunkContentItemForChunkAtIndex:(unsigned long long)arg1;
- (id)chunkHeaderItemForChunkAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (BOOL)isGroupItemAtIndex:(unsigned long long)arg1;
- (void)loadDiff;
- (void)waitUntilFinished;
- (void)cancel;
- (void)reload;
@property(readonly, nonatomic) unsigned long long itemCount;
- (id)initWithRepository:(id)arg1;
- (id)init;

@end

