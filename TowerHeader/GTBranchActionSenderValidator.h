//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionSenderValidator.h"

@interface GTBranchActionSenderValidator : GTGitActionSenderValidator
{
}

- (BOOL)validateUnsetUpstreamBranchActionWithItem:(id)arg1;
- (BOOL)validateSetUpstreamBranchActionWithItem:(id)arg1;
- (BOOL)validatePushBranchActionWithItem:(id)arg1;
- (BOOL)validatePublishBranchActionWithItem:(id)arg1;
- (BOOL)validateRenameBranchActionWithItem:(id)arg1;
- (BOOL)validateDeleteBranchesActionWithItem:(id)arg1;
- (BOOL)validateCreateNewBranchActionWithItem:(id)arg1;
- (void)registerActions;

@end

