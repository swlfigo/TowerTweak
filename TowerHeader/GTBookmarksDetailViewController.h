//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTGitCloneObserving-Protocol.h"

@class GTBookmark, GTBookmarksRepositoryViewController, GTGitCloneObserver, GTRepositoryCloneProgressViewController, GTStateManager, NSColor, NSImage, NSString, NSView;

@interface GTBookmarksDetailViewController : GTViewController <GTGitCloneObserving>
{
    GTBookmark *_bookmark;
    NSImage *_icon;
    NSView *_contentView;
    GTStateManager *_viewState;
    long long _contentViewType;
    GTBookmarksRepositoryViewController *_repositoryViewController;
    GTRepositoryCloneProgressViewController *_cloneProgressViewController;
    GTGitCloneObserver *_cloneObserver;
}

+ (id)keyPathsForValuesAffectingBookmarkTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitCloneObserver *cloneObserver; // @synthesize cloneObserver=_cloneObserver;
@property(retain, nonatomic) GTRepositoryCloneProgressViewController *cloneProgressViewController; // @synthesize cloneProgressViewController=_cloneProgressViewController;
@property(retain, nonatomic) GTBookmarksRepositoryViewController *repositoryViewController; // @synthesize repositoryViewController=_repositoryViewController;
@property(nonatomic) long long contentViewType; // @synthesize contentViewType=_contentViewType;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) GTBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void)updateCloneProgressView;
- (BOOL)needsUpdateCloneProgressView;
- (void)updateRepositoryView;
- (BOOL)needsUpdateRepositoryView;
- (void)updateContentView;
- (BOOL)needsUpdateContentView;
- (void)updateContentViewType;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)prepareForUpdate;
- (void)cloneActivitiesDidUpdate:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(readonly) NSColor *headerTextColor;
@property(readonly, nonatomic) NSString *bookmarkTitle;
- (BOOL)needsUpdate;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

