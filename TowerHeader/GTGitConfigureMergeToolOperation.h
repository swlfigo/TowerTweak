//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray, NSString;

@interface GTGitConfigureMergeToolOperation : GTGitRepositoryOperation
{
    // Error parsing type: , name: mergeToolName
    // Error parsing type: , name: mergeToolPath
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)arg1 repositoryDescriptor:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2;
- (void)execute;
@property(nonatomic, readonly) NSArray *groups;
- (BOOL)isWriteOperation;
- (id)initWithManagedObjectContext:(id)arg1 repositoryDescriptor:(id)arg2 mergeToolName:(id)arg3 mergeToolPath:(id)arg4;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 mergeToolName:(id)arg3 mergeToolPath:(id)arg4;
@property(nonatomic, readonly) NSString *mergeToolPath;
@property(nonatomic, readonly) NSString *mergeToolName;

// Remaining properties
@property(nonatomic, readonly) BOOL writeOperation;

@end

