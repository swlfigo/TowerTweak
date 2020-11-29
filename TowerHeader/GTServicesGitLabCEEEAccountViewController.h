//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

#import "GTServicesGitLabCEEEAccountControllerDelegate-Protocol.h"

@class GTDialogueWindowController, GTServiceAccount, GTServiceAccountCredentials, GTServicesGitLabCEEEAccountController, GTStateManager, NSAlert, NSString;

@interface GTServicesGitLabCEEEAccountViewController : GTDialogueViewController <GTServicesGitLabCEEEAccountControllerDelegate>
{
    BOOL _validating;
    GTServiceAccount *_serviceAccount;
    GTServiceAccountCredentials *_serviceAccountCredentials;
    GTServicesGitLabCEEEAccountController *_accountController;
    GTDialogueWindowController *_dialogueWindowController;
    GTStateManager *_viewState;
    NSAlert *_alert;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTDialogueWindowController *dialogueWindowController; // @synthesize dialogueWindowController=_dialogueWindowController;
@property(nonatomic, getter=isValidating) BOOL validating; // @synthesize validating=_validating;
@property(retain, nonatomic) GTServicesGitLabCEEEAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) GTServiceAccountCredentials *serviceAccountCredentials; // @synthesize serviceAccountCredentials=_serviceAccountCredentials;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
- (void)gitLabCEEEAccountController:(id)arg1 didFailWithError:(id)arg2;
- (void)gitLabCEEEAccountControllerDidValidateCredentials:(id)arg1;
- (void)gitLabCEEEAccountControllerDidAuthorize:(id)arg1;
- (BOOL)submitDialogue:(id *)arg1;
- (BOOL)cancelDialogue:(id *)arg1;
- (void)authenticationMethodSelectionDidChange:(id)arg1;
- (BOOL)validatesSubmitButton;
- (void)updateSubmitButtonTitle;
- (BOOL)needsUpdateSubmitButtonTitle;
- (void)updateTitle;
- (BOOL)needsUpdateTitle;
- (void)updateInputFields;
- (BOOL)needsUpdateInputFields;
- (void)updateViewState;
- (void)update;
- (BOOL)needsUpdate;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL needsValidation;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

