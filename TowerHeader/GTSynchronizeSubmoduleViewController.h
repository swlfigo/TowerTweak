//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, GTGitSubmodule;

@interface GTSynchronizeSubmoduleViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    GTGitSubmodule *_submodule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitSubmodule *submodule; // @synthesize submodule=_submodule;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

