//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitWorkingCopyAction.h"

@class NSString;
@protocol GTGitCheckoutActionDelegate;

@interface GTGitCheckoutAction : GTGitWorkingCopyAction
{
    id <GTGitCheckoutActionDelegate> _delegate;
    NSString *_revision;
    NSString *_originalRevision;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalRevision; // @synthesize originalRevision=_originalRevision;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) __weak id <GTGitCheckoutActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionDidFinish;
- (void)actionDidAbortWithError:(id)arg1;
- (void)actionDidPerformMainAction;
- (void)actionWillPerformMainAction;
- (void)actionNeedsAutoUpdateSubmodules;
- (void)actionNeedsAutoStash;
- (void)actionDidStart;
- (void)actionWillStart;
- (void)main;
- (BOOL)validate:(id *)arg1;
- (id)initWithRepository:(id)arg1;

@end

