//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNViewController.h>

#import "GTGitRepositoryObserving-Protocol.h"

@class GTGitRepository, GTGitRepositoryObserver, GTWorkingCopyCommitViewController, GTWorkingCopyMergeSequenceStatusViewController, GTWorkingCopyMergeStatusViewController, GTWorkingCopyRebaseStatusViewController, NSString;

@interface GTWorkingCopyCommitAreaViewController : FNViewController <GTGitRepositoryObserving>
{
    GTGitRepository *_repository;
    GTWorkingCopyCommitViewController *_commitViewController;
    GTWorkingCopyMergeStatusViewController *_mergeStatusViewController;
    GTWorkingCopyMergeSequenceStatusViewController *_mergeSequenceStatusViewController;
    GTWorkingCopyRebaseStatusViewController *_rebaseStatusViewController;
    FNViewController *_activeViewController;
    GTGitRepositoryObserver *_repositoryObserver;
}

+ (id)defaultNibName;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) FNViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) GTWorkingCopyRebaseStatusViewController *rebaseStatusViewController; // @synthesize rebaseStatusViewController=_rebaseStatusViewController;
@property(retain, nonatomic) GTWorkingCopyMergeSequenceStatusViewController *mergeSequenceStatusViewController; // @synthesize mergeSequenceStatusViewController=_mergeSequenceStatusViewController;
@property(retain, nonatomic) GTWorkingCopyMergeStatusViewController *mergeStatusViewController; // @synthesize mergeStatusViewController=_mergeStatusViewController;
@property(retain, nonatomic) GTWorkingCopyCommitViewController *commitViewController; // @synthesize commitViewController=_commitViewController;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)displayViewControllerIfNeeded:(id)arg1;
- (void)updateComposeCommitMessage:(id)arg1;
- (void)displayCommitViewController;
- (void)displayRebaseStatusViewController;
- (void)displayMergeSequenceStatusViewController;
- (void)displayMergeStatusViewController;
- (void)updateContentViewIfNeeded;
- (void)repositoryDidFinishCheckout:(id)arg1;
- (void)repositoryDidStartCheckout:(id)arg1;
- (void)repositoryDidUpdateWorkingTree:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
