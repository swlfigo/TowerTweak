//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAction.h"

@class GTServicePullRequestManager;

@interface GTServicePullRequestsCleanUpAction : GTServiceAction
{
    GTServicePullRequestManager *_servicePullRequestManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServicePullRequestManager *servicePullRequestManager; // @synthesize servicePullRequestManager=_servicePullRequestManager;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end

