//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray;

@interface GTGitRestoreRemotesOperation : GTGitRepositoryOperation
{
    NSArray *_remoteInfos;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfos:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *remoteInfos; // @synthesize remoteInfos=_remoteInfos;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfos:(id)arg3;

@end

