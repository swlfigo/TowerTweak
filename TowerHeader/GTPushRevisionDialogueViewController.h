//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitPushTarget, GTGitRemote, GTGitRepository, NSArray, NSString;

@interface GTPushRevisionDialogueViewController : GTDialogueViewController
{
    BOOL _emptyRemoteList;
    GTGitRepository *_repository;
    NSArray *_refs;
    NSArray *_remotes;
    NSString *_revision;
    GTGitRemote *_remote;
    NSString *_refName;
    GTGitPushTarget *_defaultPushTarget;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitPushTarget *defaultPushTarget; // @synthesize defaultPushTarget=_defaultPushTarget;
@property(nonatomic, getter=isEmptyRemoteList) BOOL emptyRemoteList; // @synthesize emptyRemoteList=_emptyRemoteList;
@property(copy, nonatomic) NSString *refName; // @synthesize refName=_refName;
@property(retain, nonatomic) GTGitRemote *remote; // @synthesize remote=_remote;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(copy, nonatomic) NSArray *remotes; // @synthesize remotes=_remotes;
@property(copy, nonatomic) NSArray *refs; // @synthesize refs=_refs;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)validatesSubmitButton;
- (void)updateSelection;
- (void)loadRemotes;
- (void)loadRefs;
- (void)loadDefaultPushTarget;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end
