//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteItemController-Protocol.h"
#import "GTCloneRepositoryAutocompleteItemLoaderDelegate-Protocol.h"

@class GTCloneRepositoryGitHubRepositoriesLoader, NSArray, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@interface GTCloneRepositoryAutocompleteItemController : NSObject <GTCloneRepositoryAutocompleteItemLoaderDelegate, GTAutocompleteItemController>
{
    BOOL _cancelled;
    id <GTAutocompleteItemControllerDelegate> _delegate;
    NSString *_searchPattern;
    unsigned long long _SCMType;
    NSArray *_items;
    GTCloneRepositoryGitHubRepositoriesLoader *_gitHubRepositoriesLoader;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) GTCloneRepositoryGitHubRepositoriesLoader *gitHubRepositoriesLoader; // @synthesize gitHubRepositoriesLoader=_gitHubRepositoriesLoader;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long SCMType; // @synthesize SCMType=_SCMType;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadItems;
- (void)performRemoteSearches;
- (void)cancel;
- (void)reset;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reload;
- (void)cloneRepositoryAutocompleteItemLoaderDidLoadItems:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
