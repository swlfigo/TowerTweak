//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitHistoryManager, GTGitRepository, NSArray, NSArrayController, NSButton, NSColor;

@interface GTRevertRevisionsDialogueViewController : GTDialogueViewController
{
    BOOL _canSelectMainline;
    BOOL _loadingCommits;
    GTGitRepository *_repository;
    NSArrayController *_parentCommitsController;
    NSButton *_autoCommitsCheckbox;
    NSArray *_revisions;
    NSArray *_parentCommits;
    unsigned long long _selectedMainlineIndex;
    GTGitHistoryManager *_historyManager;
}

+ (id)keyPathsForValuesAffectingMainlineParentNumber;
+ (id)keyPathsForValuesAffectingMainlineDescriptionTextColor;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic, getter=isLoadingCommits) BOOL loadingCommits; // @synthesize loadingCommits=_loadingCommits;
@property(nonatomic) unsigned long long selectedMainlineIndex; // @synthesize selectedMainlineIndex=_selectedMainlineIndex;
@property(copy, nonatomic) NSArray *parentCommits; // @synthesize parentCommits=_parentCommits;
@property(copy, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
@property(nonatomic) BOOL canSelectMainline; // @synthesize canSelectMainline=_canSelectMainline;
@property(nonatomic) __weak NSButton *autoCommitsCheckbox; // @synthesize autoCommitsCheckbox=_autoCommitsCheckbox;
@property(nonatomic) __weak NSArrayController *parentCommitsController; // @synthesize parentCommitsController=_parentCommitsController;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (unsigned long long)revertOptions;
- (void)controllerDidLoadCommits:(id)arg1;
- (void)controllerDidFailLoadingCommitsWithError:(id)arg1;
- (void)loadCommits;
- (void)updateTitleAndTextIfNeeded;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(readonly, nonatomic) unsigned long long mainlineParentNumber;
@property(readonly, nonatomic) NSColor *mainlineDescriptionTextColor;
@property(readonly, nonatomic) BOOL autoCommits;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

