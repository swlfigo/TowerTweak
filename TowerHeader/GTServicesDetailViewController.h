//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTApplicationStatusObserving-Protocol.h"
#import "GTServiceAccountUIActions-Protocol.h"

@class GTApplicationStatusObserver, GTAvatarImageView, GTServiceAccount, GTServicesAccountViewController, GTServicesPublicKeysViewController, GTServicesRepositoriesViewController, GTStateManager, GTUpgradeAccountViewController, NSArray, NSColor, NSImage, NSNumber, NSSegmentedControl, NSString, NSView;
@protocol GTServicesDetailViewControllerDelegate;

@interface GTServicesDetailViewController : GTViewController <GTApplicationStatusObserving, GTServiceAccountUIActions>
{
    BOOL _canShowEnterpriseServiceData;
    id <GTServicesDetailViewControllerDelegate> _delegate;
    NSSegmentedControl *_contentViewSwitch;
    GTServiceAccount *_serviceAccount;
    GTServiceAccount *_parentServiceAccount;
    GTAvatarImageView *_avatarImageView;
    NSView *_contentView;
    NSNumber *_selectedContentViewTypeValue;
    NSArray *_contentViewTypes;
    NSImage *_iconImage;
    GTStateManager *_viewState;
    NSArray *_contentViewTypeItems;
    GTServicesRepositoriesViewController *_repositoriesViewController;
    GTServicesPublicKeysViewController *_publicKeysViewController;
    GTServicesAccountViewController *_accountViewController;
    GTUpgradeAccountViewController *_upgradePlanViewController;
    GTApplicationStatusObserver *_applicationStatusObserver;
}

+ (id)keyPathsForValuesAffectingCanOpenServiceAccountWebURL;
+ (id)keyPathsForValuesAffectingServiceAccountDisplayName;
+ (id)keyPathsForValuesAffectingServiceAccountUsername;
+ (id)keyPathsForValuesAffectingSelectedContentViewType;
- (void).cxx_destruct;
@property(retain, nonatomic) GTApplicationStatusObserver *applicationStatusObserver; // @synthesize applicationStatusObserver=_applicationStatusObserver;
@property(nonatomic) BOOL canShowEnterpriseServiceData; // @synthesize canShowEnterpriseServiceData=_canShowEnterpriseServiceData;
@property(retain, nonatomic) GTUpgradeAccountViewController *upgradePlanViewController; // @synthesize upgradePlanViewController=_upgradePlanViewController;
@property(retain, nonatomic) GTServicesAccountViewController *accountViewController; // @synthesize accountViewController=_accountViewController;
@property(retain, nonatomic) GTServicesPublicKeysViewController *publicKeysViewController; // @synthesize publicKeysViewController=_publicKeysViewController;
@property(retain, nonatomic) GTServicesRepositoriesViewController *repositoriesViewController; // @synthesize repositoriesViewController=_repositoriesViewController;
@property(retain, nonatomic) NSArray *contentViewTypeItems; // @synthesize contentViewTypeItems=_contentViewTypeItems;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSArray *contentViewTypes; // @synthesize contentViewTypes=_contentViewTypes;
@property(retain, nonatomic) NSNumber *selectedContentViewTypeValue; // @synthesize selectedContentViewTypeValue=_selectedContentViewTypeValue;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak GTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) GTServiceAccount *parentServiceAccount; // @synthesize parentServiceAccount=_parentServiceAccount;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
@property(nonatomic) __weak NSSegmentedControl *contentViewSwitch; // @synthesize contentViewSwitch=_contentViewSwitch;
@property(nonatomic) __weak id <GTServicesDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)makeContentViewTypeItemsForContentViewTypes:(id)arg1;
- (void)displayContentView:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)applicationStatusDidChange:(id)arg1;
- (void)selectContentView:(long long)arg1;
- (void)showAccountView:(id)arg1;
- (void)showPublicKeysView:(id)arg1;
- (void)showRepositoriesView:(id)arg1;
- (void)reloadContentView:(id)arg1;
- (void)openServiceAccountWebURL:(id)arg1;
- (void)contentViewSelectionDidChange:(id)arg1;
- (void)editServiceAccount:(id)arg1;
- (void)createServicePublicKey:(id)arg1;
- (void)createServiceRepository:(id)arg1;
- (void)controllerDidChangeServiceSection;
- (void)updateAvatarImageView;
- (BOOL)needsUpdateAvatarImageView;
- (void)updateAccountView;
- (BOOL)needsUpdateAccountView;
- (void)updatePublicKeysView;
- (BOOL)needsUpdatePublicKeysView;
- (void)updateRepositoriesView;
- (BOOL)needsUpdateRepositoriesView;
- (void)updateContentView;
- (BOOL)needsUpdateContentView;
- (void)updateContentViewSwitch;
- (BOOL)needsUpdateContentViewSwitch;
- (void)updateContentViewTypes;
- (BOOL)needsUpdateContentViewTypes;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureAvatarImageView;
- (void)configureContentViewSwitch;
@property(readonly) NSColor *headerTextColor;
@property(readonly, nonatomic) BOOL canOpenServiceAccountWebURL;
@property(readonly, nonatomic) NSString *serviceAccountDisplayName;
@property(readonly, nonatomic) NSString *serviceAccountUsername;
@property(readonly, nonatomic) long long selectedContentViewType;
- (BOOL)needsUpdate;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
