//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNViewController.h>

#import "GTGitRepositoryObserving-Protocol.h"

@class GTGitMergeStatusController, GTGitRepository, GTGitRepositoryController, GTGitRepositoryObserver, NSString;

@interface GTWorkingCopyConflictResolutionStatusViewController : FNViewController <GTGitRepositoryObserving>
{
    GTGitRepository *_repository;
    GTGitMergeStatusController *_mergeStatusController;
    GTGitRepositoryController *_repositoryController;
    GTGitRepositoryObserver *_repositoryObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) GTGitRepositoryController *repositoryController; // @synthesize repositoryController=_repositoryController;
@property(retain, nonatomic) GTGitMergeStatusController *mergeStatusController; // @synthesize mergeStatusController=_mergeStatusController;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)repositoryDidUpdateWorkingTree:(id)arg1;
- (void)repositoryDidUpdateBranches:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
