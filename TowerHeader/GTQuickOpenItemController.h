//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNListManagerDelegate-Protocol.h"
#import "GTQuickOpenItemLoaderDelegate-Protocol.h"

@class FNListManager, NSArray, NSManagedObjectContext, NSString;
@protocol GTQuickOpenItemControllerDelegate;

@interface GTQuickOpenItemController : NSObject <FNListManagerDelegate, GTQuickOpenItemLoaderDelegate>
{
    BOOL _loading;
    NSManagedObjectContext *_context;
    id <GTQuickOpenItemControllerDelegate> _delegate;
    NSArray *_items;
    NSString *_searchPattern;
    NSArray *_ignoredSearchPaths;
    FNListManager *_listManager;
    NSArray *_itemLoaders;
}

+ (id)controllerWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *itemLoaders; // @synthesize itemLoaders=_itemLoaders;
@property(retain, nonatomic) FNListManager *listManager; // @synthesize listManager=_listManager;
@property(retain, nonatomic) NSArray *ignoredSearchPaths; // @synthesize ignoredSearchPaths=_ignoredSearchPaths;
@property(retain, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GTQuickOpenItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)controllerDidChangeItems;
- (void)controllerDidUpdateItemsAtIndexes:(id)arg1;
- (void)controllerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)controllerDidInsertItemsAtIndexes:(id)arg1;
- (void)controllerDidDeleteItemsAtIndexes:(id)arg1;
- (void)controllerWillChangeItems;
- (void)controllerDidReloadItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)quickOpenItemLoaderDidLoadItems:(id)arg1;
- (void)listManagerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 list:(id)arg3;
- (void)listManagerDidInsertItemsAtIndexPaths:(id)arg1 list:(id)arg2;
- (void)listManagerDidDeleteItemsAtIndexPaths:(id)arg1 list:(id)arg2;
- (id)makeItemList;
- (void)update;
- (void)updateItemLoaders;
- (void)updateLoadingState;
- (void)cancel;
- (void)startSearch;
- (void)reload;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end
