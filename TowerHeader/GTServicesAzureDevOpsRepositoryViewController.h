//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTServiceAccount, GTServiceRepositoryCreationInfo, GTServicesAzureDevOpsRepositoryController, GTStateManager;

@interface GTServicesAzureDevOpsRepositoryViewController : GTDialogueViewController
{
    GTServiceAccount *_serviceAccount;
    GTServiceRepositoryCreationInfo *_serviceRepositoryCreationInfo;
    GTServicesAzureDevOpsRepositoryController *_repositoryController;
    GTStateManager *_viewState;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTServicesAzureDevOpsRepositoryController *repositoryController; // @synthesize repositoryController=_repositoryController;
@property(retain, nonatomic) GTServiceRepositoryCreationInfo *serviceRepositoryCreationInfo; // @synthesize serviceRepositoryCreationInfo=_serviceRepositoryCreationInfo;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
- (BOOL)submitDialogue:(id *)arg1;
- (BOOL)validatesSubmitButton;
- (void)updateTitleAndText;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;

@end

