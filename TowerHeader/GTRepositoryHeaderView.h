//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class GTActionBarView, GTSeparator, NSColor, NSGradient, NSTrackingArea;

@interface GTRepositoryHeaderView : NSVisualEffectView
{
    BOOL _drawsBottomBorder;
    BOOL _canShowActionBar;
    GTActionBarView *_actionBarView;
    NSColor *_backgroundGradientStartingColor;
    NSColor *_backgroundGradientEndingColor;
    NSColor *_borderColor;
    NSColor *_inactiveBorderColor;
    NSTrackingArea *_trackingArea;
    NSGradient *_backgroundGradient;
    double _backgroundGradientAngle;
    GTSeparator *_bottomBorderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTSeparator *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) double backgroundGradientAngle; // @synthesize backgroundGradientAngle=_backgroundGradientAngle;
@property(retain, nonatomic) NSGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL canShowActionBar; // @synthesize canShowActionBar=_canShowActionBar;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(retain, nonatomic) NSColor *inactiveBorderColor; // @synthesize inactiveBorderColor=_inactiveBorderColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *backgroundGradientEndingColor; // @synthesize backgroundGradientEndingColor=_backgroundGradientEndingColor;
@property(retain, nonatomic) NSColor *backgroundGradientStartingColor; // @synthesize backgroundGradientStartingColor=_backgroundGradientStartingColor;
@property(nonatomic) __weak GTActionBarView *actionBarView; // @synthesize actionBarView=_actionBarView;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

