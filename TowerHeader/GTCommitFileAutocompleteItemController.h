//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteItemController-Protocol.h"

@class GTBackgroundSession, GTGitChangeset, GTSearchScopeFilter, NSArray, NSOperationQueue, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@interface GTCommitFileAutocompleteItemController : NSObject <GTAutocompleteItemController>
{
    BOOL _loading;
    id <GTAutocompleteItemControllerDelegate> _delegate;
    NSArray *_items;
    NSString *_searchPattern;
    GTGitChangeset *_changeset;
    GTSearchScopeFilter *_filter;
    GTBackgroundSession *_backgroundSession;
    NSOperationQueue *_queue;
    CDUnknownBlockType _completionHandler;
    NSString *_loadChangesetTaskName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loadChangesetTaskName; // @synthesize loadChangesetTaskName=_loadChangesetTaskName;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) GTSearchScopeFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) GTGitChangeset *changeset; // @synthesize changeset=_changeset;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)waitUntilAllItemsAreLoaded;
- (void)controllerDidFinishLoadingItems:(id)arg1 task:(id)arg2;
- (void)makeItemsFromChangesetEntries:(id)arg1 task:(id)arg2;
- (void)loadItems;
- (void)performRemoteSearches;
- (void)cancel;
- (void)reset;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
