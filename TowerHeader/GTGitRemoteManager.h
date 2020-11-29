//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitManager.h"

@interface GTGitRemoteManager : GTGitManager
{
}

- (void)updateRemoteToServiceRepository:(id)arg1 serviceRepositoryID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)deleteSVNTagRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)deleteSVNBranchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)deleteSVNFetchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)updateSVNTagRefSpec:(id)arg1 withRefSpecInfo:(id)arg2 remoteInfo:(id)arg3 error:(id *)arg4;
- (BOOL)updateSVNBranchRefSpec:(id)arg1 withRefSpecInfo:(id)arg2 remoteInfo:(id)arg3 error:(id *)arg4;
- (BOOL)updateSVNFetchRefSpec:(id)arg1 withRefSpecInfo:(id)arg2 remoteInfo:(id)arg3 error:(id *)arg4;
- (BOOL)addSVNTagRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)addSVNBranchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)addSVNFetchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)deletePushRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)updatePushRefSpec:(id)arg1 refSpecInfo:(id)arg2 remoteInfo:(id)arg3 error:(id *)arg4;
- (BOOL)addPushRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)deleteFetchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)updateFetchRefSpec:(id)arg1 refSpecInfo:(id)arg2 remoteInfo:(id)arg3 error:(id *)arg4;
- (BOOL)addFetchRefSpec:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)removeUpstreamRemoteConnectionForRemoteInfo:(id)arg1 error:(id *)arg2;
- (BOOL)storeUpstreamRemoteConnection:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)removeDownstreamRemoteConnectionForRemoteInfo:(id)arg1 error:(id *)arg2;
- (BOOL)storeDownstreamRemoteConnection:(id)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (BOOL)setSkipsDefaultUpdate:(BOOL)arg1 remoteInfo:(id)arg2 error:(id *)arg3;
- (void)cancelRemoteOperationWithUUID:(id)arg1;
- (id)allRemoteOperationUUIDs;
- (void)pullRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)pullRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)publishTag:(id)arg1 remoteInfo:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)publishTag:(id)arg1 remoteInfo:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)deleteRemoteBranch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteRemoteBranch:(id)arg1 error:(id *)arg2;
- (void)publishBranch:(id)arg1 remoteInfo:(id)arg2 remoteRefName:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)publishBranch:(id)arg1 remoteInfo:(id)arg2 remoteRefName:(id)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (void)pushRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)pushRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)fetchRemoteURL:(id)arg1 refSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)fetchRemoteURL:(id)arg1 refSpec:(id)arg2 error:(id *)arg3;
- (void)fetchAllRemotesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRemotes:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSVNRemote:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchRemote:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)fetchRemote:(id)arg1 refSpec:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)fetchRemote:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)restoreRemotesWithInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRemotesWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteRemotes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteRemotes:(id)arg1 error:(id *)arg2;
- (void)rename:(id)arg1 newName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)rename:(id)arg1 newName:(id)arg2 error:(id *)arg3;
- (void)addSVNRemoteWithName:(id)arg1 url:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)addSVNRemoteWithName:(id)arg1 url:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)addRemoteWithName:(id)arg1 url:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)addRemoteWithName:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

