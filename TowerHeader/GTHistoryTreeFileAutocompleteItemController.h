//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteItemController-Protocol.h"

@class GTBackgroundSession, GTGitRepository, GTSearchScopeFilter, NSArray, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@interface GTHistoryTreeFileAutocompleteItemController : NSObject <GTAutocompleteItemController>
{
    id <GTAutocompleteItemControllerDelegate> _delegate;
    NSArray *_items;
    NSString *_searchPattern;
    NSString *_revision;
    NSString *_filePath;
    GTGitRepository *_repository;
    GTSearchScopeFilter *_filter;
    GTBackgroundSession *_backgroundSession;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) GTSearchScopeFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidLoadTreeEntries:(id)arg1 task:(id)arg2;
- (void)loadItems;
- (void)performRemoteSearches;
- (void)reset;
- (void)cancel;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reload;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
