//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSIndexSet;
@protocol GTMergeViewMergeProcessViewDelegate;

@interface GTMergeViewMergeProcessView : NSView
{
    BOOL _allowMultiSelection;
    NSArray *_items;
    NSIndexSet *_selectedIndices;
    id <GTMergeViewMergeProcessViewDelegate> _delegate;
    NSColor *_inactiveBackgroundColor;
    NSColor *_inactiveBorderColor;
    NSColor *_activeBackgroundStartingColor;
    NSColor *_activeBackgroundCenterColor;
    NSColor *_activeBackgroundEndingColor;
    NSColor *_activeBorderColor;
    double _lineWidth;
    double _lineLandingWidthFactor;
    long long _tracking;
    NSArray *_paths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(nonatomic) long long tracking; // @synthesize tracking=_tracking;
@property(nonatomic) double lineLandingWidthFactor; // @synthesize lineLandingWidthFactor=_lineLandingWidthFactor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSColor *activeBorderColor; // @synthesize activeBorderColor=_activeBorderColor;
@property(retain, nonatomic) NSColor *activeBackgroundEndingColor; // @synthesize activeBackgroundEndingColor=_activeBackgroundEndingColor;
@property(retain, nonatomic) NSColor *activeBackgroundCenterColor; // @synthesize activeBackgroundCenterColor=_activeBackgroundCenterColor;
@property(retain, nonatomic) NSColor *activeBackgroundStartingColor; // @synthesize activeBackgroundStartingColor=_activeBackgroundStartingColor;
@property(retain, nonatomic) NSColor *inactiveBorderColor; // @synthesize inactiveBorderColor=_inactiveBorderColor;
@property(retain, nonatomic) NSColor *inactiveBackgroundColor; // @synthesize inactiveBackgroundColor=_inactiveBackgroundColor;
@property(nonatomic) BOOL allowMultiSelection; // @synthesize allowMultiSelection=_allowMultiSelection;
@property __weak id <GTMergeViewMergeProcessViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexSet *selectedIndices; // @synthesize selectedIndices=_selectedIndices;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)arrowLineFrom:(double)arg1 to:(double)arg2;
- (void)drawAsInactive:(id)arg1;
- (void)drawAsActive:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)selectedItems;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

