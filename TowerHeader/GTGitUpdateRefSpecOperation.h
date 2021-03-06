//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class GTGitRemoteInfo, NSManagedObjectID, NSString;

@interface GTGitUpdateRefSpecOperation : GTGitRepositoryOperation
{
    NSManagedObjectID *_remoteID;
    NSString *_refSpecString;
    NSString *_replacementRefSpecString;
    long long _refSpecType;
    GTGitRemoteInfo *_remoteInfo;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfo:(id)arg3 refSpecInfo:(id)arg4 newRefSpecInfo:(id)arg5 refSpecType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRemoteInfo *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
@property(nonatomic) long long refSpecType; // @synthesize refSpecType=_refSpecType;
@property(retain, nonatomic) NSString *replacementRefSpecString; // @synthesize replacementRefSpecString=_replacementRefSpecString;
@property(retain, nonatomic) NSString *refSpecString; // @synthesize refSpecString=_refSpecString;
@property(readonly, nonatomic) NSManagedObjectID *remoteID; // @synthesize remoteID=_remoteID;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteInfo:(id)arg3 refSpecInfo:(id)arg4 newRefSpecInfo:(id)arg5 refSpecType:(long long)arg6;

@end

