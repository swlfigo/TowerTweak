//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitFlowCreateFeatureBranchActionValidator, GTGitRepository, NSArray, NSString, NSUserDefaults;

@interface GTGitFlowCreateFeatureBranchDialogueViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    NSArray *_refs;
    NSString *_startingPoint;
    NSString *_featureName;
    NSUserDefaults *_userDefaults;
    GTGitFlowCreateFeatureBranchActionValidator *_validator;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitFlowCreateFeatureBranchActionValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic) NSString *startingPoint; // @synthesize startingPoint=_startingPoint;
@property(retain, nonatomic) NSArray *refs; // @synthesize refs=_refs;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)preselectStartingPoint;
- (void)loadRefs;
- (BOOL)validatesSubmitButton;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

