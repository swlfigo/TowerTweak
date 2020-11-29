//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTServiceAccount, GTServicePullRequest, GTServicePullRequestComment, GTServicesPullRequestController, GTStateManager, NSArray, NSArrayController, NSString, NSTextView;

@interface GTServicesPullRequestCommentViewController : GTDialogueViewController
{
    GTServicePullRequest *_servicePullRequest;
    GTServicePullRequestComment *_servicePullRequestComment;
    GTServicePullRequestComment *_parentServicePullRequestComment;
    NSString *_bodyText;
    GTServiceAccount *_selectedAccount;
    GTServicesPullRequestController *_pullRequestController;
    GTStateManager *_viewState;
    NSTextView *_bodyTextView;
    NSArrayController *_arrayController;
    NSArray *_accounts;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) NSTextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTServicesPullRequestController *pullRequestController; // @synthesize pullRequestController=_pullRequestController;
@property(retain, nonatomic) GTServiceAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(retain, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) GTServicePullRequestComment *parentServicePullRequestComment; // @synthesize parentServicePullRequestComment=_parentServicePullRequestComment;
@property(retain, nonatomic) GTServicePullRequestComment *servicePullRequestComment; // @synthesize servicePullRequestComment=_servicePullRequestComment;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
- (BOOL)submitDialogue:(id *)arg1;
- (BOOL)validatesSubmitButton;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureTitleAndText;
- (void)configureTextView;
- (void)configureAccounts;
- (void)configure;
@property(readonly, nonatomic, getter=isAccountSelectionEnabled) BOOL accountSelectionEnabled;
- (void)commonInit;

@end
