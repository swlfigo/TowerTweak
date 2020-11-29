//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTPullRequestsConversationItem.h"

@class GTServicePullRequest, NSDate, NSString, NSURL;

@interface GTPullRequestsConversationBodyItem : GTPullRequestsConversationItem
{
    NSString *_body;
    NSString *_username;
    NSDate *_createdAt;
    NSURL *_userAvatarURL;
}

+ (id)identifierWithServicePullRequest:(id)arg1;
+ (id)bodyItemWithPullRequest:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void)updateWithBodyItem:(id)arg1;
@property(readonly, nonatomic) GTServicePullRequest *servicePullRequest;
- (id)itemDate;
- (id)initWithPullRequest:(id)arg1;

@end

