//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuController.h"

@class GTGitRepository, GTGitUserProfile, GTGitUserProfileDescription, NSArray;

@interface GTGitUserProfilesMenuController : GTMenuController
{
    NSArray *_userProfiles;
    GTGitUserProfile *_activeProfile;
    GTGitUserProfileDescription *_userProfileDescription;
    GTGitRepository *_repository;
    id _selectedObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id selectedObject; // @synthesize selectedObject=_selectedObject;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) GTGitUserProfileDescription *userProfileDescription; // @synthesize userProfileDescription=_userProfileDescription;
@property(retain, nonatomic) GTGitUserProfile *activeProfile; // @synthesize activeProfile=_activeProfile;
@property(retain, nonatomic) NSArray *userProfiles; // @synthesize userProfiles=_userProfiles;
- (void)addManageUserProfilesMenuItem;
- (void)addAddUserProfileMenuItem;
- (void)addCurrentUserWithoutProfileMenuItem;
- (void)addUserProfileMenuItems;
- (void)reload;

@end

