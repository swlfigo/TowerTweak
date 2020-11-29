//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTRefBadgesView, GTRefLogEntryItem, GTRefLogViewHelpers, NSColor, NSString;

@interface GTRefLogItemCellView : NSTableCellView
{
    GTRefBadgesView *_refBadgesView;
    GTRefLogViewHelpers *_viewHelpers;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingCommitHash;
+ (id)keyPathsForValuesAffectingDate;
+ (id)keyPathsForValuesAffectingSubject;
+ (id)keyPathsForValuesAffectingRefLogItem;
- (void).cxx_destruct;
@property(retain, nonatomic) GTRefLogViewHelpers *viewHelpers; // @synthesize viewHelpers=_viewHelpers;
@property(nonatomic) __weak GTRefBadgesView *refBadgesView; // @synthesize refBadgesView=_refBadgesView;
- (void)updateRefBadgesView;
- (void)layout;
@property(readonly, nonatomic) NSColor *secondaryTextColor;
@property(readonly, nonatomic) NSColor *textColor;
@property(readonly, nonatomic) NSString *commitHash;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) NSString *subject;
@property(readonly, nonatomic) GTRefLogEntryItem *refLogItem;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;

@end

