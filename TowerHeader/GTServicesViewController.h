//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTApplicationStatusObserving-Protocol.h"
#import "GTServicesDetailViewControllerDelegate-Protocol.h"
#import "GTServicesSidebarViewControllerObserving-Protocol.h"
#import "GTTouchBarControllerDelegate-Protocol.h"
#import "GTWindowObserving-Protocol.h"

@class GTApplicationStatusObserver, GTEmptyViewController, GTServiceAccount, GTServiceAccountController, GTServicesDashboardViewController, GTServicesDetailViewController, GTServicesSidebarViewController, GTServicesSidebarViewControllerObserver, GTServicesTouchBarController, GTStateManager, NSSplitViewController, NSString, NSTimer;

@interface GTServicesViewController : GTViewController <GTWindowObserving, GTServicesSidebarViewControllerObserving, GTServicesDetailViewControllerDelegate, GTTouchBarControllerDelegate, GTApplicationStatusObserving>
{
    NSSplitViewController *_splitViewController;
    GTServicesSidebarViewController *_sidebarViewController;
    GTServicesDetailViewController *_detailViewController;
    GTEmptyViewController *_multipleSelectionViewController;
    GTServicesDashboardViewController *_emptySelectionViewController;
    GTServicesSidebarViewControllerObserver *_sidebarViewControllerObserver;
    GTStateManager *_viewState;
    GTServiceAccountController *_serviceAccountController;
    GTServicesTouchBarController *_touchBarController;
    NSTimer *_touchBarValidationTimer;
    GTApplicationStatusObserver *_applicationStatusObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTApplicationStatusObserver *applicationStatusObserver; // @synthesize applicationStatusObserver=_applicationStatusObserver;
@property(retain, nonatomic) NSTimer *touchBarValidationTimer; // @synthesize touchBarValidationTimer=_touchBarValidationTimer;
@property(retain, nonatomic) GTServicesTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(retain, nonatomic) GTServiceAccountController *serviceAccountController; // @synthesize serviceAccountController=_serviceAccountController;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTServicesSidebarViewControllerObserver *sidebarViewControllerObserver; // @synthesize sidebarViewControllerObserver=_sidebarViewControllerObserver;
@property(retain, nonatomic) GTServicesDashboardViewController *emptySelectionViewController; // @synthesize emptySelectionViewController=_emptySelectionViewController;
@property(retain, nonatomic) GTEmptyViewController *multipleSelectionViewController; // @synthesize multipleSelectionViewController=_multipleSelectionViewController;
@property(retain, nonatomic) GTServicesDetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) GTServicesSidebarViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property(retain, nonatomic) NSSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
- (BOOL)selectAccountWithID:(id)arg1;
- (void)showAccountInfoForAccountWithID:(id)arg1;
- (void)showPublicKeysForAccountWithID:(id)arg1;
- (void)showRepositoriesForAccountWithID:(id)arg1;
- (void)removeServiceAccounts:(id)arg1;
- (void)reload:(id)arg1;
- (void)updateDetailView;
- (BOOL)needsUpdateDetailView;
- (void)updateMultipleSelectionView;
- (BOOL)needsUpdateMultipleSelectionView;
- (void)updateTouchBar;
- (void)updateContentView;
- (BOOL)needsUpdateContentView;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)applicationStatusDidChange:(id)arg1;
- (void)touchBarControllerDidInvalidateTouchBar:(id)arg1;
- (void)servicesSidebarViewControllerDidChangeSelection:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)configureSplitView;
- (void)configureWindowTitle;
- (id)makeTouchBar;
- (void)servicesDetailViewControllerDidChangeServiceSection:(id)arg1;
- (void)reloadServiceAccounts;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)windowDidUpdate:(id)arg1;
- (BOOL)needsUpdate;
@property(readonly, nonatomic) GTServiceAccount *parentSelectedServiceAccount;
@property(readonly, nonatomic) GTServiceAccount *selectedServiceAccount;
- (void)commonInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

