//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBaseRepositoryViewController.h"

#import "GTGitRepositoryObserving-Protocol.h"
#import "GTRepositoryPullRequestsActions-Protocol.h"
#import "GTServicesObserving-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class GTGitRemote, GTPullRequestActionSenderValidator, GTPullRequestsRemoteMenuGenerator, GTServicesObserver, NSArray, NSButton, NSImage, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString;
@protocol GTPullRequestsListHeaderViewControllerDelegate;

@interface GTPullRequestsListHeaderViewController : GTBaseRepositoryViewController <GTGitRepositoryObserving, GTServicesObserving, GTRepositoryPullRequestsActions, NSMenuDelegate>
{
    BOOL _remoteSelectorEnabled;
    BOOL _createPullRequestButtonEnabled;
    BOOL _loadingPullRequests;
    id <GTPullRequestsListHeaderViewControllerDelegate> _delegate;
    GTGitRemote *_remote;
    NSButton *_remoteSelectorButton;
    NSImageView *_remoteImageView;
    NSProgressIndicator *_progressIndicator;
    GTPullRequestsRemoteMenuGenerator *_menuGenerator;
    GTPullRequestActionSenderValidator *_pullRequestActionValidator;
    NSArray *_actionValidators;
    GTServicesObserver *_servicesObserver;
    NSLayoutConstraint *_loadingIndicatorZeroWidthConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *loadingIndicatorZeroWidthConstraint; // @synthesize loadingIndicatorZeroWidthConstraint=_loadingIndicatorZeroWidthConstraint;
@property(nonatomic) BOOL loadingPullRequests; // @synthesize loadingPullRequests=_loadingPullRequests;
@property(retain, nonatomic) GTServicesObserver *servicesObserver; // @synthesize servicesObserver=_servicesObserver;
@property(retain, nonatomic) NSArray *actionValidators; // @synthesize actionValidators=_actionValidators;
@property(retain, nonatomic) GTPullRequestActionSenderValidator *pullRequestActionValidator; // @synthesize pullRequestActionValidator=_pullRequestActionValidator;
@property(nonatomic, getter=isCreatePullRequestButtonEnabled) BOOL createPullRequestButtonEnabled; // @synthesize createPullRequestButtonEnabled=_createPullRequestButtonEnabled;
@property(nonatomic, getter=isRemoteSelectorEnabled) BOOL remoteSelectorEnabled; // @synthesize remoteSelectorEnabled=_remoteSelectorEnabled;
@property(retain, nonatomic) GTPullRequestsRemoteMenuGenerator *menuGenerator; // @synthesize menuGenerator=_menuGenerator;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSImageView *remoteImageView; // @synthesize remoteImageView=_remoteImageView;
@property(nonatomic) __weak NSButton *remoteSelectorButton; // @synthesize remoteSelectorButton=_remoteSelectorButton;
@property(retain, nonatomic) GTGitRemote *remote; // @synthesize remote=_remote;
@property(nonatomic) __weak id <GTPullRequestsListHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)serviceActivitiesDidUpdate:(id)arg1;
- (void)serviceAccountsDidUpdate:(id)arg1;
- (void)repositoryDidUpdateRemotes:(id)arg1;
- (void)repositoryDidUpdateRemotesServiceRepository:(id)arg1;
- (void)repositoryDidChange;
- (void)selectRemote:(id)arg1;
- (void)showRemoteSelector:(id)arg1;
- (void)createServicePullRequest:(id)arg1;
- (void)updateLoadingIndicator;
- (void)updateMenuGenerator;
- (void)updateRemoteSelectorButton;
- (BOOL)needsUpdateLoadingIndicator;
- (BOOL)needsUpdateMenuGenerator;
- (BOOL)needsUpdateRemoteSelectorButton;
- (void)updateViewState;
- (void)updateViewComponents;
- (void)updateRemote;
- (void)updateCreatePullRequestButtonEnabledFlag;
- (void)updateRemoteSelectorEnabledFlag;
- (void)prepareForUpdate;
- (void)viewWillDisappear;
- (void)viewDidAppear;
@property(readonly, nonatomic) NSImage *remoteImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

