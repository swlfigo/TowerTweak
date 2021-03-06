//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTTouchBarController.h"

@class GTSegmentedTouchBarItem;
@protocol GTRepositoryBlobActions;

@interface GTRepositoryBlobTouchBarController : GTTouchBarController
{
    id <GTRepositoryBlobActions> _target;
    long long _selectedContentViewType;
    GTSegmentedTouchBarItem *_segmentedTouchBarItem;
}

+ (id)customizationAllowedItemIdentifiers;
+ (id)customizationRequiredItemIdentifiers;
+ (id)defaultItemIdentifiers;
+ (id)customizationIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak GTSegmentedTouchBarItem *segmentedTouchBarItem; // @synthesize segmentedTouchBarItem=_segmentedTouchBarItem;
@property(nonatomic) long long selectedContentViewType; // @synthesize selectedContentViewType=_selectedContentViewType;
@property(nonatomic) __weak id <GTRepositoryBlobActions> target; // @synthesize target=_target;
- (id)showRevisionSelectorItem:(id)arg1;
- (id)showFileSelectorItem:(id)arg1;
- (id)blobSectionItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)update;
- (void)configureTouchBar;

@end

