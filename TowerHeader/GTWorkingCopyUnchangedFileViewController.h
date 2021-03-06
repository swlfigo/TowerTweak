//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNViewController.h>

@class GTEmptyViewController, GTGitRepository, GTGitWorkingTreeEntry;

@interface GTWorkingCopyUnchangedFileViewController : FNViewController
{
    GTGitRepository *_repository;
    GTGitWorkingTreeEntry *_workingTreeEntry;
    GTEmptyViewController *_unchangedFileViewController;
    FNViewController *_activeViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) GTEmptyViewController *unchangedFileViewController; // @synthesize unchangedFileViewController=_unchangedFileViewController;
@property(retain, nonatomic) GTGitWorkingTreeEntry *workingTreeEntry; // @synthesize workingTreeEntry=_workingTreeEntry;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)displayViewControllerIfNeeded:(id)arg1;
- (void)showUnchangedFileView;
- (void)updateEmptyViewText;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

