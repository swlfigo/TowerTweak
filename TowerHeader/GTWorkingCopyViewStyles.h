//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor, NSDictionary, NSImage;

@interface GTWorkingCopyViewStyles : GTAbstractViewStyles
{
    NSColor *_commitMergeStatusBackgroundColor;
    NSColor *_conflictResolutionStatusMineRefColor;
    NSColor *_conflictResolutionStatusTheirsRefColor;
    NSColor *_tableHeaderBackgroundStartColor;
    NSColor *_tableHeaderBackgroundEndColor;
    NSColor *_tableHeaderBorderColor;
    NSColor *_tableHeaderInactiveBorderColor;
    NSColor *_tableHeaderHighlightedBackgroundStartColor;
    NSColor *_tableHeaderHighlightedBackgroundEndColor;
    NSColor *_tableHeaderSortIndicatorColor;
    NSDictionary *_tableHeaderTextAttributes;
    NSDictionary *_tableHeaderHighlightedTextAttributes;
    NSColor *_unmergedItemRowBackgroundColor;
    NSColor *_unmergedItemRowSeparatorColor;
    double _progressAnimationDuration;
    NSImage *_branchIcon;
    NSImage *_mergeIcon;
    NSImage *_rebaseIcon;
    NSImage *_cherryPickIcon;
    NSImage *_revertIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *revertIcon; // @synthesize revertIcon=_revertIcon;
@property(retain, nonatomic) NSImage *cherryPickIcon; // @synthesize cherryPickIcon=_cherryPickIcon;
@property(retain, nonatomic) NSImage *rebaseIcon; // @synthesize rebaseIcon=_rebaseIcon;
@property(retain, nonatomic) NSImage *mergeIcon; // @synthesize mergeIcon=_mergeIcon;
@property(retain, nonatomic) NSImage *branchIcon; // @synthesize branchIcon=_branchIcon;
@property(nonatomic) double progressAnimationDuration; // @synthesize progressAnimationDuration=_progressAnimationDuration;
@property(retain, nonatomic) NSColor *unmergedItemRowSeparatorColor; // @synthesize unmergedItemRowSeparatorColor=_unmergedItemRowSeparatorColor;
@property(retain, nonatomic) NSColor *unmergedItemRowBackgroundColor; // @synthesize unmergedItemRowBackgroundColor=_unmergedItemRowBackgroundColor;
@property(retain, nonatomic) NSDictionary *tableHeaderHighlightedTextAttributes; // @synthesize tableHeaderHighlightedTextAttributes=_tableHeaderHighlightedTextAttributes;
@property(retain, nonatomic) NSDictionary *tableHeaderTextAttributes; // @synthesize tableHeaderTextAttributes=_tableHeaderTextAttributes;
@property(retain, nonatomic) NSColor *tableHeaderSortIndicatorColor; // @synthesize tableHeaderSortIndicatorColor=_tableHeaderSortIndicatorColor;
@property(retain, nonatomic) NSColor *tableHeaderHighlightedBackgroundEndColor; // @synthesize tableHeaderHighlightedBackgroundEndColor=_tableHeaderHighlightedBackgroundEndColor;
@property(retain, nonatomic) NSColor *tableHeaderHighlightedBackgroundStartColor; // @synthesize tableHeaderHighlightedBackgroundStartColor=_tableHeaderHighlightedBackgroundStartColor;
@property(retain, nonatomic) NSColor *tableHeaderInactiveBorderColor; // @synthesize tableHeaderInactiveBorderColor=_tableHeaderInactiveBorderColor;
@property(retain, nonatomic) NSColor *tableHeaderBorderColor; // @synthesize tableHeaderBorderColor=_tableHeaderBorderColor;
@property(retain, nonatomic) NSColor *tableHeaderBackgroundEndColor; // @synthesize tableHeaderBackgroundEndColor=_tableHeaderBackgroundEndColor;
@property(retain, nonatomic) NSColor *tableHeaderBackgroundStartColor; // @synthesize tableHeaderBackgroundStartColor=_tableHeaderBackgroundStartColor;
@property(retain, nonatomic) NSColor *conflictResolutionStatusTheirsRefColor; // @synthesize conflictResolutionStatusTheirsRefColor=_conflictResolutionStatusTheirsRefColor;
@property(retain, nonatomic) NSColor *conflictResolutionStatusMineRefColor; // @synthesize conflictResolutionStatusMineRefColor=_conflictResolutionStatusMineRefColor;
@property(retain, nonatomic) NSColor *commitMergeStatusBackgroundColor; // @synthesize commitMergeStatusBackgroundColor=_commitMergeStatusBackgroundColor;
- (void)loadViewStyles;

@end

