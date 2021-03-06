//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class GTGitChangeset, GTGitDiffOptions, GTGitLogOptions, GTGitRevisionRange, NSArray;

@interface GTGitLoadRevisionRangeChangesetOperation : GTGitRepositoryOperation
{
    GTGitRevisionRange *_revisionRange;
    NSArray *_filePaths;
    GTGitLogOptions *_logOptions;
    GTGitDiffOptions *_diffOptions;
    GTGitChangeset *_loadedChangeset;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisionRange:(id)arg3 filePaths:(id)arg4 logOptions:(id)arg5 diffOptions:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitChangeset *loadedChangeset; // @synthesize loadedChangeset=_loadedChangeset;
@property(retain, nonatomic) GTGitDiffOptions *diffOptions; // @synthesize diffOptions=_diffOptions;
@property(retain, nonatomic) GTGitLogOptions *logOptions; // @synthesize logOptions=_logOptions;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) GTGitRevisionRange *revisionRange; // @synthesize revisionRange=_revisionRange;
- (id)combinedGitOptions;
- (void)execute;
- (id)groups;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisionRange:(id)arg3 filePaths:(id)arg4 logOptions:(id)arg5 diffOptions:(id)arg6;

@end

