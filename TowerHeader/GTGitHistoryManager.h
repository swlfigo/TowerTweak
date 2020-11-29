//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitManager.h"

@class NSCache;

@interface GTGitHistoryManager : GTGitManager
{
    NSCache *_treeEntryCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *treeEntryCache; // @synthesize treeEntryCache=_treeEntryCache;
- (void)validateRewriteRevisions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)validateRewriteRevisions:(id)arg1 error:(id *)arg2;
- (void)revisionIsAncestor:(id)arg1 ofRevision:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)revisionIsAncestor:(id)arg1 ofRevision:(id)arg2 error:(id *)arg3;
- (id)savePatchForRevision:(id)arg1 destinationURL:(id)arg2 startingNumber:(unsigned long long)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadDiffsForRevisionRange:(id)arg1 filePaths:(id)arg2 logOptions:(id)arg3 diffOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)loadDiffsForRevisionRange:(id)arg1 filePaths:(id)arg2 logOptions:(id)arg3 diffOptions:(id)arg4 error:(id *)arg5;
- (void)loadChangesetForRevisionRange:(id)arg1 filePaths:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadChangesetForRevisionRange:(id)arg1 filePaths:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)diffsByComparingRevision:(id)arg1 toRevision:(id)arg2 filePaths:(id)arg3 logOptions:(id)arg4 diffOptions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)diffsByComparingRevision:(id)arg1 toRevision:(id)arg2 filePaths:(id)arg3 logOptions:(id)arg4 diffOptions:(id)arg5 error:(id *)arg6;
- (void)loadDiffsForRevision:(id)arg1 filePath:(id)arg2 logOptions:(id)arg3 diffOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)loadDiffsForRevision:(id)arg1 filePaths:(id)arg2 logOptions:(id)arg3 diffOptions:(id)arg4 error:(id *)arg5;
- (void)changesetByComparingRevision:(id)arg1 toRevision:(id)arg2 filePaths:(id)arg3 logOptions:(id)arg4 diffOptions:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)changesetByComparingRevision:(id)arg1 toRevision:(id)arg2 filePaths:(id)arg3 logOptions:(id)arg4 diffOptions:(id)arg5 error:(id *)arg6;
- (void)loadChangesetForRevision:(id)arg1 filePaths:(id)arg2 options:(id)arg3 diffOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)loadChangesetForRevision:(id)arg1 filePaths:(id)arg2 options:(id)arg3 diffOptions:(id)arg4 error:(id *)arg5;
- (void)loadContributionsForRevision:(id)arg1 filePath:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadContributionsForRevision:(id)arg1 filePath:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (void)loadBlameForRevision:(id)arg1 filePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadBlameForRevision:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
- (void)loadBlobForRevision:(id)arg1 filePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadBlobForRevision:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
- (void)loadTreeEntriesForCommitHash:(id)arg1 filePath:(id)arg2 recursive:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadTreeEntriesForCommitHash:(id)arg1 filePath:(id)arg2 recursive:(BOOL)arg3 error:(id *)arg4;
- (id)existsCommitWithRevision:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)existsCommitWithRevision:(id)arg1 error:(id *)arg2;
- (id)countCommitsForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)countCommitsForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)loadCommitHashesForRevisionRange:(id)arg1 filePaths:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadCommitHashesForRevisionRange:(id)arg1 filePaths:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)loadCommitHashesForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadCommitHashesForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)loadCommitsForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)loadCommitsForRevisions:(id)arg1 filePaths:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)loadCommitsForRevisions:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)loadCommitsForRevisions:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)loadSingleCommitsForRevisions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadSingleCommitsForRevisions:(id)arg1 error:(id *)arg2;
- (void)loadCommitForRevision:(id)arg1 verifyGPGSignature:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadCommitForRevision:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadCommitForRevision:(id)arg1 verifyGPGSignature:(BOOL)arg2 error:(id *)arg3;
- (id)loadCommitForRevision:(id)arg1 error:(id *)arg2;

@end

