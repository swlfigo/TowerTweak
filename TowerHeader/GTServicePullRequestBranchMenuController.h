//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuController.h"

@class GTServiceRepository, NSArray;

@interface GTServicePullRequestBranchMenuController : GTMenuController
{
    GTServiceRepository *_serviceRepository;
    NSArray *_headBranches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *headBranches; // @synthesize headBranches=_headBranches;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
- (BOOL)hasForkedHeadBranches;
- (void)reload;

@end

