//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSColor;

@interface GTDiffHeaderRowView : NSTableRowView
{
    BOOL _drawsTopSeparator;
    BOOL _drawsBottomSeparator;
    NSColor *_defaultBackgroundColor;
    NSColor *_highlightedBackgroundColor;
    NSColor *_defaultSeparatorColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *defaultSeparatorColor; // @synthesize defaultSeparatorColor=_defaultSeparatorColor;
@property(retain, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) NSColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(nonatomic) BOOL drawsBottomSeparator; // @synthesize drawsBottomSeparator=_drawsBottomSeparator;
@property(nonatomic) BOOL drawsTopSeparator; // @synthesize drawsTopSeparator=_drawsTopSeparator;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

