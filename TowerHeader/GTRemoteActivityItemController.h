//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNListManagerDelegate-Protocol.h"
#import "GTGitRepositoryObserving-Protocol.h"

@class FNListManager, GTGitRepository, NSArray, NSString;
@protocol GTRemoteActivityItemControllerDelegate;

@interface GTRemoteActivityItemController : NSObject <GTGitRepositoryObserving, FNListManagerDelegate>
{
    BOOL _loadsActiveItemsOnly;
    GTGitRepository *_repository;
    id <GTRemoteActivityItemControllerDelegate> _delegate;
    NSArray *_items;
    double _finishedItemsTimeout;
    NSString *_outputFilter;
    FNListManager *_listManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNListManager *listManager; // @synthesize listManager=_listManager;
@property(retain, nonatomic) NSString *outputFilter; // @synthesize outputFilter=_outputFilter;
@property(nonatomic) double finishedItemsTimeout; // @synthesize finishedItemsTimeout=_finishedItemsTimeout;
@property(nonatomic) BOOL loadsActiveItemsOnly; // @synthesize loadsActiveItemsOnly=_loadsActiveItemsOnly;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property __weak id <GTRemoteActivityItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)filterPredicate;
- (void)controllerDidChangeItems;
- (void)controllerDidUpdateItemsAtIndexes:(id)arg1;
- (void)controllerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)controllerDidInsertItemsAtIndexes:(id)arg1;
- (void)controllerDidDeleteItemsAtIndexes:(id)arg1;
- (void)controllerWillChangeItems;
- (void)controllerDidReloadItems;
- (void)listManagerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 list:(id)arg3;
- (void)listManagerDidInsertItemsAtIndexPaths:(id)arg1 list:(id)arg2;
- (void)listManagerDidDeleteItemsAtIndexPaths:(id)arg1 list:(id)arg2;
- (id)makeRemoteActivityItems;
- (void)reload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
