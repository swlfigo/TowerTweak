//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionController.h"

@class GTDialogueWindowController, GTGitMergeTool, GTGitRepositoryManager, GTGitWorkingTreeEntry, GTGitWorkingTreeManager;
@protocol GTGitMergeToolControllerDelegate;

@interface GTGitMergeToolController : GTGitActionController
{
    BOOL _launched;
    id <GTGitMergeToolControllerDelegate> _delegate;
    GTGitRepositoryManager *_repositoryManager;
    GTGitMergeTool *_mergeTool;
    GTGitWorkingTreeEntry *_mergedEntry;
    GTDialogueWindowController *_dialogueWindowController;
    GTGitWorkingTreeManager *_workingTreeManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitWorkingTreeManager *workingTreeManager; // @synthesize workingTreeManager=_workingTreeManager;
@property(retain, nonatomic) GTDialogueWindowController *dialogueWindowController; // @synthesize dialogueWindowController=_dialogueWindowController;
@property(retain, nonatomic) GTGitWorkingTreeEntry *mergedEntry; // @synthesize mergedEntry=_mergedEntry;
@property(retain, nonatomic) GTGitMergeTool *mergeTool; // @synthesize mergeTool=_mergeTool;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
@property(nonatomic, getter=isLaunched) BOOL launched; // @synthesize launched=_launched;
@property(nonatomic) __weak id <GTGitMergeToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerDidFailMergingEntry:(id)arg1 error:(id)arg2;
- (void)controllerDidFinishMergingEntry:(id)arg1;
- (void)controllerDidFailLaunchingMergeToolWithError:(id)arg1;
- (void)controllerDidCancel;
- (void)gitMergeToolDidFinishLaunchingWithExitCode:(long long)arg1 error:(id)arg2;
- (BOOL)setUpMergeToolConfig:(id *)arg1;
- (BOOL)validateMergeToolConfig;
- (void)cancel;
- (void)openMergeToolWithUnmergedEntry:(id)arg1;

@end

