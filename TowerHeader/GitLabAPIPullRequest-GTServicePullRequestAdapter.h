//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GitLabAPI/GitLabAPIPullRequest.h>

#import "GTServicePullRequestAdapter-Protocol.h"

@class NSArray, NSDate, NSString, NSURL;
@protocol GTServiceAccountAdapter, GTServicePullRequestBranchAdapter;

@interface GitLabAPIPullRequest (GTServicePullRequestAdapter) <GTServicePullRequestAdapter>
@property(readonly, nonatomic) long long servicePullRequestState;
@property(readonly, nonatomic) NSURL *servicePullRequestWebURL;
@property(readonly, nonatomic) NSString *servicePullRequestBody;
@property(readonly, nonatomic) NSString *servicePullRequestTitle;
@property(readonly, nonatomic) NSString *servicePullRequestIdentifier;
@property(readonly, nonatomic) NSDate *servicePullRequestMergedAt;
@property(readonly, nonatomic) NSDate *servicePullRequestClosedAt;
@property(readonly, nonatomic) NSDate *servicePullRequestCreatedAt;
@property(readonly, nonatomic, getter=isServiceForkedRepository) BOOL serviceForkedRepository;
@property(readonly, nonatomic) BOOL servicePullRequestIsMergeable;
@property(readonly, nonatomic) long long servicePullRequestVersion;
@property(readonly, nonatomic) long long servicePullRequestDeletions;
@property(readonly, nonatomic) long long servicePullRequestAdditions;
@property(readonly, nonatomic) long long servicePullRequestNumberOfComments;
@property(readonly, nonatomic) long long servicePullRequestNumberOfChangedFiles;
@property(readonly, nonatomic) long long servicePullRequestNumberOfCommits;
@property(readonly, nonatomic) long long servicePullRequestNumber;
@property(readonly, nonatomic) id <GTServicePullRequestBranchAdapter> servicePullRequestBaseBranch;
@property(readonly, nonatomic) id <GTServicePullRequestBranchAdapter> servicePullRequestBranch;
@property(readonly, nonatomic) NSArray *servicePullRequestAssignees;
@property(readonly, nonatomic) id <GTServiceAccountAdapter> servicePullRequestAssignee;
@property(readonly, nonatomic) id <GTServiceAccountAdapter> servicePullRequestUser;
@property(readonly, nonatomic) long long servicePullRequestID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

