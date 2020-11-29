//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class FNGitDiff, GTGitDiffOptions, GTGitWorkingTreeEntry;

@interface GTGitLoadWorkingTreeToIndexDiffOperation : GTGitRepositoryOperation
{
    GTGitWorkingTreeEntry *_workingTreeEntry;
    GTGitDiffOptions *_options;
    FNGitDiff *_loadedDiff;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntry:(id)arg3 options:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitDiff *loadedDiff; // @synthesize loadedDiff=_loadedDiff;
@property(retain, nonatomic) GTGitDiffOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) GTGitWorkingTreeEntry *workingTreeEntry; // @synthesize workingTreeEntry=_workingTreeEntry;
- (id)filePathsForWorkingTreeEntry:(id)arg1;
- (void)execute;
- (id)resultSummary;
- (id)shortParameters;
- (id)groups;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntry:(id)arg3 options:(id)arg4;

@end

