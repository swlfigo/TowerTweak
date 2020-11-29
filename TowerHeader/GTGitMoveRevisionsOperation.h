//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray, NSString;

@interface GTGitMoveRevisionsOperation : GTGitRepositoryOperation
{
    BOOL _moveBelow;
    NSArray *_revisions;
    NSString *_revision;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisions:(id)arg3 revision:(id)arg4 moveBelow:(BOOL)arg5;
- (void).cxx_destruct;
@property(nonatomic) BOOL moveBelow; // @synthesize moveBelow=_moveBelow;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisions:(id)arg3 revision:(id)arg4 moveBelow:(BOOL)arg5;

@end

