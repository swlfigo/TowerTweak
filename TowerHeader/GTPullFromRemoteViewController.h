//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

#import "NSMenuDelegate-Protocol.h"

@class GTGitRef, GTGitRepository, NSArray, NSArrayController, NSButton, NSColor, NSString;

@interface GTPullFromRemoteViewController : GTDialogueViewController <NSMenuDelegate>
{
    BOOL _rebase;
    BOOL _verifySignatures;
    GTGitRepository *_repository;
    NSArrayController *_pullSourcesController;
    NSButton *_rebaseCheckbox;
    NSButton *_verifySignaturesCheckbox;
    NSArray *_pullSources;
    GTGitRef *_selectedRef;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
+ (id)keyPathsForValuesAffectingOptionTextColor;
+ (id)keyPathsForValuesAffectingSVNBranchSelected;
- (void).cxx_destruct;
@property(nonatomic) BOOL verifySignatures; // @synthesize verifySignatures=_verifySignatures;
@property(nonatomic) BOOL rebase; // @synthesize rebase=_rebase;
@property(retain, nonatomic) GTGitRef *selectedRef; // @synthesize selectedRef=_selectedRef;
@property(retain, nonatomic) NSArray *pullSources; // @synthesize pullSources=_pullSources;
@property(nonatomic) __weak NSButton *verifySignaturesCheckbox; // @synthesize verifySignaturesCheckbox=_verifySignaturesCheckbox;
@property(nonatomic) __weak NSButton *rebaseCheckbox; // @synthesize rebaseCheckbox=_rebaseCheckbox;
@property(nonatomic) __weak NSArrayController *pullSourcesController; // @synthesize pullSourcesController=_pullSourcesController;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)menuNeedsUpdate:(id)arg1;
- (void)verifySignaturesOptionToggled:(id)arg1;
- (void)rebaseOptionToggled:(id)arg1;
- (unsigned long long)pullOptions;
- (void)updateRebaseOption;
- (void)updateRefPreselection;
- (void)loadPullSources;
- (BOOL)validatesSubmitButton;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=isSVNBranchSelected) BOOL SVNBranchSelected;
@property(readonly, nonatomic) NSColor *optionTextColor;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

