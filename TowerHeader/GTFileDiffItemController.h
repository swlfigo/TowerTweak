//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTBackgroundSession, GTGitDiffOptions, GTGitFileRevision, GTGitHistoryManager, GTGitLogOptions, GTGitRepository, NSArray, NSError;
@protocol GTFileDiffItemControllerDelegate;

@interface GTFileDiffItemController : NSObject
{
    GTGitRepository *_repository;
    id <GTFileDiffItemControllerDelegate> _delegate;
    GTGitFileRevision *_fileRevision;
    GTGitLogOptions *_logOptions;
    GTGitDiffOptions *_diffOptions;
    NSArray *_items;
    NSError *_error;
    GTGitHistoryManager *_historyManager;
    GTBackgroundSession *_backgroundSession;
}

+ (id)controllerWithRepository:(id)arg1;
+ (id)keyPathsForValuesAffectingLoading;
- (void).cxx_destruct;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) GTGitHistoryManager *historyManager; // @synthesize historyManager=_historyManager;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) GTGitDiffOptions *diffOptions; // @synthesize diffOptions=_diffOptions;
@property(retain, nonatomic) GTGitLogOptions *logOptions; // @synthesize logOptions=_logOptions;
@property(retain, nonatomic) GTGitFileRevision *fileRevision; // @synthesize fileRevision=_fileRevision;
@property(nonatomic) __weak id <GTFileDiffItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)controllerDidChangeItems;
- (void)controllerDidUpdateItemsAtIndexes:(id)arg1;
- (void)controllerDidMoveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)controllerDidInsertItemsAtIndexes:(id)arg1;
- (void)controllerDidDeleteItemsAtIndexes:(id)arg1;
- (void)controllerWillChangeItems;
- (void)controllerDidReloadItems;
- (id)makeItemsWithDiff:(id)arg1;
- (void)controllerDidFailLoadingDiffWithError:(id)arg1 task:(id)arg2;
- (void)controllerDidLoadDiff:(id)arg1 task:(id)arg2;
- (void)waitUntilLoaded;
- (void)cancel;
- (void)reload;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (id)initWithRepository:(id)arg1;

@end
