//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteItemController-Protocol.h"

@class GTGitRepository, NSArray, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@interface GTRefAutocompleteItemController : NSObject <GTAutocompleteItemController>
{
    BOOL _loadsBranches;
    BOOL _loadsRemoteBranches;
    BOOL _loadsTags;
    BOOL _loading;
    id <GTAutocompleteItemControllerDelegate> _delegate;
    NSArray *_items;
    NSString *_searchPattern;
    GTGitRepository *_repository;
    NSArray *_disallowedRefNames;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *disallowedRefNames; // @synthesize disallowedRefNames=_disallowedRefNames;
@property(nonatomic) BOOL loadsTags; // @synthesize loadsTags=_loadsTags;
@property(nonatomic) BOOL loadsRemoteBranches; // @synthesize loadsRemoteBranches=_loadsRemoteBranches;
@property(nonatomic) BOOL loadsBranches; // @synthesize loadsBranches=_loadsBranches;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
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

