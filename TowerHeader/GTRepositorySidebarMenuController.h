//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuController.h"

@class GTGitRepository, GTSubmoduleMenuGenerator, NSArray;

@interface GTRepositorySidebarMenuController : GTMenuController
{
    GTGitRepository *_repository;
    NSArray *_sidebarItems;
    GTSubmoduleMenuGenerator *_submoduleMenuGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTSubmoduleMenuGenerator *submoduleMenuGenerator; // @synthesize submoduleMenuGenerator=_submoduleMenuGenerator;
@property(retain, nonatomic) NSArray *sidebarItems; // @synthesize sidebarItems=_sidebarItems;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)addCompareRevisionsMenuItemWithRefs:(id)arg1;
- (void)addDeleteRemoteBranchesMenuItemWithRemoteBranches:(id)arg1;
- (void)addDeleteSubmodulesMenuItemWithSubmodules:(id)arg1;
- (void)addDeleteRemotesMenuItemWithRemotes:(id)arg1;
- (void)addDeleteTagsMenuItemWithTags:(id)arg1;
- (void)addDeleteBranchesMenuItemWithBranches:(id)arg1;
- (void)makeSubmoduleMenuWithSubmodule:(id)arg1;
- (void)makeTagMenuWithTag:(id)arg1;
- (void)makeRemoteBranchMenuWithRemoteBranch:(id)arg1;
- (void)makeRemoteMenuWithRemote:(id)arg1;
- (void)makeBranchMenuWithBranch:(id)arg1;
- (void)makeSubmodulesGroupMenuWithRepository:(id)arg1;
- (void)makeRemotesGroupMenuWithRepository:(id)arg1;
- (void)makeTagsGroupMenuWithRepository:(id)arg1;
- (void)makeBranchesGroupMenuWithRepository:(id)arg1;
- (void)makeWorkingCopyMenuWithRepository:(id)arg1;
- (BOOL)itemsAreAllOfIdenticalItemType:(id)arg1;
- (BOOL)itemsAreAllOfItemTypeRef:(id)arg1;
- (void)makeMenuForItems:(id)arg1;
- (void)makeMenuForItem:(id)arg1;
- (void)makeMenuItems;
- (void)reload;

@end
