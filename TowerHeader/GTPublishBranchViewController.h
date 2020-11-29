//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitBranch, GTGitPublishBranchActionValidator, GTGitRemote, GTGitRepository, NSArray, NSArrayController, NSString;

@interface GTPublishBranchViewController : GTDialogueViewController
{
    BOOL _tracksBranch;
    BOOL _emptyBranchList;
    BOOL _emptyRemoteList;
    NSArrayController *_branchesController;
    NSArrayController *_remotesController;
    GTGitRepository *_repository;
    NSArray *_branches;
    NSArray *_remotes;
    GTGitBranch *_selectedBranch;
    GTGitRemote *_selectedRemote;
    NSString *_branchName;
    GTGitPublishBranchActionValidator *_validator;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitPublishBranchActionValidator *validator; // @synthesize validator=_validator;
@property(nonatomic, getter=isEmptyRemoteList) BOOL emptyRemoteList; // @synthesize emptyRemoteList=_emptyRemoteList;
@property(nonatomic, getter=isEmptyBranchList) BOOL emptyBranchList; // @synthesize emptyBranchList=_emptyBranchList;
@property(nonatomic) BOOL tracksBranch; // @synthesize tracksBranch=_tracksBranch;
@property(copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(retain, nonatomic) GTGitRemote *selectedRemote; // @synthesize selectedRemote=_selectedRemote;
@property(retain, nonatomic) GTGitBranch *selectedBranch; // @synthesize selectedBranch=_selectedBranch;
@property(copy, nonatomic) NSArray *remotes; // @synthesize remotes=_remotes;
@property(copy, nonatomic) NSArray *branches; // @synthesize branches=_branches;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSArrayController *remotesController; // @synthesize remotesController=_remotesController;
@property(retain, nonatomic) NSArrayController *branchesController; // @synthesize branchesController=_branchesController;
- (BOOL)submitDialogue:(id *)arg1;
- (void)updateRemotePreselection;
- (void)updateBranchPreselection;
- (void)loadRemotes;
- (void)loadBranches;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (BOOL)validatesSubmitButton;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

