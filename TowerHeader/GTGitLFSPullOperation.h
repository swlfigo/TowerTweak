//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRemoteOperation.h"

@protocol FNGitCommandCancelling;

@interface GTGitLFSPullOperation : GTGitRemoteOperation
{
    id <FNGitCommandCancelling> _command;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FNGitCommandCancelling> command; // @synthesize command=_command;
- (void)cancel;
- (void)execute;
- (long long)remoteOperationType;

@end

