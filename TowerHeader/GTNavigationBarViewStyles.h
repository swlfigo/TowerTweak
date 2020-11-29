//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor, NSDictionary, NSFont, NSGradient, NSImage, NSShadow, NSString;

@interface GTNavigationBarViewStyles : GTAbstractViewStyles
{
    NSColor *_cloningQueueItemBorderHighlightColor;
    NSColor *_cloningQueueItemBorderColor;
    NSColor *_licenseBadgeBetaTitleColor;
    NSColor *_licenseBadgeBetaTitleShadowColor;
    NSColor *_licenseBadgeBetaBackgroundColor;
    NSColor *_licenseBadgeTrialWarnTitleColor;
    NSColor *_licenseBadgeTrialWarnTitleShadowColor;
    NSColor *_licenseBadgeTrialWarnBackgroundColor;
    NSString *_licenseBadgeTrialWarnImageName;
    NSColor *_licenseBadgeTrialTitleColor;
    NSColor *_licenseBadgeTrialTitleShadowColor;
    NSColor *_licenseBadgeTrialBackgroundColor;
    NSString *_licenseBadgeTrialImageName;
    NSColor *_licenseBadgeLicenseWarnTitleColor;
    NSColor *_licenseBadgeLicenseWarnTitleShadowColor;
    NSColor *_licenseBadgeLicenseWarnBackgroundColor;
    NSString *_licenseBadgeLicenseWarnImageName;
    NSColor *_activeTopBorderColor;
    NSColor *_inactiveTopBorderColor;
    NSColor *_activeBottomBorderColor;
    NSColor *_inactiveBottomBorderColor;
    NSShadow *_shadow;
    NSColor *_shadowColor;
    double _shadowBlurRadius;
    double _shadowOffset;
    double _height;
    NSDictionary *_itemTitleAttributes;
    double _itemPadding;
    long long _cloneButtonProgressStyle;
    NSString *_cloneButtonTitle;
    NSImage *_cloneButtonImage;
    NSFont *_cloneButtonTextFont;
    NSColor *_cloneButtonTextColor;
    NSColor *_cloneButtonBackgroundColor;
    NSColor *_cloneButtonBorderColor;
    double _cloneButtonBorderRadius;
    double _cloneButtonBorderWidth;
    NSColor *_cloneButtonProgressTextColor;
    NSColor *_cloneButtonProgressBorderColor;
    NSColor *_cloneButtonProgressBackgroundColor;
    NSGradient *_cloneButtonProgressGradient;
    NSGradient *_cloneButtonProgressLineGradient;
    double _cloneButtonProgressLineWidth;
    struct NSEdgeInsets _cloneButtonEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double cloneButtonProgressLineWidth; // @synthesize cloneButtonProgressLineWidth=_cloneButtonProgressLineWidth;
@property(retain, nonatomic) NSGradient *cloneButtonProgressLineGradient; // @synthesize cloneButtonProgressLineGradient=_cloneButtonProgressLineGradient;
@property(retain, nonatomic) NSGradient *cloneButtonProgressGradient; // @synthesize cloneButtonProgressGradient=_cloneButtonProgressGradient;
@property(retain, nonatomic) NSColor *cloneButtonProgressBackgroundColor; // @synthesize cloneButtonProgressBackgroundColor=_cloneButtonProgressBackgroundColor;
@property(retain, nonatomic) NSColor *cloneButtonProgressBorderColor; // @synthesize cloneButtonProgressBorderColor=_cloneButtonProgressBorderColor;
@property(retain, nonatomic) NSColor *cloneButtonProgressTextColor; // @synthesize cloneButtonProgressTextColor=_cloneButtonProgressTextColor;
@property(nonatomic) double cloneButtonBorderWidth; // @synthesize cloneButtonBorderWidth=_cloneButtonBorderWidth;
@property(nonatomic) double cloneButtonBorderRadius; // @synthesize cloneButtonBorderRadius=_cloneButtonBorderRadius;
@property(retain, nonatomic) NSColor *cloneButtonBorderColor; // @synthesize cloneButtonBorderColor=_cloneButtonBorderColor;
@property(retain, nonatomic) NSColor *cloneButtonBackgroundColor; // @synthesize cloneButtonBackgroundColor=_cloneButtonBackgroundColor;
@property(retain, nonatomic) NSColor *cloneButtonTextColor; // @synthesize cloneButtonTextColor=_cloneButtonTextColor;
@property(retain, nonatomic) NSFont *cloneButtonTextFont; // @synthesize cloneButtonTextFont=_cloneButtonTextFont;
@property(nonatomic) struct NSEdgeInsets cloneButtonEdgeInsets; // @synthesize cloneButtonEdgeInsets=_cloneButtonEdgeInsets;
@property(retain, nonatomic) NSImage *cloneButtonImage; // @synthesize cloneButtonImage=_cloneButtonImage;
@property(retain, nonatomic) NSString *cloneButtonTitle; // @synthesize cloneButtonTitle=_cloneButtonTitle;
@property(nonatomic) long long cloneButtonProgressStyle; // @synthesize cloneButtonProgressStyle=_cloneButtonProgressStyle;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(retain, nonatomic) NSDictionary *itemTitleAttributes; // @synthesize itemTitleAttributes=_itemTitleAttributes;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(retain, nonatomic) NSColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) NSColor *inactiveBottomBorderColor; // @synthesize inactiveBottomBorderColor=_inactiveBottomBorderColor;
@property(retain, nonatomic) NSColor *activeBottomBorderColor; // @synthesize activeBottomBorderColor=_activeBottomBorderColor;
@property(retain, nonatomic) NSColor *inactiveTopBorderColor; // @synthesize inactiveTopBorderColor=_inactiveTopBorderColor;
@property(retain, nonatomic) NSColor *activeTopBorderColor; // @synthesize activeTopBorderColor=_activeTopBorderColor;
@property(retain, nonatomic) NSString *licenseBadgeLicenseWarnImageName; // @synthesize licenseBadgeLicenseWarnImageName=_licenseBadgeLicenseWarnImageName;
@property(retain, nonatomic) NSColor *licenseBadgeLicenseWarnBackgroundColor; // @synthesize licenseBadgeLicenseWarnBackgroundColor=_licenseBadgeLicenseWarnBackgroundColor;
@property(retain, nonatomic) NSColor *licenseBadgeLicenseWarnTitleShadowColor; // @synthesize licenseBadgeLicenseWarnTitleShadowColor=_licenseBadgeLicenseWarnTitleShadowColor;
@property(retain, nonatomic) NSColor *licenseBadgeLicenseWarnTitleColor; // @synthesize licenseBadgeLicenseWarnTitleColor=_licenseBadgeLicenseWarnTitleColor;
@property(retain, nonatomic) NSString *licenseBadgeTrialImageName; // @synthesize licenseBadgeTrialImageName=_licenseBadgeTrialImageName;
@property(retain, nonatomic) NSColor *licenseBadgeTrialBackgroundColor; // @synthesize licenseBadgeTrialBackgroundColor=_licenseBadgeTrialBackgroundColor;
@property(retain, nonatomic) NSColor *licenseBadgeTrialTitleShadowColor; // @synthesize licenseBadgeTrialTitleShadowColor=_licenseBadgeTrialTitleShadowColor;
@property(retain, nonatomic) NSColor *licenseBadgeTrialTitleColor; // @synthesize licenseBadgeTrialTitleColor=_licenseBadgeTrialTitleColor;
@property(retain, nonatomic) NSString *licenseBadgeTrialWarnImageName; // @synthesize licenseBadgeTrialWarnImageName=_licenseBadgeTrialWarnImageName;
@property(retain, nonatomic) NSColor *licenseBadgeTrialWarnBackgroundColor; // @synthesize licenseBadgeTrialWarnBackgroundColor=_licenseBadgeTrialWarnBackgroundColor;
@property(retain, nonatomic) NSColor *licenseBadgeTrialWarnTitleShadowColor; // @synthesize licenseBadgeTrialWarnTitleShadowColor=_licenseBadgeTrialWarnTitleShadowColor;
@property(retain, nonatomic) NSColor *licenseBadgeTrialWarnTitleColor; // @synthesize licenseBadgeTrialWarnTitleColor=_licenseBadgeTrialWarnTitleColor;
@property(retain, nonatomic) NSColor *licenseBadgeBetaBackgroundColor; // @synthesize licenseBadgeBetaBackgroundColor=_licenseBadgeBetaBackgroundColor;
@property(retain, nonatomic) NSColor *licenseBadgeBetaTitleShadowColor; // @synthesize licenseBadgeBetaTitleShadowColor=_licenseBadgeBetaTitleShadowColor;
@property(retain, nonatomic) NSColor *licenseBadgeBetaTitleColor; // @synthesize licenseBadgeBetaTitleColor=_licenseBadgeBetaTitleColor;
@property(retain, nonatomic) NSColor *cloningQueueItemBorderColor; // @synthesize cloningQueueItemBorderColor=_cloningQueueItemBorderColor;
@property(retain, nonatomic) NSColor *cloningQueueItemBorderHighlightColor; // @synthesize cloningQueueItemBorderHighlightColor=_cloningQueueItemBorderHighlightColor;
- (void)loadViewStyles;

@end

