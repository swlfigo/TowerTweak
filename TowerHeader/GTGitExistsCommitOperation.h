//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSString;

@interface GTGitExistsCommitOperation : GTGitRepositoryOperation
{
    BOOL _commitExists;
    NSString *_revision;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL commitExists; // @synthesize commitExists=_commitExists;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)execute;
- (id)groups;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;

@end

