//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTPullRequestsConversationCommentItem, NSString, NSTextField;

@interface GTPullRequestsConversationCommentThreadCellView : NSTableCellView
{
    GTPullRequestsConversationCommentItem *_item;
    NSTextField *_labelField;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingThreadTitle;
+ (id)keyPathsForValuesAffectingItem;
- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *labelField; // @synthesize labelField=_labelField;
@property(retain, nonatomic) GTPullRequestsConversationCommentItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) NSString *threadTitle;

@end
