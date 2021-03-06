//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "GTGitRepositoryObserving-Protocol.h"
#import "GTTouchBarControllerDelegate-Protocol.h"

@class GTGitRepositoryObserver, GTRootTouchBarController, NSString;

@interface GTApplication : NSApplication <GTTouchBarControllerDelegate, GTGitRepositoryObserving>
{
    GTRootTouchBarController *_touchBarController;
    GTGitRepositoryObserver *_repositoryObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) GTRootTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
- (void)repositoryDidUpdate:(id)arg1;
- (void)touchBarControllerDidInvalidateTouchBar:(id)arg1;
- (id)makeTouchBar;
- (void)terminate:(id)arg1;
- (void)finishLaunching;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

