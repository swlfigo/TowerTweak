//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTQuickActionObjectItemLoader.h"

@class GTBackgroundSession, GTGitHistoryManager, GTStateManager, NSArray, NSMapTable, NSMutableArray;

@interface GTQuickActionTreeEntryItemLoader : GTQuickActionObjectItemLoader
{
    BOOL _needsReload;
    NSMutableArray *_treeItems;
    NSArray *_loadedEntries;
    GTBackgroundSession *_backgroundSession;
    GTGitHistoryManager *_historyManager;
    GTStateManager *_stateManager;
    CDUnknownBlockType _completionHandler;
    NSMapTable *_filePathToItemMapTable;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(retain, nonatomic) NSMapTable *filePathToItemMapTable; // @synthesize filePathToItemMapTable=_filePathToItemMapTable;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) GTStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) GTGitHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSArray *loadedEntries; // @synthesize loadedEntries=_loadedEntries;
@property(retain, nonatomic) NSMutableArray *treeItems; // @synthesize treeItems=_treeItems;
- (void)makeItemsFromLoadedEntries;
- (void)loaderDidLoadEntries:(id)arg1;
- (void)loaderDidLoadEntries:(id)arg1 task:(id)arg2;
- (void)filterLoadedEntries;
- (void)loadTreeEntries;
- (void)reset;
- (void)cancel;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateReloadFlag;
- (void)updateHistoryManager;
- (BOOL)needsUpdateReloadFlag;
- (BOOL)needsUpdateHistoryManager;
- (void)updateComponents;
- (void)updateState;
- (void)update;
- (BOOL)hasExpensiveSearch;
- (id)items;
- (id)initWithObjectType:(long long)arg1;

@end

