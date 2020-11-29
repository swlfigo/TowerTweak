//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTOperationDelegate-Protocol.h"

@class GTBackgroundSession, GTGitDiffOptions, GTGitRepository, GTGitRepositoryQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol GTGitChangesetDiffLoaderDelegate;

@interface GTGitChangesetDiffLoader : NSObject <GTOperationDelegate>
{
    BOOL _loading;
    GTGitRepository *_repository;
    GTGitDiffOptions *_diffOptions;
    id <GTGitChangesetDiffLoaderDelegate> _delegate;
    NSMutableArray *_loadedDiffFilePaths;
    NSMutableDictionary *_loadedDiffsByFilePath;
    NSMutableDictionary *_filePathToDiff;
    NSMutableDictionary *_filePathToImageData;
    NSMutableArray *_loadingOperationUUIDs;
    GTBackgroundSession *_session;
}

+ (id)loaderWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTBackgroundSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *loadingOperationUUIDs; // @synthesize loadingOperationUUIDs=_loadingOperationUUIDs;
@property(retain, nonatomic) NSMutableDictionary *filePathToImageData; // @synthesize filePathToImageData=_filePathToImageData;
@property(retain, nonatomic) NSMutableDictionary *filePathToDiff; // @synthesize filePathToDiff=_filePathToDiff;
@property(retain, nonatomic) NSMutableDictionary *loadedDiffsByFilePath; // @synthesize loadedDiffsByFilePath=_loadedDiffsByFilePath;
@property(retain, nonatomic) NSMutableArray *loadedDiffFilePaths; // @synthesize loadedDiffFilePaths=_loadedDiffFilePaths;
@property(getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <GTGitChangesetDiffLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTGitDiffOptions *diffOptions; // @synthesize diffOptions=_diffOptions;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)stopLoading;
- (void)startLoading;
- (BOOL)needsLoadingDiffForFilePath:(id)arg1;
- (void)loaderDidLoadImageData:(id)arg1 task:(id)arg2;
- (void)loaderDidLoadRevisionRangeDiff:(id)arg1 task:(id)arg2;
- (void)loaderDidLoadCommitDiff:(id)arg1 task:(id)arg2;
- (id)diffImageDataForFilePath:(id)arg1;
- (id)diffForFilePath:(id)arg1;
- (void)reset;
- (void)cancel;
- (void)loadDiffForChangesetEntry:(id)arg1 revisionRange:(id)arg2;
- (void)loadAllDiffsForChangeset:(id)arg1 revisionRange:(id)arg2;
- (void)loadDiffForChangesetEntry:(id)arg1 revision:(id)arg2;
@property(readonly, nonatomic) GTGitRepositoryQueue *queue;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

