//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class GTGitRepository, NSString;

@interface GTRefLogBranchMenuGenerator : GTMenuGenerator
{
    GTGitRepository *_repository;
    NSString *_selectedRefName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *selectedRefName; // @synthesize selectedRefName=_selectedRefName;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)titleForBranch:(id)arg1;
- (void)makeMenuItems;

@end

