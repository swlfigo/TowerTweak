//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray;

@interface GTGitUpdateIndexFlagsOperation : GTGitRepositoryOperation
{
    NSArray *_workingTreeEntries;
    unsigned long long _indexFlags;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntries:(id)arg3 indexFlags:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long indexFlags; // @synthesize indexFlags=_indexFlags;
@property(copy, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntries:(id)arg3 indexFlags:(unsigned long long)arg4;

@end

