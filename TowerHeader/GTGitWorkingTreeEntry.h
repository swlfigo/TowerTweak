//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNHashing-Protocol.h"
#import "FNListItem-Protocol.h"

@class GTGitRepositoryDescriptor, NSArray, NSString, NSURL;

@interface GTGitWorkingTreeEntry : NSObject <FNListItem, FNHashing>
{
    GTGitRepositoryDescriptor *_repositoryDescriptor;
    NSString *_path;
    NSString *_originalRelativePath;
    unsigned long long _currentStatus;
    unsigned long long _stagedStatus;
    unsigned long long _unmergedOursStatus;
    unsigned long long _unmergedTheirsStatus;
    unsigned long long _fileMode;
    unsigned long long _indexFlags;
    NSString *_currentSubmoduleRevision;
    NSString *_indexSubmoduleRevision;
    NSString *_parentDirectory;
    NSArray *_allParentDirectories;
    NSString *_absoluteFilePath;
}

+ (id)workingTreeDirectoryEntryWithRepositoryDescriptor:(id)arg1 path:(id)arg2;
+ (id)workingTreeEntryWithRepositoryDescriptor:(id)arg1 path:(id)arg2;
+ (id)workingTreeEntryWithRepository:(id)arg1 path:(id)arg2;
+ (id)keyPathsForValuesAffectingOriginalFileName;
+ (id)keyPathsForValuesAffectingFileName;
+ (id)keyPathsForValuesAffectingAbsoluteFileURL;
+ (id)workingTreeEntryWithRepositoryDescriptor:(id)arg1 gitWorkingTreeEntry:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *absoluteFilePath; // @synthesize absoluteFilePath=_absoluteFilePath;
@property(retain, nonatomic) NSArray *allParentDirectories; // @synthesize allParentDirectories=_allParentDirectories;
@property(retain, nonatomic) NSString *parentDirectory; // @synthesize parentDirectory=_parentDirectory;
@property(retain, nonatomic) NSString *indexSubmoduleRevision; // @synthesize indexSubmoduleRevision=_indexSubmoduleRevision;
@property(retain, nonatomic) NSString *currentSubmoduleRevision; // @synthesize currentSubmoduleRevision=_currentSubmoduleRevision;
@property(nonatomic) unsigned long long indexFlags; // @synthesize indexFlags=_indexFlags;
@property(nonatomic) unsigned long long fileMode; // @synthesize fileMode=_fileMode;
@property(nonatomic) unsigned long long unmergedTheirsStatus; // @synthesize unmergedTheirsStatus=_unmergedTheirsStatus;
@property(nonatomic) unsigned long long unmergedOursStatus; // @synthesize unmergedOursStatus=_unmergedOursStatus;
@property(nonatomic) unsigned long long stagedStatus; // @synthesize stagedStatus=_stagedStatus;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) NSString *originalRelativePath; // @synthesize originalRelativePath=_originalRelativePath;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) GTGitRepositoryDescriptor *repositoryDescriptor; // @synthesize repositoryDescriptor=_repositoryDescriptor;
@property(readonly, nonatomic) NSString *hashStringValue;
- (BOOL)isEqualToWorkingTreeEntry:(id)arg1;
@property(readonly, nonatomic, getter=isSubmodule) BOOL submodule;
@property(readonly, nonatomic, getter=isDirectory) BOOL directory;
@property(readonly, nonatomic, getter=isSymbolicLink) BOOL symbolicLink;
@property(readonly, nonatomic, getter=isExecutable) BOOL executable;
@property(readonly, nonatomic, getter=isRegularFile) BOOL regularFile;
@property(readonly, nonatomic) long long fileStatusOrder;
@property(readonly, nonatomic, getter=isAssumeUnchanged) BOOL assumeUnchanged;
@property(readonly, nonatomic) NSString *originalFileName;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) NSURL *absoluteFileURL;
- (id)initWithRepositoryDescriptor:(id)arg1 path:(id)arg2;
- (void)updateWithWorkingTreeEntry:(id)arg1;
@property(readonly, nonatomic) BOOL canBeMarkedAssumeUnchanged;
@property(readonly, nonatomic) BOOL canBeDeleted;
@property(readonly, nonatomic) BOOL canBeReverted;
@property(readonly, nonatomic) BOOL canBeUntracked;
@property(readonly, nonatomic) BOOL canBeUnstaged;
@property(readonly, nonatomic) BOOL canBeStaged;
@property(readonly, nonatomic) BOOL hasUnstagedChanges;
@property(readonly, nonatomic) BOOL hasStagedChanges;
@property(readonly, nonatomic, getter=isIgnored) BOOL ignored;
@property(readonly, nonatomic, getter=isTracked) BOOL tracked;
@property(readonly, nonatomic, getter=isUntracked) BOOL untracked;
@property(readonly, nonatomic, getter=isUnmergedStatusAddedByThem) BOOL unmergedStatusAddedByThem;
@property(readonly, nonatomic, getter=isUnmergedStatusAddedByUs) BOOL unmergedStatusAddedByUs;
@property(readonly, nonatomic, getter=isUnmergedStatusDeletedByThem) BOOL unmergedStatusDeletedByThem;
@property(readonly, nonatomic, getter=isUnmergedStatusDeletedByUs) BOOL unmergedStatusDeletedByUs;
@property(readonly, nonatomic, getter=isUnmergedStatusBothModified) BOOL unmergedStatusBothModified;
@property(readonly, nonatomic, getter=isUnmergedStatusBothDeleted) BOOL unmergedStatusBothDeleted;
@property(readonly, nonatomic, getter=isUnmergedStatusBothAdded) BOOL unmergedStatusBothAdded;
@property(readonly, nonatomic, getter=isUnmerged) BOOL unmerged;
@property(readonly, nonatomic, getter=isRenamed) BOOL renamed;
@property(readonly, nonatomic, getter=isModified) BOOL modified;
@property(readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property(readonly, nonatomic, getter=isAdded) BOOL added;
- (unsigned long long)rightStatus;
- (unsigned long long)leftStatus;
- (void)updateWithSubmoduleInfo:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (unsigned long long)directoryStatusForFileStatus:(unsigned long long)arg1;
- (void)updateDirectoryStatusWithWorkingTreeEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

