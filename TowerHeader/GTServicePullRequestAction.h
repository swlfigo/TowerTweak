//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceRepositoryAction.h"

@class GTServicePullRequest, GTServicePullRequestCommentManager;

@interface GTServicePullRequestAction : GTServiceRepositoryAction
{
    GTServicePullRequest *_servicePullRequest;
    GTServicePullRequestCommentManager *_servicePullRequestCommentManager;
}

+ (id)actionWithServicePullRequest:(id)arg1 account:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTServicePullRequestCommentManager *servicePullRequestCommentManager; // @synthesize servicePullRequestCommentManager=_servicePullRequestCommentManager;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
- (id)initWithServicePullRequest:(id)arg1 account:(id)arg2;

@end

