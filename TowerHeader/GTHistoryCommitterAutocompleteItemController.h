//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteItemController-Protocol.h"

@class GTGitRepository, GTSearchScopeFilter, NSArray, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@interface GTHistoryCommitterAutocompleteItemController : NSObject <GTAutocompleteItemController>
{
    BOOL _loading;
    id <GTAutocompleteItemControllerDelegate> _delegate;
    NSArray *_items;
    NSString *_searchPattern;
    GTGitRepository *_repository;
    GTSearchScopeFilter *_filter;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) GTSearchScopeFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadItems;
- (void)waitUntilAllItemsAreLoaded;
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

