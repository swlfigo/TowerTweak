//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGettingStartedDetailController.h"

@class GTBookmarksController, GTSearchLocalHardDriveViewController, NSView;

@interface GTGettingStartedRepositoriesViewController : GTGettingStartedDetailController
{
    NSView *_searchLocalHardDriveView;
    GTBookmarksController *_bookmarksController;
    GTSearchLocalHardDriveViewController *_searchLocalHardDriveViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTSearchLocalHardDriveViewController *searchLocalHardDriveViewController; // @synthesize searchLocalHardDriveViewController=_searchLocalHardDriveViewController;
@property(retain, nonatomic) GTBookmarksController *bookmarksController; // @synthesize bookmarksController=_bookmarksController;
@property(retain, nonatomic) NSView *searchLocalHardDriveView; // @synthesize searchLocalHardDriveView=_searchLocalHardDriveView;
- (id)selectedRepositories;
- (void)didTriggeredNext:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)commonInit;

@end
