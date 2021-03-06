//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

#import "GTGPGBinaryObserving-Protocol.h"
#import "GTGitGlobalConfigObserving-Protocol.h"

@class GTGPGBinaryManager, GTGPGBinaryObserver, GTGPGKeySelectionItemController, GTGitBranch, GTGitFlowFinishReleaseBranchActionValidator, GTGitGlobalConfigObserver, GTGitRepository, NSArray, NSString, NSUserDefaults;

@interface GTGitFlowFinishReleaseBranchDialogueViewController : GTDialogueViewController <GTGitGlobalConfigObserving, GTGPGBinaryObserving>
{
    BOOL _gpgInstallationValid;
    GTGitRepository *_repository;
    NSArray *_releaseBranches;
    GTGitBranch *_releaseBranch;
    NSString *_tagMessage;
    NSUserDefaults *_userDefaults;
    GTGPGKeySelectionItemController *_keySelectionItemController;
    GTGitFlowFinishReleaseBranchActionValidator *_validator;
    GTGPGBinaryManager *_gpgBinaryManager;
    GTGitGlobalConfigObserver *_gitConfigObserver;
    GTGPGBinaryObserver *_gpgBinaryObserver;
    NSArray *_gpgKeys;
    NSArray *_gpgKeySelectionItems;
    id _selectedGPGKeyObject;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
+ (id)keyPathsForValuesAffectingOptions;
+ (id)keyPathsForValuesAffectingReleaseName;
+ (id)keyPathsForValuesAffectingSkipsTagging;
- (void).cxx_destruct;
@property(retain, nonatomic) id selectedGPGKeyObject; // @synthesize selectedGPGKeyObject=_selectedGPGKeyObject;
@property(retain, nonatomic) NSArray *gpgKeySelectionItems; // @synthesize gpgKeySelectionItems=_gpgKeySelectionItems;
@property(retain, nonatomic) NSArray *gpgKeys; // @synthesize gpgKeys=_gpgKeys;
@property(nonatomic, getter=isGPGInstallationValid) BOOL gpgInstallationValid; // @synthesize gpgInstallationValid=_gpgInstallationValid;
@property(retain, nonatomic) GTGPGBinaryObserver *gpgBinaryObserver; // @synthesize gpgBinaryObserver=_gpgBinaryObserver;
@property(retain, nonatomic) GTGitGlobalConfigObserver *gitConfigObserver; // @synthesize gitConfigObserver=_gitConfigObserver;
@property(retain, nonatomic) GTGPGBinaryManager *gpgBinaryManager; // @synthesize gpgBinaryManager=_gpgBinaryManager;
@property(retain, nonatomic) GTGitFlowFinishReleaseBranchActionValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) GTGPGKeySelectionItemController *keySelectionItemController; // @synthesize keySelectionItemController=_keySelectionItemController;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSString *tagMessage; // @synthesize tagMessage=_tagMessage;
@property(retain, nonatomic) GTGitBranch *releaseBranch; // @synthesize releaseBranch=_releaseBranch;
@property(retain, nonatomic) NSArray *releaseBranches; // @synthesize releaseBranches=_releaseBranches;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)updateGPGValidationFlag;
- (void)gpgDefaultBinaryDidUpdate:(id)arg1;
- (void)globalConfigDidUpdate:(id)arg1;
- (void)loadGPGKeys;
- (void)preselectReleaseBranchIfNeeded;
- (void)loadReleaseBranches;
- (BOOL)validatesSubmitButton;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureKeySelectionItems;
- (void)configure;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) NSString *gpgKeyFingerprint;
@property(readonly, nonatomic) NSString *releaseName;
@property(readonly, nonatomic) BOOL signTag;
@property(readonly, nonatomic) BOOL skipsTagging;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

