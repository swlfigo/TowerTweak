//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitUserProfileAction.h"

@class GTGitUserProfile, GTGitUserProfileDescription;

@interface GTCreateGitUserProfileAction : GTGitUserProfileAction
{
    GTGitUserProfile *_userProfile;
    GTGitUserProfileDescription *_userProfileDescription;
}

+ (id)actionWithUserProfileDescription:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitUserProfileDescription *userProfileDescription; // @synthesize userProfileDescription=_userProfileDescription;
@property(retain, nonatomic) GTGitUserProfile *userProfile; // @synthesize userProfile=_userProfile;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidCreateGitUserProfileWithID:(id)arg1;
- (void)main;
- (id)initWithUserProfileDescription:(id)arg1;

@end

