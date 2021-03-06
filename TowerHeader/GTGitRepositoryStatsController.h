//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitController.h"

#import "GTGitRepositoryObserving-Protocol.h"

@class GTGitRepositoryManager, GTGitRepositoryObserver, NSString;

@interface GTGitRepositoryStatsController : GTGitController <GTGitRepositoryObserving>
{
    GTGitRepositoryObserver *_repositoryObserver;
    GTGitRepositoryManager *_repositoryManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
- (void)updateStats;
- (void)restartUpdating;
- (void)stopUpdating;
- (void)startUpdating;
- (void)repositoryDidUpdateBranches:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

