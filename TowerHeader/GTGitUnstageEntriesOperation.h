//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray;

@interface GTGitUnstageEntriesOperation : GTGitRepositoryOperation
{
    NSArray *_workingTreeEntryPaths;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntryPaths:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *workingTreeEntryPaths; // @synthesize workingTreeEntryPaths=_workingTreeEntryPaths;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)parameters;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntryPaths:(id)arg3;

@end
