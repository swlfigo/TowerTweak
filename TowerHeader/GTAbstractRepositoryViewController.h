//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTGitRepositoryObserving-Protocol.h"
#import "GTRepositoryUICommandObserving-Protocol.h"

@class GTGitRepository, GTGitRepositoryObserver, GTRepositoryUICommandObserver, GTStateManager, NSString;

@interface GTAbstractRepositoryViewController : GTViewController <GTGitRepositoryObserving, GTRepositoryUICommandObserving>
{
    GTGitRepository *_repository;
    GTGitRepositoryObserver *_repositoryObserver;
    GTRepositoryUICommandObserver *_repositoryUICommandObserver;
    GTStateManager *_viewState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTRepositoryUICommandObserver *repositoryUICommandObserver; // @synthesize repositoryUICommandObserver=_repositoryUICommandObserver;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)updateRepositoryUICommandObserver;
- (void)updateRepositoryObserver;
- (BOOL)needsUpdateRepositoryUICommandObserver;
- (BOOL)needsUpdateRepositoryObserver;
- (void)viewDidUpdate;
- (void)update;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)prepareForUpdate;
@property(readonly, nonatomic) NSString *viewAppearedKey;
@property(readonly, nonatomic) NSString *repositoryKey;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
