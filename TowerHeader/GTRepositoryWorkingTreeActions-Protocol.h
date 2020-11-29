//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GTRepositoryWorkingTreeActions <NSObject>

@optional
- (void)compareTheirsToMergeBase:(id)arg1;
- (void)compareMineToMergeBase:(id)arg1;
- (void)compareMineToTheirs:(id)arg1;
- (void)compareIndexToBase:(id)arg1;
- (void)compareWorkingTreeToIndex:(id)arg1;
- (void)unsetAssumeUnchangedForItems:(id)arg1;
- (void)setAssumeUnchangedForItems:(id)arg1;
- (void)createLFSTrackedFilePatternFromItem:(id)arg1;
- (void)addLFSTrackAllPatternsForItems:(id)arg1;
- (void)addLFSTrackedFilePatternsForItems:(id)arg1;
- (void)createExcludePatternFromItem:(id)arg1;
- (void)addExcludeAllPatternsForItemsWithType:(id)arg1;
- (void)addExcludeAllPatternsForItems:(id)arg1;
- (void)addExcludePatternsForItems:(id)arg1;
- (void)createIgnorePatternFromItem:(id)arg1;
- (void)addIgnoreAllPatternsForItemsWithType:(id)arg1;
- (void)addIgnoreAllPatternsForItems:(id)arg1;
- (void)addIgnorePatternsForItems:(id)arg1;
- (void)openItemInMergeTool:(id)arg1;
- (void)restoreAncestorVersionForItems:(id)arg1;
- (void)restoreTheirVersionForItems:(id)arg1;
- (void)restoreMyVersionForItems:(id)arg1;
- (void)restoreUnmergedVersionForItems:(id)arg1;
- (void)resolveItemsUsingTheirVersion:(id)arg1;
- (void)resolveItemsUsingMyVersion:(id)arg1;
- (void)markItemsAsResolved:(id)arg1;
- (void)revertItemsToRevision:(id)arg1;
- (void)savePartialStash:(id)arg1;
- (void)discardLocalChangesForItems:(id)arg1;
- (void)renameItem:(id)arg1;
- (void)deleteItems:(id)arg1;
- (void)untrackItems:(id)arg1;
- (void)unstageAllItems:(id)arg1;
- (void)unstageItems:(id)arg1;
- (void)stageAllItems:(id)arg1;
- (void)stageItems:(id)arg1;
- (void)openItemsInQuickLook:(id)arg1;
- (void)openItemInTerminal:(id)arg1;
- (void)openItemsInFinder:(id)arg1;
- (void)openItemsWithOtherApplication:(id)arg1;
- (void)openItemsWithApplication:(id)arg1;
- (void)openItemsWithDefaultApplication:(id)arg1;
@end

