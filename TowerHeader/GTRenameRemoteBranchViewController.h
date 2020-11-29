//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRemoteBranch, GTGitRenameRemoteBranchActionValidator, GTGitRepository, NSString;

@interface GTRenameRemoteBranchViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    GTGitRemoteBranch *_remoteBranch;
    NSString *_theNewName;
    GTGitRenameRemoteBranchActionValidator *_validator;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRenameRemoteBranchActionValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) NSString *theNewName; // @synthesize theNewName=_theNewName;
@property(retain, nonatomic) GTGitRemoteBranch *remoteBranch; // @synthesize remoteBranch=_remoteBranch;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)validatesSubmitButton;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end
