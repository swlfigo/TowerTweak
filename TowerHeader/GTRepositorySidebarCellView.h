//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTRepositorySidebarItem, GTStackView, NSArray, NSColor, NSImageView, NSLayoutConstraint, NSProgressIndicator;

@interface GTRepositorySidebarCellView : NSTableCellView
{
    BOOL _enabled;
    GTStackView *_accessoryView;
    NSImageView *_iconImageView;
    NSLayoutConstraint *_iconImageViewBaselineAlignmentConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSArray *_accessoryDefaultSubviews;
    NSProgressIndicator *_progressIndicator;
    NSArray *_variableConstraints;
    NSArray *_defaultTableCellViewConstraints;
}

+ (id)keyPathsForValuesAffectingTitleFontColor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *defaultTableCellViewConstraints; // @synthesize defaultTableCellViewConstraints=_defaultTableCellViewConstraints;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSArray *accessoryDefaultSubviews; // @synthesize accessoryDefaultSubviews=_accessoryDefaultSubviews;
@property(nonatomic) __weak NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *iconImageViewBaselineAlignmentConstraint; // @synthesize iconImageViewBaselineAlignmentConstraint=_iconImageViewBaselineAlignmentConstraint;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak GTStackView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (BOOL)progressIndicatorEnabled;
- (void)removeProgressIndicator;
- (void)addProgressIndicator;
- (void)updateAccessoryView;
- (void)removeAllAccessorySubviews;
- (void)setAccessorySubviews:(id)arg1;
- (void)updateConstraints;
- (void)setSubmoduleObject:(id)arg1;
- (void)setRemoteBranchObject:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setTagObject:(id)arg1;
- (void)setBranchObject:(id)arg1;
- (void)setWorkingTreeObject:(id)arg1;
- (void)setImageForSidebarType:(long long)arg1;
- (void)reload;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;
- (void)setRowSizeStyle:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) GTRepositorySidebarItem *sidebarItem;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) NSColor *titleFontColor;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
