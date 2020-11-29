//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray, NSURL;

@interface GTGitRestoreMergeConflictsOperation : GTGitRepositoryOperation
{
    NSArray *_workingTreeEntries;
    long long _mode;
    NSURL *_directoryURL;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntries:(id)arg3 mode:(long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 workingTreeEntries:(id)arg3 mode:(long long)arg4;

@end
