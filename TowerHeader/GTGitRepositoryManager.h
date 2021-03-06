//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitContextManager, GTGitNotificationManager, GTGitQueue, NSManagedObjectContext;

@interface GTGitRepositoryManager : NSObject
{
    GTGitQueue *_queue;
    GTGitContextManager *_contextManager;
    GTGitNotificationManager *_notificationManager;
    NSManagedObjectContext *_backgroundContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
@property(retain, nonatomic) GTGitNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(retain, nonatomic) GTGitContextManager *contextManager; // @synthesize contextManager=_contextManager;
@property(retain, nonatomic) GTGitQueue *queue; // @synthesize queue=_queue;
- (void)updateIgnoredRepositoriesWithIgnoredFilePaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)updateIgnoredRepositoriesWithIgnoredFilePaths:(id)arg1 error:(id *)arg2;
- (void)validateRepositories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)validateRepositories:(id)arg1 error:(id *)arg2;
- (void)validateAllRepositoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)validateAllRepositories:(id *)arg1;
- (void)updateLastOpenedDateForRepository:(id)arg1;
- (void)configureGitMergeToolWithName:(id)arg1 command:(id)arg2 forRepository:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)configureGitMergeToolWithName:(id)arg1 command:(id)arg2 forRepository:(id)arg3 error:(id *)arg4;
- (void)configureGitDiffToolWithName:(id)arg1 command:(id)arg2 supportsDiffChangeset:(BOOL)arg3 forRepository:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)configureGitDiffToolWithName:(id)arg1 command:(id)arg2 supportsDiffChangeset:(BOOL)arg3 forRepository:(id)arg4 error:(id *)arg5;
- (void)setGPGSigningEnabled:(BOOL)arg1 forRepository:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setGPGSigningEnabled:(BOOL)arg1 forRepository:(id)arg2 error:(id *)arg3;
- (void)setUserName:(id)arg1 userEmail:(id)arg2 userGPGKey:(id)arg3 forRepository:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)setUserName:(id)arg1 userEmail:(id)arg2 userGPGKey:(id)arg3 forRepository:(id)arg4 error:(id *)arg5;
- (void)setUserName:(id)arg1 userEmail:(id)arg2 forRepository:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)setUserName:(id)arg1 userEmail:(id)arg2 forRepository:(id)arg3 error:(id *)arg4;
- (BOOL)setUserDescription:(id)arg1 forRepository:(id)arg2 error:(id *)arg3;
- (void)reloadStatsForRepository:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)reloadStatsForRepository:(id)arg1 error:(id *)arg2;
- (void)reloadRepository:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)reloadRepository:(id)arg1 error:(id *)arg2;
- (void)removeObsoleteRepositoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)removeObsoleteRepositories:(id *)arg1;
- (void)removeRepositories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)removeRepositories:(id)arg1 error:(id *)arg2;
- (void)createRepositoriesWithFileURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createRepositoriesWithFileURLs:(id)arg1 error:(id *)arg2;
- (void)fetchOrCreateRepositoriesWithFileURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchOrCreateRepositoriesWithFileURLs:(id)arg1 error:(id *)arg2;
- (void)fetchOrCreateRepositoryWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchOrCreateRepositoryWithFileURL:(id)arg1 error:(id *)arg2;
- (void)createRepositoryAtFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createRepositoryAtFileURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

