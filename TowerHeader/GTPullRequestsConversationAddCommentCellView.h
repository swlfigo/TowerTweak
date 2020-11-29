//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTPullRequestsConversationAddCommentItem, GTServicePullRequest, NSButton;

@interface GTPullRequestsConversationAddCommentCellView : NSTableCellView
{
    NSButton *_commentButton;
    GTServicePullRequest *_pullRequest;
}

+ (id)keyPathsForValuesAffectingItem;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) GTServicePullRequest *pullRequest; // @synthesize pullRequest=_pullRequest;
@property(nonatomic) __weak NSButton *commentButton; // @synthesize commentButton=_commentButton;
- (void)addComment:(id)arg1;
@property(readonly, nonatomic) GTPullRequestsConversationAddCommentItem *item;

@end
