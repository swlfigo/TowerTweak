//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitController.h"

@class GTActionManager, GTDialogueWindowController, GTGitErrorController, GTUndoController, NSMutableSet, NSUndoManager;

@interface GTGitActionController : GTGitController
{
    GTGitErrorController *_gitErrorController;
    GTDialogueWindowController *_autoStashWindowController;
    NSMutableSet *_activeDialogues;
    GTActionManager *_actionManager;
}

+ (id)actionControllerWithRepository:(id)arg1;
+ (id)sharedControllerForRepository:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak GTActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) NSMutableSet *activeDialogues; // @synthesize activeDialogues=_activeDialogues;
@property(retain, nonatomic) GTDialogueWindowController *autoStashWindowController; // @synthesize autoStashWindowController=_autoStashWindowController;
@property(retain, nonatomic) GTGitErrorController *gitErrorController; // @synthesize gitErrorController=_gitErrorController;
- (void)invalidateUndoAction:(id)arg1;
- (void)setUndoActionName:(id)arg1;
- (id)registerUndoWithTarget:(id)arg1 undoHandler:(CDUnknownBlockType)arg2;
- (void)controllerDidPerformReloadRepositoryAction:(id)arg1;
- (void)performReloadActionWithOptions:(long long)arg1 reloadCompletionHandler:(CDUnknownBlockType)arg2;
- (void)actionNeedsAutoUpdateSubmodules:(id)arg1;
- (void)actionNeedsAutoStashChanges:(id)arg1;
- (void)actionDidFinish:(id)arg1 reloadCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reloadCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentError:(id)arg1;
- (void)presentAlertAsSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentViewControllerAsSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)releaseDialogue:(id)arg1;
- (void)retainDialogue:(id)arg1;
@property(readonly, nonatomic) NSUndoManager *undoManager;
@property(readonly, nonatomic) GTUndoController *undoController;
- (id)repositoryWindow;
- (id)initWithRepository:(id)arg1;

@end

