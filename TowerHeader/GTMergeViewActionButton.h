//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSFont;

@interface GTMergeViewActionButton : NSButton
{
    double _borderRadius;
    double _borderWidth;
    NSColor *_highlightedTextColor;
    NSColor *_highlightedBackgroundColor;
    NSColor *_borderColor;
    NSColor *_highlightedBorderColor;
    NSFont *_textFont;
    struct NSEdgeInsets _edgeInsets;
}

+ (id)buttonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSColor *highlightedBorderColor; // @synthesize highlightedBorderColor=_highlightedBorderColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) NSColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

