//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, NSArray;

@interface GTDeleteStashesViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    NSArray *_stashes;
}

+ (id)defaultNibName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *stashes; // @synthesize stashes=_stashes;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)updateTitleAndTextIfNeeded;
- (void)update;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end
