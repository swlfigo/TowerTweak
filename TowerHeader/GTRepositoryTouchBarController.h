//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTTouchBarController.h"

@protocol GTRepositoryUIActions;

@interface GTRepositoryTouchBarController : GTTouchBarController
{
    id <GTRepositoryUIActions> _target;
}

+ (id)customizationAllowedItemIdentifiers;
+ (id)customizationRequiredItemIdentifiers;
+ (id)defaultItemIdentifiers;
+ (id)customizationIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTRepositoryUIActions> target; // @synthesize target=_target;
- (id)openInFinderActionItem:(id)arg1;
- (id)openInTerminalActionItem:(id)arg1;
- (id)remoteActionItem:(id)arg1;
- (id)showHEADBranchItem:(id)arg1;
- (id)commitItem:(id)arg1;
- (id)quickFetchItem:(id)arg1;
- (id)repositoryActionsPopoverItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)configureTouchBar;

@end

