//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuController.h"

@class GTGitRepository, NSArray;

@interface GTServicePullRequestRepositoryMenuController : GTMenuController
{
    GTGitRepository *_repository;
    NSArray *_serviceRepositories;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *serviceRepositories; // @synthesize serviceRepositories=_serviceRepositories;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)reload;

@end

