//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository;

@interface GTIgnoreTrackedFilesDialogueViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1 mode:(long long)arg2;

@end

