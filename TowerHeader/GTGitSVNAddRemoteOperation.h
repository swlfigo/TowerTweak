//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSDictionary, NSString;

@interface GTGitSVNAddRemoteOperation : GTGitRepositoryOperation
{
    NSString *_remoteName;
    NSString *_remoteURL;
    NSDictionary *_options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteName:(id)arg3 remoteURL:(id)arg4 options:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(copy, nonatomic) NSString *remoteName; // @synthesize remoteName=_remoteName;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteName:(id)arg3 remoteURL:(id)arg4 options:(id)arg5;

@end

