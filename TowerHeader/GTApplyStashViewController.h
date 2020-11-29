//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, GTGitStash, NSArray, NSArrayController, NSPopUpButton, NSUserDefaults;

@interface GTApplyStashViewController : GTDialogueViewController
{
    BOOL _emptyStashList;
    GTGitRepository *_repository;
    NSArray *_stashes;
    NSPopUpButton *_stashPopUpButton;
    NSArrayController *_stashListController;
    GTGitStash *_selectedStash;
    NSUserDefaults *_userDefaults;
}

+ (id)keyPathsForValuesAffectingRestoresChangesToIndex;
+ (id)keyPathsForValuesAffectingDeletesStashAfterApply;
+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) GTGitStash *selectedStash; // @synthesize selectedStash=_selectedStash;
@property(nonatomic, getter=isEmptyStashList) BOOL emptyStashList; // @synthesize emptyStashList=_emptyStashList;
@property(retain, nonatomic) NSArrayController *stashListController; // @synthesize stashListController=_stashListController;
@property(retain, nonatomic) NSPopUpButton *stashPopUpButton; // @synthesize stashPopUpButton=_stashPopUpButton;
@property(copy, nonatomic) NSArray *stashes; // @synthesize stashes=_stashes;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (unsigned long long)applyStashOptions;
- (void)updateSelection;
- (void)loadStashes;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (BOOL)validatesSubmitButton;
@property(readonly, nonatomic) BOOL restoresChangesToIndex;
@property(readonly, nonatomic) BOOL deletesStashAfterApply;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

