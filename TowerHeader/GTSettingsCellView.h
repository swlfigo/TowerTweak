//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "GTSettingsCellViewHeight-Protocol.h"

@class NSArray, NSColor, NSFont, NSLayoutConstraint, NSSegmentedControl, NSString, NSTrackingArea, NSViewAnimation;

@interface GTSettingsCellView : NSTableCellView <GTSettingsCellViewHeight>
{
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelRightPaddingConstraint;
    NSSegmentedControl *_actionButtonsControl;
    NSArray *_actionButtonItems;
    NSFont *_labelFont;
    NSColor *_labelColor;
    long long _selectedActionButtonIndex;
    NSTrackingArea *_trackingArea;
    double _actionButtonsControlAnimationDuration;
    NSViewAnimation *_viewAnimation;
}

+ (id)height;
- (void).cxx_destruct;
@property(retain, nonatomic) NSViewAnimation *viewAnimation; // @synthesize viewAnimation=_viewAnimation;
@property(nonatomic) double actionButtonsControlAnimationDuration; // @synthesize actionButtonsControlAnimationDuration=_actionButtonsControlAnimationDuration;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) long long selectedActionButtonIndex; // @synthesize selectedActionButtonIndex=_selectedActionButtonIndex;
@property(retain, nonatomic) NSColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) NSArray *actionButtonItems; // @synthesize actionButtonItems=_actionButtonItems;
@property(nonatomic) __weak NSSegmentedControl *actionButtonsControl; // @synthesize actionButtonsControl=_actionButtonsControl;
@property(nonatomic) __weak NSLayoutConstraint *labelRightPaddingConstraint; // @synthesize labelRightPaddingConstraint=_labelRightPaddingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelWidthConstraint; // @synthesize labelWidthConstraint=_labelWidthConstraint;
- (void)updateActionButtonsControl;
- (void)update;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)actionButtonPressed:(id)arg1;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) BOOL automaticallyHidesActions;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
