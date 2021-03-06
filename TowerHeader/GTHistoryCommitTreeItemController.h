//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTBackgroundSession, GTGitRepository, NSArray, NSError, NSMapTable, NSMutableSet, NSString;
@protocol GTHistoryCommitTreeItemControllerDelegate;

@interface GTHistoryCommitTreeItemController : NSObject
{
    BOOL _loading;
    GTGitRepository *_repository;
    id <GTHistoryCommitTreeItemControllerDelegate> _delegate;
    NSString *_commitHash;
    NSString *_filePath;
    NSString *_searchPattern;
    NSArray *_items;
    NSError *_lastError;
    CDUnknownBlockType _imageProviderBlock;
    NSMapTable *_filePathToItemMapTable;
    NSMutableSet *_loadedItems;
    GTBackgroundSession *_backgroundSession;
}

+ (id)controllerWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSMutableSet *loadedItems; // @synthesize loadedItems=_loadedItems;
@property(retain, nonatomic) NSMapTable *filePathToItemMapTable; // @synthesize filePathToItemMapTable=_filePathToItemMapTable;
@property(copy, nonatomic) CDUnknownBlockType imageProviderBlock; // @synthesize imageProviderBlock=_imageProviderBlock;
@property(getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *commitHash; // @synthesize commitHash=_commitHash;
@property(nonatomic) __weak id <GTHistoryCommitTreeItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)controllerDidFinishLoadingItemsForParentItem:(id)arg1 task:(id)arg2;
- (void)loadChildItemsForFilePath:(id)arg1;
- (BOOL)hasLoadedChildItemsOfItem:(id)arg1;
- (void)loadChildItemsOfItem:(id)arg1;
- (void)reset;
- (void)reload;
- (id)itemForFilePath:(id)arg1;
- (id)initWithRepository:(id)arg1;

@end

