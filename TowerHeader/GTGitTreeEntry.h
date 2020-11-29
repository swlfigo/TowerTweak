//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitFileEntry.h"

@interface GTGitTreeEntry : GTGitFileEntry
{
    unsigned long long _objectType;
    unsigned long long _fileSize;
}

+ (id)treeEntryWithFNGitTreeEntry:(id)arg1 repositoryDescriptor:(id)arg2;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic, getter=isCommitObject) BOOL commitObject;
@property(readonly, nonatomic, getter=isBlobObject) BOOL blobObject;
@property(readonly, nonatomic, getter=isTreeObject) BOOL treeObject;
- (id)fileName;
- (id)initWithRepositoryDescriptor:(id)arg1 filePath:(id)arg2 objectType:(unsigned long long)arg3 objectHash:(id)arg4 fileMode:(unsigned long long)arg5 fileSize:(unsigned long long)arg6;

@end

