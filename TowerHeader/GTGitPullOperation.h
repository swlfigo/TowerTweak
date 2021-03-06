//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRemoteOperation.h"

@class NSString;

@interface GTGitPullOperation : GTGitRemoteOperation
{
    NSString *_refSpec;
    unsigned long long _options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfo:(id)arg3 refSpec:(id)arg4 options:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *refSpec; // @synthesize refSpec=_refSpec;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (long long)remoteOperationType;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfo:(id)arg3 refSpec:(id)arg4 options:(unsigned long long)arg5;

@end

