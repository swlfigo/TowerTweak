//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuController.h"

@class GTGitRemote, GTServiceRepository, NSArray;

@interface GTServicePullRequestBaseBranchMenuController : GTMenuController
{
    GTServiceRepository *_serviceRepository;
    NSArray *_baseBranches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *baseBranches; // @synthesize baseBranches=_baseBranches;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
- (void)reload;
@property(readonly, nonatomic) GTGitRemote *remote;

@end
