//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

#import "GTGitRemoteConnectionValidatorDelegate-Protocol.h"

@class GTCloneDestinationInputValidator, GTCloneDestinationMenuController, GTCollapsableView, GTGitErrorController, GTGitRemoteConnection, GTGitRemoteConnectionValidator, GTGitRemoteConnectionViewController, GTGitRemoteURL, GTStateManager, NSArray, NSDictionary, NSString, NSTokenField, NSURL;

@interface GTCloneSVNRepositoryViewController : GTDialogueViewController <GTGitRemoteConnectionValidatorDelegate>
{
    BOOL _usesDefaultSVNDirectoryLayout;
    BOOL _validating;
    BOOL _needsValidating;
    GTGitRemoteURL *_remoteURL;
    NSArray *_trunkDirectories;
    NSArray *_branchDirectories;
    NSArray *_tagDirectories;
    GTCollapsableView *_serviceAccountContentView;
    NSTokenField *_trunkDirectoriesField;
    NSTokenField *_branchDirectoriesField;
    NSTokenField *_tagDirectoriesField;
    GTCloneDestinationMenuController *_cloneDestinationMenuController;
    GTGitRemoteConnectionViewController *_gitRemoteConnectionViewController;
    GTStateManager *_viewState;
    GTGitRemoteConnectionValidator *_remoteConnectionValidator;
    GTGitErrorController *_errorController;
    GTCloneDestinationInputValidator *_cloneDestinationInputValidator;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
+ (id)keyPathsForValuesAffectingDestinationURL;
+ (id)keyPathsForValuesAffectingRemoteConnection;
- (void).cxx_destruct;
@property(retain, nonatomic) GTCloneDestinationInputValidator *cloneDestinationInputValidator; // @synthesize cloneDestinationInputValidator=_cloneDestinationInputValidator;
@property(retain, nonatomic) GTGitErrorController *errorController; // @synthesize errorController=_errorController;
@property(retain, nonatomic) GTGitRemoteConnectionValidator *remoteConnectionValidator; // @synthesize remoteConnectionValidator=_remoteConnectionValidator;
@property(nonatomic) BOOL needsValidating; // @synthesize needsValidating=_needsValidating;
@property(nonatomic, getter=isValidating) BOOL validating; // @synthesize validating=_validating;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTGitRemoteConnectionViewController *gitRemoteConnectionViewController; // @synthesize gitRemoteConnectionViewController=_gitRemoteConnectionViewController;
@property(retain, nonatomic) GTCloneDestinationMenuController *cloneDestinationMenuController; // @synthesize cloneDestinationMenuController=_cloneDestinationMenuController;
@property(nonatomic) __weak NSTokenField *tagDirectoriesField; // @synthesize tagDirectoriesField=_tagDirectoriesField;
@property(nonatomic) __weak NSTokenField *branchDirectoriesField; // @synthesize branchDirectoriesField=_branchDirectoriesField;
@property(nonatomic) __weak NSTokenField *trunkDirectoriesField; // @synthesize trunkDirectoriesField=_trunkDirectoriesField;
@property(nonatomic) __weak GTCollapsableView *serviceAccountContentView; // @synthesize serviceAccountContentView=_serviceAccountContentView;
@property(retain, nonatomic) NSArray *tagDirectories; // @synthesize tagDirectories=_tagDirectories;
@property(retain, nonatomic) NSArray *branchDirectories; // @synthesize branchDirectories=_branchDirectories;
@property(retain, nonatomic) NSArray *trunkDirectories; // @synthesize trunkDirectories=_trunkDirectories;
@property(nonatomic) BOOL usesDefaultSVNDirectoryLayout; // @synthesize usesDefaultSVNDirectoryLayout=_usesDefaultSVNDirectoryLayout;
@property(retain, nonatomic) GTGitRemoteURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (void)remoteConnectionValidatorDidFinish:(id)arg1;
- (void)remoteConnectionValidatorDidCancel:(id)arg1;
- (void)remoteConnectionValidator:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)validateDestinationURL:(id *)arg1;
- (BOOL)submitDialogue:(id *)arg1;
- (BOOL)cancelDialogue:(id *)arg1;
- (BOOL)validatesSubmitButton;
- (void)updateCloneDestination;
- (BOOL)needsUpdateCloneDestination;
- (void)updateRemoteConnectionView;
- (BOOL)needsUpdateRemoteConnectionView;
- (void)updateViewState;
- (void)update;
- (void)remoteURLDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureTokenFields;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) GTGitRemoteConnection *remoteConnection;
@property(readonly, nonatomic) NSURL *destinationURL;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
