//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNWindowController.h>

@class GTActivityTouchBarController, GTActivityWindowToolbarController, GTRemoteActivityViewController, GTRepositoryActivityViewController, GTSearchController, GTServiceActivityViewController;

@interface GTActivityWindowController : FNWindowController
{
    long long _selectedContentViewType;
    GTRemoteActivityViewController *_remoteActivityViewController;
    GTRepositoryActivityViewController *_repositoryActivityViewController;
    GTServiceActivityViewController *_serviceActivityViewController;
    GTSearchController *_searchController;
    GTActivityWindowToolbarController *_toolbarController;
    GTActivityTouchBarController *_touchBarController;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) GTActivityTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(nonatomic) __weak GTActivityWindowToolbarController *toolbarController; // @synthesize toolbarController=_toolbarController;
@property(nonatomic) __weak GTSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) GTServiceActivityViewController *serviceActivityViewController; // @synthesize serviceActivityViewController=_serviceActivityViewController;
@property(retain, nonatomic) GTRepositoryActivityViewController *repositoryActivityViewController; // @synthesize repositoryActivityViewController=_repositoryActivityViewController;
@property(retain, nonatomic) GTRemoteActivityViewController *remoteActivityViewController; // @synthesize remoteActivityViewController=_remoteActivityViewController;
@property(nonatomic) long long selectedContentViewType; // @synthesize selectedContentViewType=_selectedContentViewType;
- (void)displayViewController:(id)arg1;
- (id)viewReferenceURLForCurrentView;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)showServiceActivities;
- (void)showRepositoryActivities;
- (void)showRemoteActivities;
- (void)activityTypeSelectionDidChange:(id)arg1;
- (void)clearAllActivities:(id)arg1;
- (void)findInContext:(id)arg1;
- (void)searchInScope:(id)arg1;
- (void)updateTouchBar;
- (id)makeTouchBar;
- (void)windowDidLoad;
- (void)configureSearchController;
- (void)configureWindow;
- (void)configure;
- (void)showViewForViewReferenceURL:(id)arg1;

@end

