//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitUserProfileDescription, NSArray;

@interface GTAddGitUserProfileDialogueViewController : GTDialogueViewController
{
    NSArray *_userProfiles;
    GTGitUserProfileDescription *_userProfileDescription;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) GTGitUserProfileDescription *userProfileDescription; // @synthesize userProfileDescription=_userProfileDescription;
@property(readonly, nonatomic) NSArray *userProfiles; // @synthesize userProfiles=_userProfiles;
- (BOOL)validatesSubmitButton;
- (void)commonInit;
- (id)initWithGitUserProfileDescription:(id)arg1 userProfiles:(id)arg2;

@end

