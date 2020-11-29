//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitWorkingCopyAction.h"

@class NSArray, NSString;
@protocol GTGitCheckoutFilesActionDelegate;

@interface GTGitCheckoutFilesAction : GTGitWorkingCopyAction
{
    id <GTGitCheckoutFilesActionDelegate> _delegate;
    NSArray *_filePaths;
    NSString *_revision;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(nonatomic) __weak id <GTGitCheckoutFilesActionDelegate> delegate; // @synthesize delegate=_delegate;
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

