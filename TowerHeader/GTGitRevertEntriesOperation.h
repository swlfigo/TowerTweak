//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray, NSString;

@interface GTGitRevertEntriesOperation : GTGitRepositoryOperation
{
    NSString *_revision;
    NSArray *_workingTreeEntries;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 workingTreeEntries:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
@property(copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 workingTreeEntries:(id)arg4;

@end
