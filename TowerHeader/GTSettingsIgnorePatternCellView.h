//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSettingsCellView.h"

@class GTSettingsIgnorePatternItem, NSColor, NSFont;

@interface GTSettingsIgnorePatternCellView : GTSettingsCellView
{
    NSFont *_valueFont;
    NSColor *_valueColor;
}

+ (id)keyPathsForValuesAffectingItem;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *valueColor; // @synthesize valueColor=_valueColor;
@property(retain, nonatomic) NSFont *valueFont; // @synthesize valueFont=_valueFont;
@property(readonly, nonatomic) GTSettingsIgnorePatternItem *item;
- (void)commonInit;

@end

