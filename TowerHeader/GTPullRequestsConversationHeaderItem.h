//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTPullRequestsConversationItem.h"

@class GTServicePullRequest, NSArray, NSString, NSURL;

@interface GTPullRequestsConversationHeaderItem : GTPullRequestsConversationItem
{
    BOOL _open;
    BOOL _closed;
    BOOL _merged;
    long long _number;
    NSString *_pullRequestTitle;
    NSString *_username;
    NSString *_branchName;
    NSString *_baseBranchName;
    NSURL *_userAvatarURL;
    NSArray *_assignees;
    GTServicePullRequest *_servicePullRequest;
    long long _numberOfCommits;
    long long _numberOfChangedFiles;
    long long _numberOfComments;
}

+ (id)identifierWithServicePullRequest:(id)arg1;
+ (id)headerItemWithPullRequest:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isMerged) BOOL merged; // @synthesize merged=_merged;
@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(nonatomic) long long numberOfComments; // @synthesize numberOfComments=_numberOfComments;
@property(nonatomic) long long numberOfChangedFiles; // @synthesize numberOfChangedFiles=_numberOfChangedFiles;
@property(nonatomic) long long numberOfCommits; // @synthesize numberOfCommits=_numberOfCommits;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
@property(copy, nonatomic) NSArray *assignees; // @synthesize assignees=_assignees;
@property(copy, nonatomic) NSURL *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
@property(copy, nonatomic) NSString *baseBranchName; // @synthesize baseBranchName=_baseBranchName;
@property(copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *pullRequestTitle; // @synthesize pullRequestTitle=_pullRequestTitle;
@property(nonatomic) long long number; // @synthesize number=_number;
- (void)updateWithHeaderItem:(id)arg1;
- (id)itemDate;
- (id)initWithPullRequest:(id)arg1;

@end

