//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTTouchBarItem.h"

@class NSArray, NSSegmentedControl;

@interface GTSegmentedTouchBarItem : GTTouchBarItem
{
    NSSegmentedControl *_segmentedControl;
    NSArray *_subItems;
}

+ (id)segmentedItemWithIdentifier:(id)arg1 items:(id)arg2 selectionIndex:(unsigned long long)arg3 trackingMode:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subItems; // @synthesize subItems=_subItems;
@property(retain, nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)validate;
- (void)segmentedControlClicked:(id)arg1;
- (void)setView:(id)arg1;
- (id)initWithIdentifier:(id)arg1 items:(id)arg2 selectionIndex:(unsigned long long)arg3 trackingMode:(unsigned long long)arg4;

@end

