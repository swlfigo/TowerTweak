//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, GTGitSubmodule, NSArray, NSButton;

@interface GTFetchSubmoduleViewController : GTDialogueViewController
{
    BOOL _fetchesAllSubmodules;
    BOOL _prunesObsoleteRemoteBranches;
    GTGitRepository *_repository;
    NSButton *_pruneObsoleteRemoteBranchesCheckbox;
    NSArray *_submodules;
    GTGitSubmodule *_selectedSubmodule;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(nonatomic) BOOL prunesObsoleteRemoteBranches; // @synthesize prunesObsoleteRemoteBranches=_prunesObsoleteRemoteBranches;
@property(nonatomic) BOOL fetchesAllSubmodules; // @synthesize fetchesAllSubmodules=_fetchesAllSubmodules;
@property(retain, nonatomic) GTGitSubmodule *selectedSubmodule; // @synthesize selectedSubmodule=_selectedSubmodule;
@property(retain, nonatomic) NSArray *submodules; // @synthesize submodules=_submodules;
@property(nonatomic) __weak NSButton *pruneObsoleteRemoteBranchesCheckbox; // @synthesize pruneObsoleteRemoteBranchesCheckbox=_pruneObsoleteRemoteBranchesCheckbox;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (unsigned long long)fetchOptions;
- (void)updateSubmodulePreselection;
- (void)loadSubmodules;
- (void)update;
- (BOOL)validatesSubmitButton;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

