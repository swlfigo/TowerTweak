//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, GTRepositoryDraggingActionManager;

@interface GTRepositorySidebarDraggingController : NSObject
{
    GTGitRepository *_repository;
    GTRepositoryDraggingActionManager *_draggingActionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTRepositoryDraggingActionManager *draggingActionManager; // @synthesize draggingActionManager=_draggingActionManager;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)isWorkingCopyAction:(unsigned long long)arg1;
- (id)stashValueFromDraggedItems:(id)arg1;
- (id)patchDataValueFromDraggedItems:(id)arg1;
- (id)fullRefNameValueFromDraggedItems:(id)arg1;
- (id)revisionValueFromDraggedItems:(id)arg1;
- (id)revisionValuesFromDraggedItems:(id)arg1;
- (void)performDraggingAction:(id)arg1 withDraggedItems:(id)arg2 destination:(id)arg3;
- (unsigned long long)draggingDestinationForSidebarItem:(id)arg1;
- (unsigned long long)draggingSourceForPasteboardItems:(id)arg1;
- (id)draggingActionQueryForDraggingInfo:(id)arg1 item:(id)arg2;
- (BOOL)isAlternateOperation;
- (BOOL)acceptDrop:(id)arg1 item:(id)arg2;
- (unsigned long long)validateDrop:(id)arg1 proposedItem:(id)arg2;
- (unsigned long long)draggingActionForDrop:(id)arg1 proposedItem:(id)arg2;
- (id)initWithRepository:(id)arg1;
- (id)init;

@end
