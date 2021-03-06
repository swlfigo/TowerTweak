//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTAvatarImageView, GTTimelineGraphView, NSColor, NSLayoutConstraint, NSString;

@interface GTRevisionSelectorRevisionCellView : NSTableCellView
{
    GTTimelineGraphView *_timelineView;
    GTAvatarImageView *_avatarImageView;
    NSLayoutConstraint *_graphWidth;
    NSString *_dateString;
    NSString *_subject;
    NSString *_author;
    NSString *_commitHash;
}

+ (id)keyPathsForValuesAffectingCommitHash;
+ (id)keyPathsForValuesAffectingDrawsLowerLine;
+ (id)keyPathsForValuesAffectingDrawsUpperLine;
+ (id)keyPathsForValuesAffectingAuthor;
+ (id)keyPathsForValuesAffectingSubject;
+ (id)keyPathsForValuesAffectingDateString;
+ (id)keyPathsForValuesAffectingItem;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commitHash; // @synthesize commitHash=_commitHash;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(nonatomic) __weak NSLayoutConstraint *graphWidth; // @synthesize graphWidth=_graphWidth;
@property(nonatomic) __weak GTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak GTTimelineGraphView *timelineView; // @synthesize timelineView=_timelineView;
- (void)updateAvatarImageView;
- (void)updateGraphView;
- (void)update;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)drawsLowerLine;
- (BOOL)drawsUpperLine;
@property(readonly, nonatomic) NSColor *secondaryTextColor;
@property(readonly, nonatomic) NSColor *textColor;
- (id)lineColor;
- (id)dateFontColor;
- (id)dateFont;
- (id)authorFontColor;
- (id)authorFont;
- (id)subjectFontColor;
- (id)subjectFont;
- (id)item;
- (void)setObjectValue:(id)arg1;

@end

