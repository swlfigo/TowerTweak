//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class NSArray;

@interface GTPullRequestsCommitsMenuGenerator : GTMenuGenerator
{
    NSArray *_affectedItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *affectedItems; // @synthesize affectedItems=_affectedItems;
- (BOOL)allAffectedItemsOfSameType;
- (void)addCopyFilePathToClipboardMenuItemWithItem:(id)arg1;
- (void)addOpenDiffToolForCommitChangesetFileAtRevisionMenuItemWithItems:(id)arg1;
- (void)addShowFileHistoryForCommitChangesetFileAtRevisionMenuItemWithItem:(id)arg1;
- (void)addShowBlameForCommitChangesetFileAtRevisionMenuItemWithItem:(id)arg1;
- (void)addShowCommitChangesetFileAtRevisionMenuItemWithItem:(id)arg1;
- (void)makeChangesetEntryMenu;
- (void)addCopyCommitHashMenuItemWithItem:(id)arg1;
- (void)addOpenDiffToolForRevisionMenuItemWithItem:(id)arg1;
- (void)addShowCommitForRevisionMenuItemWithItem:(id)arg1;
- (void)makeCommitMenu;
- (void)makeMenuItems;

@end
