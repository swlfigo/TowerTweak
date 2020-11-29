//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTActionBarView, GTAvatarImageView, GTPullRequestCommentTextView, GTPullRequestsConversationCommentItem, NSColor, NSString, NSView;
@protocol GTRepositoryPullRequestsActions;

@interface GTPullRequestsConversationCommentCellView : NSTableCellView
{
    BOOL _deletePossible;
    id <GTRepositoryPullRequestsActions> _target;
    GTAvatarImageView *_avatarImageView;
    NSView *_bodyTextViewContainer;
    GTActionBarView *_actionBarView;
    GTPullRequestsConversationCommentItem *_item;
    GTPullRequestCommentTextView *_bodyTextView;
}

+ (id)emptyCommentPlaceholderText;
+ (double)heightForItem:(id)arg1 width:(double)arg2;
+ (id)keyPathsForValuesAffectingReplyPossible;
+ (id)keyPathsForValuesAffectingEditable;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingBody;
+ (id)keyPathsForValuesAffectingItem;
+ (struct NSEdgeInsets)defaultTextViewMargins;
- (void).cxx_destruct;
@property(retain, nonatomic) GTPullRequestCommentTextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(readonly, nonatomic, getter=isDeletePossible) BOOL deletePossible; // @synthesize deletePossible=_deletePossible;
@property(retain, nonatomic) GTPullRequestsConversationCommentItem *item; // @synthesize item=_item;
@property(nonatomic) __weak GTActionBarView *actionBarView; // @synthesize actionBarView=_actionBarView;
@property(nonatomic) __weak NSView *bodyTextViewContainer; // @synthesize bodyTextViewContainer=_bodyTextViewContainer;
@property(nonatomic) __weak GTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <GTRepositoryPullRequestsActions> target; // @synthesize target=_target;
- (void)updateActionBarView;
- (void)updateWithTarget:(id)arg1;
@property(readonly, nonatomic) NSColor *secondaryTextColor;
@property(readonly, nonatomic) NSColor *textColor;
@property(readonly, nonatomic, getter=isReplyPossible) BOOL replyPossible;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *body;
- (void)setObjectValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)dealloc;

@end

