//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTBaseBranchStatusControllerDelegate-Protocol.h"
#import "GTRefSelectorViewControllerDelegate-Protocol.h"

@class GTBaseBranchStatusController, GTGitBranch, GTGitRepository, GTHistoryRefsConfiguration, GTRefSelectorViewController, GTStateManager, NSButton, NSDictionary, NSImage, NSImageView, NSString;
@protocol GTHistoryCommitListBaseBranchHeaderViewControllerDelegate;

@interface GTHistoryCommitListBaseBranchHeaderViewController : GTViewController <GTRefSelectorViewControllerDelegate, GTBaseBranchStatusControllerDelegate>
{
    GTGitRepository *_repository;
    GTGitBranch *_baseBranch;
    id <GTHistoryCommitListBaseBranchHeaderViewControllerDelegate> _delegate;
    GTHistoryRefsConfiguration *_refsConfiguration;
    NSImageView *_mergeConflictWarningImageView;
    NSButton *_baseBranchButton;
    NSButton *_behindBaseBranchCommitCountButton;
    GTBaseBranchStatusController *_baseBranchStatusController;
    NSDictionary *_defaultButtonTextAttributes;
    GTRefSelectorViewController *_refSelectorViewController;
    GTStateManager *_viewState;
}

+ (id)keyPathsForValuesAffectingBehindBaseBranchCommitsExist;
- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTRefSelectorViewController *refSelectorViewController; // @synthesize refSelectorViewController=_refSelectorViewController;
@property(retain, nonatomic) NSDictionary *defaultButtonTextAttributes; // @synthesize defaultButtonTextAttributes=_defaultButtonTextAttributes;
@property(retain, nonatomic) GTBaseBranchStatusController *baseBranchStatusController; // @synthesize baseBranchStatusController=_baseBranchStatusController;
@property(nonatomic) __weak NSButton *behindBaseBranchCommitCountButton; // @synthesize behindBaseBranchCommitCountButton=_behindBaseBranchCommitCountButton;
@property(nonatomic) __weak NSButton *baseBranchButton; // @synthesize baseBranchButton=_baseBranchButton;
@property(nonatomic) __weak NSImageView *mergeConflictWarningImageView; // @synthesize mergeConflictWarningImageView=_mergeConflictWarningImageView;
@property(retain, nonatomic) GTHistoryRefsConfiguration *refsConfiguration; // @synthesize refsConfiguration=_refsConfiguration;
@property(nonatomic) __weak id <GTHistoryCommitListBaseBranchHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTGitBranch *baseBranch; // @synthesize baseBranch=_baseBranch;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)restoreBaseBranch;
- (void)baseBranchStatusControllerDidFinishReload:(id)arg1;
- (void)refSelectorDidSelectHEADRevision:(id)arg1;
- (void)refSelector:(id)arg1 didSelectRef:(id)arg2;
- (void)rebaseBaseBranch:(id)arg1;
- (void)mergeBaseBranch:(id)arg1;
- (void)changeBaseBranch:(id)arg1;
- (void)showRefSelector:(id)arg1;
- (void)updateRefSelectorViewController;
- (BOOL)needsUpdateRefSelectorViewController;
- (void)updateBehindBaseBranchCommitCountButton;
- (BOOL)needsUpdateBehindBaseBranchCommitCountButton;
- (void)updateBaseBranchButton;
- (BOOL)needsUpdateBaseBranchButton;
- (void)updateBaseBranchStatus;
- (BOOL)needsUpdateBaseBranchStatus;
- (void)updateBaseBranch;
- (BOOL)needsUpdateBaseBranch;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)update;
- (void)prepareForUpdate;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSImage *branchIcon;
@property(readonly, nonatomic) BOOL behindBaseBranchCommitsExist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
