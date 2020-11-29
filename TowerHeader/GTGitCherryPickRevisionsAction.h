//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitWorkingCopyAction.h"

@class NSArray, NSString;
@protocol GTGitCherryPickRevisionsActionDelegate;

@interface GTGitCherryPickRevisionsAction : GTGitWorkingCopyAction
{
    id <GTGitCherryPickRevisionsActionDelegate> _delegate;
    NSArray *_revisions;
    unsigned long long _mainline;
    unsigned long long _cherryPickOptions;
    NSString *_originalRevision;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalRevision; // @synthesize originalRevision=_originalRevision;
@property(nonatomic) unsigned long long cherryPickOptions; // @synthesize cherryPickOptions=_cherryPickOptions;
@property(nonatomic) unsigned long long mainline; // @synthesize mainline=_mainline;
@property(copy, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
@property(nonatomic) __weak id <GTGitCherryPickRevisionsActionDelegate> delegate; // @synthesize delegate=_delegate;
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
