//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, NSArray, NSComboBox, NSString, NSView;

@interface GTRebaseOntoBranchDialogueViewController : GTDialogueViewController
{
    BOOL _partialRebase;
    GTGitRepository *_repository;
    NSArray *_branchRefs;
    NSArray *_selectedRevisions;
    NSString *_selectedCurrentBaseRevision;
    NSString *_selectedTargetBaseRevision;
    NSComboBox *_baseBranchComboBox;
    NSComboBox *_targetBaseBranchComboBox;
    NSComboBox *_targetBaseBranchComboBox2;
    NSView *_viewWithBaseAndTargetBase;
    NSView *_viewWithTargetBaseOnly;
    NSArray *_remoteBranchRefs;
    NSArray *_tagRefs;
    NSArray *_baseRefs;
    NSArray *_targetBaseRefs;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *targetBaseRefs; // @synthesize targetBaseRefs=_targetBaseRefs;
@property(retain, nonatomic) NSArray *baseRefs; // @synthesize baseRefs=_baseRefs;
@property(retain, nonatomic) NSArray *tagRefs; // @synthesize tagRefs=_tagRefs;
@property(retain, nonatomic) NSArray *remoteBranchRefs; // @synthesize remoteBranchRefs=_remoteBranchRefs;
@property(retain, nonatomic) NSView *viewWithTargetBaseOnly; // @synthesize viewWithTargetBaseOnly=_viewWithTargetBaseOnly;
@property(retain, nonatomic) NSView *viewWithBaseAndTargetBase; // @synthesize viewWithBaseAndTargetBase=_viewWithBaseAndTargetBase;
@property(retain, nonatomic) NSComboBox *targetBaseBranchComboBox2; // @synthesize targetBaseBranchComboBox2=_targetBaseBranchComboBox2;
@property(retain, nonatomic) NSComboBox *targetBaseBranchComboBox; // @synthesize targetBaseBranchComboBox=_targetBaseBranchComboBox;
@property(retain, nonatomic) NSComboBox *baseBranchComboBox; // @synthesize baseBranchComboBox=_baseBranchComboBox;
@property(nonatomic, getter=isPartialRebase) BOOL partialRebase; // @synthesize partialRebase=_partialRebase;
@property(retain, nonatomic) NSString *selectedTargetBaseRevision; // @synthesize selectedTargetBaseRevision=_selectedTargetBaseRevision;
@property(retain, nonatomic) NSString *selectedCurrentBaseRevision; // @synthesize selectedCurrentBaseRevision=_selectedCurrentBaseRevision;
@property(retain, nonatomic) NSArray *selectedRevisions; // @synthesize selectedRevisions=_selectedRevisions;
@property(retain, nonatomic) NSArray *branchRefs; // @synthesize branchRefs=_branchRefs;
@property(readonly, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)validatesSubmitButton;
- (void)loadRefs;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)updateTargetBaseRefs;
- (void)updateBaseRefs;
- (void)configure;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

