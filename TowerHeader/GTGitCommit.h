//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitCommit, GTGPGSignature, GTGitActor, GTGitChangeset, GTGitRepository, NSArray, NSDate, NSManagedObjectID, NSString;

@interface GTGitCommit : NSObject
{
    NSString *_commitHash;
    NSString *_shortCommitHash;
    NSString *_treeHash;
    NSArray *_parentCommitHashes;
    GTGitActor *_author;
    NSDate *_authorDate;
    GTGitActor *_committer;
    NSDate *_committerDate;
    NSString *_subject;
    NSString *_body;
    NSString *_message;
    NSArray *_refs;
    GTGPGSignature *_gpgSignature;
    FNGitCommit *_gitCommit;
    NSManagedObjectID *_repositoryID;
    GTGitRepository *_repository;
}

+ (id)refDecoratorsFromGitRefs:(id)arg1;
+ (id)commitWithFNGitCommit:(id)arg1 repositoryID:(id)arg2;
+ (id)commitWithGitCommit:(id)arg1 repositoryDescriptor:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSManagedObjectID *repositoryID; // @synthesize repositoryID=_repositoryID;
@property(retain, nonatomic) FNGitCommit *gitCommit; // @synthesize gitCommit=_gitCommit;
@property(retain, nonatomic) GTGPGSignature *gpgSignature; // @synthesize gpgSignature=_gpgSignature;
@property(retain, nonatomic) NSArray *refs; // @synthesize refs=_refs;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSDate *committerDate; // @synthesize committerDate=_committerDate;
@property(retain, nonatomic) GTGitActor *committer; // @synthesize committer=_committer;
@property(retain, nonatomic) NSDate *authorDate; // @synthesize authorDate=_authorDate;
@property(retain, nonatomic) GTGitActor *author; // @synthesize author=_author;
@property(retain, nonatomic) NSArray *parentCommitHashes; // @synthesize parentCommitHashes=_parentCommitHashes;
@property(retain, nonatomic) NSString *treeHash; // @synthesize treeHash=_treeHash;
@property(retain, nonatomic) NSString *shortCommitHash; // @synthesize shortCommitHash=_shortCommitHash;
@property(retain, nonatomic) NSString *commitHash; // @synthesize commitHash=_commitHash;
@property(readonly, nonatomic, getter=isMergeCommit) BOOL mergeCommit;
- (id)initWithRepositoryID:(id)arg1 commitHash:(id)arg2 shortCommitHash:(id)arg3 treeHash:(id)arg4 parentCommitHashes:(id)arg5 author:(id)arg6 authorDate:(id)arg7 committer:(id)arg8 committerDate:(id)arg9 subject:(id)arg10 body:(id)arg11 message:(id)arg12 refs:(id)arg13 gpgSignature:(id)arg14;
@property(readonly, nonatomic) GTGitChangeset *changeset;
- (id)historyManager;

@end
