//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor;

@interface GTSearchViewStyles : GTAbstractViewStyles
{
    NSColor *_filterGradientStartColor;
    NSColor *_filterGradientEndColor;
    NSColor *_filterBorderColor;
    NSColor *_filterInactiveBorderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *filterInactiveBorderColor; // @synthesize filterInactiveBorderColor=_filterInactiveBorderColor;
@property(retain, nonatomic) NSColor *filterBorderColor; // @synthesize filterBorderColor=_filterBorderColor;
@property(retain, nonatomic) NSColor *filterGradientEndColor; // @synthesize filterGradientEndColor=_filterGradientEndColor;
@property(retain, nonatomic) NSColor *filterGradientStartColor; // @synthesize filterGradientStartColor=_filterGradientStartColor;
- (void)loadViewStyles;

@end
