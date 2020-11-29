//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTActionBarView, GTSeparator, NSArray, NSColor, NSImage, NSImageView, NSLayoutGuide, NSString, NSTextField;

@interface GTWarningView : NSView
{
    BOOL _drawsTopBorder;
    BOOL _drawsBottomBorder;
    NSString *_message;
    NSImage *_icon;
    NSArray *_actions;
    NSImageView *_warningImageView;
    NSTextField *_warningMessageLabel;
    GTActionBarView *_actionBarView;
    GTSeparator *_topSeparator;
    GTSeparator *_bottomSeparator;
    NSColor *_backgroundColor;
    NSLayoutGuide *_layoutGuide;
    NSArray *_customConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) NSLayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) GTSeparator *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) GTSeparator *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) GTActionBarView *actionBarView; // @synthesize actionBarView=_actionBarView;
@property(retain, nonatomic) NSTextField *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
@property(retain, nonatomic) NSImageView *warningImageView; // @synthesize warningImageView=_warningImageView;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(nonatomic) BOOL drawsTopBorder; // @synthesize drawsTopBorder=_drawsTopBorder;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)show;
- (void)hide;
- (void)reset;
- (void)update;
- (void)updateWithMessage:(id)arg1 actions:(id)arg2 icon:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
