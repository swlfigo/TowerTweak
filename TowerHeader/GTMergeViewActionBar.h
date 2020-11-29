//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTItemsContainerView.h"

@class FNView, GTMergeViewActionButton, NSArray, NSIndexSet, NSString;
@protocol GTMergeViewActionBarDelegate;

@interface GTMergeViewActionBar : GTItemsContainerView
{
    BOOL _showAlternatives;
    BOOL _allowMultiSelection;
    id <GTMergeViewActionBarDelegate> _delegate;
    NSString *_mergeToolTitle;
    GTMergeViewActionButton *_resolveButton;
    GTMergeViewActionButton *_cancelResolvingButton;
    GTMergeViewActionButton *_startOverButton;
    GTMergeViewActionButton *_confirmButton;
    FNView *_resolvingProgress;
    NSArray *_resolveButtonTitlesForSelectedIndices;
    NSString *_disabledResolveButtonTitle;
    NSString *_noMergeToolResolveButtonTitle;
    NSString *_multiHintMergeResolveButtonTitle;
    NSString *_emptySelectionMergeResolveButtonTitle;
    NSString *_multiSelectionMergeResolveButtonTitle;
    NSString *_alternateEmptySelectionMergeResolveButtonTitle;
    NSString *_alternateMultiSelectionMergeResolveButtonTitle;
    NSIndexSet *_selectedIndices;
    NSIndexSet *_hintedIndices;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL allowMultiSelection; // @synthesize allowMultiSelection=_allowMultiSelection;
@property(nonatomic) BOOL showAlternatives; // @synthesize showAlternatives=_showAlternatives;
@property(retain, nonatomic) NSIndexSet *hintedIndices; // @synthesize hintedIndices=_hintedIndices;
@property(retain, nonatomic) NSIndexSet *selectedIndices; // @synthesize selectedIndices=_selectedIndices;
@property(retain, nonatomic) NSString *alternateMultiSelectionMergeResolveButtonTitle; // @synthesize alternateMultiSelectionMergeResolveButtonTitle=_alternateMultiSelectionMergeResolveButtonTitle;
@property(retain, nonatomic) NSString *alternateEmptySelectionMergeResolveButtonTitle; // @synthesize alternateEmptySelectionMergeResolveButtonTitle=_alternateEmptySelectionMergeResolveButtonTitle;
@property(retain, nonatomic) NSString *multiSelectionMergeResolveButtonTitle; // @synthesize multiSelectionMergeResolveButtonTitle=_multiSelectionMergeResolveButtonTitle;
@property(retain, nonatomic) NSString *emptySelectionMergeResolveButtonTitle; // @synthesize emptySelectionMergeResolveButtonTitle=_emptySelectionMergeResolveButtonTitle;
@property(retain, nonatomic) NSString *multiHintMergeResolveButtonTitle; // @synthesize multiHintMergeResolveButtonTitle=_multiHintMergeResolveButtonTitle;
@property(retain, nonatomic) NSString *noMergeToolResolveButtonTitle; // @synthesize noMergeToolResolveButtonTitle=_noMergeToolResolveButtonTitle;
@property(retain, nonatomic) NSString *disabledResolveButtonTitle; // @synthesize disabledResolveButtonTitle=_disabledResolveButtonTitle;
@property(retain, nonatomic) NSArray *resolveButtonTitlesForSelectedIndices; // @synthesize resolveButtonTitlesForSelectedIndices=_resolveButtonTitlesForSelectedIndices;
@property(retain, nonatomic) FNView *resolvingProgress; // @synthesize resolvingProgress=_resolvingProgress;
@property(retain, nonatomic) GTMergeViewActionButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) GTMergeViewActionButton *startOverButton; // @synthesize startOverButton=_startOverButton;
@property(retain, nonatomic) GTMergeViewActionButton *cancelResolvingButton; // @synthesize cancelResolvingButton=_cancelResolvingButton;
@property(retain, nonatomic) GTMergeViewActionButton *resolveButton; // @synthesize resolveButton=_resolveButton;
@property(retain, nonatomic) NSString *mergeToolTitle; // @synthesize mergeToolTitle=_mergeToolTitle;
@property __weak id <GTMergeViewActionBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cancelResolvingButtonTitle;
- (void)confirmResolve:(id)arg1;
- (void)startOverResolve:(id)arg1;
- (void)cancelResolving:(id)arg1;
- (void)startResolving:(id)arg1;
- (void)updateCancelResolvingButton;
- (void)updateResolveButton;
- (void)updateBarForSelectedIndices:(id)arg1 hintedIndices:(id)arg2 showAlternatives:(BOOL)arg3 allowMultiSelection:(BOOL)arg4;
- (void)displayAfterResolveState;
- (void)displayDuringResolveState;
- (void)displayBeforeResolveState;
- (void)setupAfterResolveState;
- (void)setupDuringResolveState;
- (void)setupBeforeResolveState;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
