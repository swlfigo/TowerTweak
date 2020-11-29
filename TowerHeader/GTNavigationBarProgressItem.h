//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSDictionary, NSFont, NSGradient;

@interface GTNavigationBarProgressItem : NSButton
{
    long long _progressStyle;
    NSFont *_textFont;
    NSColor *_textColor;
    double _borderWidth;
    double _borderRadius;
    NSGradient *_progressGradient;
    NSColor *_progressBorderColor;
    NSColor *_progressBackgroundColor;
    NSColor *_borderColor;
    NSColor *_progressTextColor;
    NSGradient *_progressLineGradient;
    double _progressLineWidth;
    double _currentProgressValue;
    double _minProgressValue;
    double _maxProgressValue;
    struct NSEdgeInsets _edgeInsets;
}

+ (id)keyPathsForValuesAffectingActive;
+ (id)keyPathsForValuesAffectingNeedsDisplay;
- (void).cxx_destruct;
@property(nonatomic) double maxProgressValue; // @synthesize maxProgressValue=_maxProgressValue;
@property(nonatomic) double minProgressValue; // @synthesize minProgressValue=_minProgressValue;
@property(nonatomic) double currentProgressValue; // @synthesize currentProgressValue=_currentProgressValue;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(retain, nonatomic) NSGradient *progressLineGradient; // @synthesize progressLineGradient=_progressLineGradient;
@property(retain, nonatomic) NSColor *progressTextColor; // @synthesize progressTextColor=_progressTextColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) NSColor *progressBorderColor; // @synthesize progressBorderColor=_progressBorderColor;
@property(retain, nonatomic) NSGradient *progressGradient; // @synthesize progressGradient=_progressGradient;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
- (void)drawProgressInRect:(struct CGRect)arg1;
- (void)drawTitleInRect:(struct CGRect)arg1;
- (void)drawImageInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)textSize;
@property(readonly, nonatomic) NSDictionary *textAttributes;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic, getter=isProgressStyleLine) BOOL progressStyleLine;
@property(readonly, nonatomic, getter=isProgressStyleBordered) BOOL progressStyleBordered;
@property(readonly, nonatomic, getter=isProgressStyleDefault) BOOL progressStyleDefault;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
