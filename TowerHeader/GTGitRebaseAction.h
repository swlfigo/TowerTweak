//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitWorkingCopyAction.h"

@class NSString;
@protocol GTGitRebaseActionDelegate;

@interface GTGitRebaseAction : GTGitWorkingCopyAction
{
    id <GTGitRebaseActionDelegate> _delegate;
    NSString *_revision;
    NSString *_currentBaseRevision;
    NSString *_targetBaseRevision;
    unsigned long long _options;
    NSString *_originalRevision;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalRevision; // @synthesize originalRevision=_originalRevision;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *targetBaseRevision; // @synthesize targetBaseRevision=_targetBaseRevision;
@property(retain, nonatomic) NSString *currentBaseRevision; // @synthesize currentBaseRevision=_currentBaseRevision;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) __weak id <GTGitRebaseActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionDidFinish;
- (void)actionDidAbortWithError:(id)arg1;
- (void)actionDidPerformMainAction;
- (void)actionWillPerformMainAction;
- (void)actionNeedsAutoUpdateSubmodules;
- (void)actionNeedsAutoStash;
- (void)actionDidStart;
- (void)actionWillStart;
- (void)main;
- (id)initWithRepository:(id)arg1;

@end

