//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitWorkingTreeSnapshot, NSArray, NSString;

@interface GTGitUndoCheckoutFilesAction : GTGitAction
{
    NSString *_revision;
    NSArray *_filePaths;
    GTGitWorkingTreeSnapshot *_workingTreeSnapshot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitWorkingTreeSnapshot *workingTreeSnapshot; // @synthesize workingTreeSnapshot=_workingTreeSnapshot;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidCheckoutEntries;
- (void)main;

@end

