//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor, NSFont, NSImage, NSShadow;

@interface GTSettingsViewStyles : GTAbstractViewStyles
{
    NSImage *_repositoryIconImage;
    NSImage *_remoteIconImage;
    NSImage *_submoduleIconImage;
    double _contentMaxWidth;
    double _actionButtonsAnimationDuration;
    double _labelWidth;
    double _labelRightPadding;
    NSFont *_labelTextFont;
    NSColor *_labelTextColor;
    NSFont *_valueTextFont;
    NSColor *_valueTextColor;
    NSFont *_ignorePatternTextFont;
    NSColor *_ignorePatternTextColor;
    NSColor *_groupRowBackgroundColor;
    NSColor *_groupRowBorderColor;
    double _groupRowBorderWidth;
    double _rowBorderWidth;
    NSColor *_headerBackgroundGradientTopColor;
    NSColor *_headerBackgroundGradientBottomColor;
    NSColor *_headerBorderColor;
    double _headerBorderWidth;
    NSColor *_headerTabButtonTextColor;
    NSColor *_headerTabButtonHighlightedTextColor;
    NSColor *_headerTabButtonBackgroundColor;
    NSColor *_headerTabButtonHighlightedBackgroundColor;
    double _headerTabButtonBorderRadius;
    NSColor *_rowBackgroundColor;
    NSColor *_rowBorderColor;
    double _rowBorderTopWidth;
    double _rowBorderBottomWidth;
    NSColor *_rowGroupBackgroundColor;
    NSColor *_rowGroupBorderColor;
    double _rowGroupBorderTopWidth;
    double _rowGroupBorderBottomWidth;
    NSColor *_cellDefaultTextColor;
    NSFont *_cellDefaultTextFont;
    NSColor *_groupCellDefaultTextColor;
    NSFont *_groupCellDefaultTextFont;
    NSColor *_repositoryColor;
    NSFont *_repositoryPathFont;
    NSColor *_repositoryPathColor;
    NSFont *_repositoryIgnoresFont;
    NSColor *_repositoryIgnoresColor;
    NSFont *_remoteFetchOptionsFont;
    NSColor *_remoteFetchOptionsColor;
    NSFont *_remoteFetchURLFont;
    NSColor *_remoteFetchURLColor;
    NSFont *_remoteFetchRefSpecsFont;
    NSColor *_remoteFetchRefSpecsColor;
    NSFont *_remotePushURLFont;
    NSColor *_remotePushURLColor;
    NSFont *_remotePushRefSpecsFont;
    NSColor *_remotePushRefSpecsColor;
    NSFont *_remoteBranchFont;
    NSColor *_remoteBranchColor;
    NSFont *_remoteTagFont;
    NSColor *_remoteTagColor;
    NSFont *_submoduleStatusFont;
    NSColor *_submoduleStatusColor;
    NSFont *_submodulePathFont;
    NSColor *_submodulePathColor;
    NSFont *_submoduleURLFont;
    NSColor *_submoduleURLColor;
    NSFont *_submoduleAdvancedInfoFont;
    NSColor *_submoduleAdvancedInfoColor;
    long long _buttonControlSize;
    NSFont *_buttonFont;
    double _buttonBorderRadius;
    double _buttonBorderWidth;
    NSColor *_buttonTextColor;
    NSColor *_buttonBorderColor;
    NSColor *_buttonBackgroundColor;
    NSShadow *_buttonShadow;
    NSColor *_buttonHighlightedTextColor;
    NSColor *_buttonHighlightedBorderColor;
    NSColor *_buttonHighlightedBackgroundColor;
    long long _mainButtonControlSize;
    NSFont *_mainButtonFont;
    double _mainButtonBorderRadius;
    NSColor *_mainButtonTextColor;
    NSColor *_mainButtonBorderColor;
    NSColor *_mainButtonBackgroundColor;
    NSShadow *_mainButtonShadow;
    long long _alternateButtonControlSize;
    NSFont *_alternateButtonFont;
    double _alternateButtonBorderRadius;
    NSColor *_alternateButtonTextColor;
    NSColor *_alternateButtonBorderColor;
    NSColor *_alternateButtonBackgroundColor;
    NSShadow *_alternateButtonShadow;
    struct NSEdgeInsets _headerTabButtonEdgeInsets;
    struct NSEdgeInsets _buttonEdgeInsets;
    struct NSEdgeInsets _mainButtonEdgeInsets;
    struct NSEdgeInsets _alternateButtonEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSShadow *alternateButtonShadow; // @synthesize alternateButtonShadow=_alternateButtonShadow;
@property(retain, nonatomic) NSColor *alternateButtonBackgroundColor; // @synthesize alternateButtonBackgroundColor=_alternateButtonBackgroundColor;
@property(retain, nonatomic) NSColor *alternateButtonBorderColor; // @synthesize alternateButtonBorderColor=_alternateButtonBorderColor;
@property(retain, nonatomic) NSColor *alternateButtonTextColor; // @synthesize alternateButtonTextColor=_alternateButtonTextColor;
@property(nonatomic) double alternateButtonBorderRadius; // @synthesize alternateButtonBorderRadius=_alternateButtonBorderRadius;
@property(nonatomic) struct NSEdgeInsets alternateButtonEdgeInsets; // @synthesize alternateButtonEdgeInsets=_alternateButtonEdgeInsets;
@property(retain, nonatomic) NSFont *alternateButtonFont; // @synthesize alternateButtonFont=_alternateButtonFont;
@property(nonatomic) long long alternateButtonControlSize; // @synthesize alternateButtonControlSize=_alternateButtonControlSize;
@property(retain, nonatomic) NSShadow *mainButtonShadow; // @synthesize mainButtonShadow=_mainButtonShadow;
@property(retain, nonatomic) NSColor *mainButtonBackgroundColor; // @synthesize mainButtonBackgroundColor=_mainButtonBackgroundColor;
@property(retain, nonatomic) NSColor *mainButtonBorderColor; // @synthesize mainButtonBorderColor=_mainButtonBorderColor;
@property(retain, nonatomic) NSColor *mainButtonTextColor; // @synthesize mainButtonTextColor=_mainButtonTextColor;
@property(nonatomic) double mainButtonBorderRadius; // @synthesize mainButtonBorderRadius=_mainButtonBorderRadius;
@property(nonatomic) struct NSEdgeInsets mainButtonEdgeInsets; // @synthesize mainButtonEdgeInsets=_mainButtonEdgeInsets;
@property(retain, nonatomic) NSFont *mainButtonFont; // @synthesize mainButtonFont=_mainButtonFont;
@property(nonatomic) long long mainButtonControlSize; // @synthesize mainButtonControlSize=_mainButtonControlSize;
@property(retain, nonatomic) NSColor *buttonHighlightedBackgroundColor; // @synthesize buttonHighlightedBackgroundColor=_buttonHighlightedBackgroundColor;
@property(retain, nonatomic) NSColor *buttonHighlightedBorderColor; // @synthesize buttonHighlightedBorderColor=_buttonHighlightedBorderColor;
@property(retain, nonatomic) NSColor *buttonHighlightedTextColor; // @synthesize buttonHighlightedTextColor=_buttonHighlightedTextColor;
@property(retain, nonatomic) NSShadow *buttonShadow; // @synthesize buttonShadow=_buttonShadow;
@property(retain, nonatomic) NSColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) NSColor *buttonBorderColor; // @synthesize buttonBorderColor=_buttonBorderColor;
@property(retain, nonatomic) NSColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(nonatomic) double buttonBorderWidth; // @synthesize buttonBorderWidth=_buttonBorderWidth;
@property(nonatomic) double buttonBorderRadius; // @synthesize buttonBorderRadius=_buttonBorderRadius;
@property(nonatomic) struct NSEdgeInsets buttonEdgeInsets; // @synthesize buttonEdgeInsets=_buttonEdgeInsets;
@property(retain, nonatomic) NSFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(nonatomic) long long buttonControlSize; // @synthesize buttonControlSize=_buttonControlSize;
@property(retain, nonatomic) NSColor *submoduleAdvancedInfoColor; // @synthesize submoduleAdvancedInfoColor=_submoduleAdvancedInfoColor;
@property(retain, nonatomic) NSFont *submoduleAdvancedInfoFont; // @synthesize submoduleAdvancedInfoFont=_submoduleAdvancedInfoFont;
@property(retain, nonatomic) NSColor *submoduleURLColor; // @synthesize submoduleURLColor=_submoduleURLColor;
@property(retain, nonatomic) NSFont *submoduleURLFont; // @synthesize submoduleURLFont=_submoduleURLFont;
@property(retain, nonatomic) NSColor *submodulePathColor; // @synthesize submodulePathColor=_submodulePathColor;
@property(retain, nonatomic) NSFont *submodulePathFont; // @synthesize submodulePathFont=_submodulePathFont;
@property(retain, nonatomic) NSColor *submoduleStatusColor; // @synthesize submoduleStatusColor=_submoduleStatusColor;
@property(retain, nonatomic) NSFont *submoduleStatusFont; // @synthesize submoduleStatusFont=_submoduleStatusFont;
@property(retain, nonatomic) NSColor *remoteTagColor; // @synthesize remoteTagColor=_remoteTagColor;
@property(retain, nonatomic) NSFont *remoteTagFont; // @synthesize remoteTagFont=_remoteTagFont;
@property(retain, nonatomic) NSColor *remoteBranchColor; // @synthesize remoteBranchColor=_remoteBranchColor;
@property(retain, nonatomic) NSFont *remoteBranchFont; // @synthesize remoteBranchFont=_remoteBranchFont;
@property(retain, nonatomic) NSColor *remotePushRefSpecsColor; // @synthesize remotePushRefSpecsColor=_remotePushRefSpecsColor;
@property(retain, nonatomic) NSFont *remotePushRefSpecsFont; // @synthesize remotePushRefSpecsFont=_remotePushRefSpecsFont;
@property(retain, nonatomic) NSColor *remotePushURLColor; // @synthesize remotePushURLColor=_remotePushURLColor;
@property(retain, nonatomic) NSFont *remotePushURLFont; // @synthesize remotePushURLFont=_remotePushURLFont;
@property(retain, nonatomic) NSColor *remoteFetchRefSpecsColor; // @synthesize remoteFetchRefSpecsColor=_remoteFetchRefSpecsColor;
@property(retain, nonatomic) NSFont *remoteFetchRefSpecsFont; // @synthesize remoteFetchRefSpecsFont=_remoteFetchRefSpecsFont;
@property(retain, nonatomic) NSColor *remoteFetchURLColor; // @synthesize remoteFetchURLColor=_remoteFetchURLColor;
@property(retain, nonatomic) NSFont *remoteFetchURLFont; // @synthesize remoteFetchURLFont=_remoteFetchURLFont;
@property(retain, nonatomic) NSColor *remoteFetchOptionsColor; // @synthesize remoteFetchOptionsColor=_remoteFetchOptionsColor;
@property(retain, nonatomic) NSFont *remoteFetchOptionsFont; // @synthesize remoteFetchOptionsFont=_remoteFetchOptionsFont;
@property(retain, nonatomic) NSColor *repositoryIgnoresColor; // @synthesize repositoryIgnoresColor=_repositoryIgnoresColor;
@property(retain, nonatomic) NSFont *repositoryIgnoresFont; // @synthesize repositoryIgnoresFont=_repositoryIgnoresFont;
@property(retain, nonatomic) NSColor *repositoryPathColor; // @synthesize repositoryPathColor=_repositoryPathColor;
@property(retain, nonatomic) NSFont *repositoryPathFont; // @synthesize repositoryPathFont=_repositoryPathFont;
@property(retain, nonatomic) NSColor *repositoryColor; // @synthesize repositoryColor=_repositoryColor;
@property(retain, nonatomic) NSFont *groupCellDefaultTextFont; // @synthesize groupCellDefaultTextFont=_groupCellDefaultTextFont;
@property(retain, nonatomic) NSColor *groupCellDefaultTextColor; // @synthesize groupCellDefaultTextColor=_groupCellDefaultTextColor;
@property(retain, nonatomic) NSFont *cellDefaultTextFont; // @synthesize cellDefaultTextFont=_cellDefaultTextFont;
@property(retain, nonatomic) NSColor *cellDefaultTextColor; // @synthesize cellDefaultTextColor=_cellDefaultTextColor;
@property(nonatomic) double rowGroupBorderBottomWidth; // @synthesize rowGroupBorderBottomWidth=_rowGroupBorderBottomWidth;
@property(nonatomic) double rowGroupBorderTopWidth; // @synthesize rowGroupBorderTopWidth=_rowGroupBorderTopWidth;
@property(retain, nonatomic) NSColor *rowGroupBorderColor; // @synthesize rowGroupBorderColor=_rowGroupBorderColor;
@property(retain, nonatomic) NSColor *rowGroupBackgroundColor; // @synthesize rowGroupBackgroundColor=_rowGroupBackgroundColor;
@property(nonatomic) double rowBorderBottomWidth; // @synthesize rowBorderBottomWidth=_rowBorderBottomWidth;
@property(nonatomic) double rowBorderTopWidth; // @synthesize rowBorderTopWidth=_rowBorderTopWidth;
@property(retain, nonatomic) NSColor *rowBorderColor; // @synthesize rowBorderColor=_rowBorderColor;
@property(retain, nonatomic) NSColor *rowBackgroundColor; // @synthesize rowBackgroundColor=_rowBackgroundColor;
@property(nonatomic) double headerTabButtonBorderRadius; // @synthesize headerTabButtonBorderRadius=_headerTabButtonBorderRadius;
@property(retain, nonatomic) NSColor *headerTabButtonHighlightedBackgroundColor; // @synthesize headerTabButtonHighlightedBackgroundColor=_headerTabButtonHighlightedBackgroundColor;
@property(retain, nonatomic) NSColor *headerTabButtonBackgroundColor; // @synthesize headerTabButtonBackgroundColor=_headerTabButtonBackgroundColor;
@property(retain, nonatomic) NSColor *headerTabButtonHighlightedTextColor; // @synthesize headerTabButtonHighlightedTextColor=_headerTabButtonHighlightedTextColor;
@property(retain, nonatomic) NSColor *headerTabButtonTextColor; // @synthesize headerTabButtonTextColor=_headerTabButtonTextColor;
@property(nonatomic) struct NSEdgeInsets headerTabButtonEdgeInsets; // @synthesize headerTabButtonEdgeInsets=_headerTabButtonEdgeInsets;
@property(nonatomic) double headerBorderWidth; // @synthesize headerBorderWidth=_headerBorderWidth;
@property(retain, nonatomic) NSColor *headerBorderColor; // @synthesize headerBorderColor=_headerBorderColor;
@property(retain, nonatomic) NSColor *headerBackgroundGradientBottomColor; // @synthesize headerBackgroundGradientBottomColor=_headerBackgroundGradientBottomColor;
@property(retain, nonatomic) NSColor *headerBackgroundGradientTopColor; // @synthesize headerBackgroundGradientTopColor=_headerBackgroundGradientTopColor;
@property(nonatomic) double rowBorderWidth; // @synthesize rowBorderWidth=_rowBorderWidth;
@property(nonatomic) double groupRowBorderWidth; // @synthesize groupRowBorderWidth=_groupRowBorderWidth;
@property(retain, nonatomic) NSColor *groupRowBorderColor; // @synthesize groupRowBorderColor=_groupRowBorderColor;
@property(retain, nonatomic) NSColor *groupRowBackgroundColor; // @synthesize groupRowBackgroundColor=_groupRowBackgroundColor;
@property(retain, nonatomic) NSColor *ignorePatternTextColor; // @synthesize ignorePatternTextColor=_ignorePatternTextColor;
@property(retain, nonatomic) NSFont *ignorePatternTextFont; // @synthesize ignorePatternTextFont=_ignorePatternTextFont;
@property(retain, nonatomic) NSColor *valueTextColor; // @synthesize valueTextColor=_valueTextColor;
@property(retain, nonatomic) NSFont *valueTextFont; // @synthesize valueTextFont=_valueTextFont;
@property(retain, nonatomic) NSColor *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(retain, nonatomic) NSFont *labelTextFont; // @synthesize labelTextFont=_labelTextFont;
@property(nonatomic) double labelRightPadding; // @synthesize labelRightPadding=_labelRightPadding;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) double actionButtonsAnimationDuration; // @synthesize actionButtonsAnimationDuration=_actionButtonsAnimationDuration;
@property(nonatomic) double contentMaxWidth; // @synthesize contentMaxWidth=_contentMaxWidth;
@property(retain, nonatomic) NSImage *submoduleIconImage; // @synthesize submoduleIconImage=_submoduleIconImage;
@property(retain, nonatomic) NSImage *remoteIconImage; // @synthesize remoteIconImage=_remoteIconImage;
@property(retain, nonatomic) NSImage *repositoryIconImage; // @synthesize repositoryIconImage=_repositoryIconImage;
- (void)loadViewStyles;

@end

