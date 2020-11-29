//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitHistoryManager, GTGitRepository, GTServicePullRequest, NSArray;
@protocol GTPullRequestsCommitsContributionsControllerDelegate;

@interface GTPullRequestsCommitsContributionsController : NSObject
{
    BOOL _loading;
    GTGitRepository *_repository;
    id <GTPullRequestsCommitsContributionsControllerDelegate> _delegate;
    GTServicePullRequest *_servicePullRequest;
    NSArray *_contributions;
    GTGitHistoryManager *_historyManager;
}

+ (id)controllerWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSArray *contributions; // @synthesize contributions=_contributions;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
@property(nonatomic) __weak id <GTPullRequestsCommitsContributionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)controllerDidFailLoadingContributionsWithError:(id)arg1;
- (void)controllerDidLoadContributions:(id)arg1;
- (void)waitUntilFinished;
- (void)cancel;
- (void)reload;
- (id)dataRevision;
- (id)initWithRepository:(id)arg1;

@end
