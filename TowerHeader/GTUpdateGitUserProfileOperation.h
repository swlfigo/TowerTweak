//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitUserProfileOperation.h"

@class GTGitUserProfileDescription, NSManagedObjectID;

@interface GTUpdateGitUserProfileOperation : GTGitUserProfileOperation
{
    GTGitUserProfileDescription *_userProfileDescription;
    NSManagedObjectID *_userProfileID;
}

+ (id)operationWithManagedObjectContext:(id)arg1 userProfile:(id)arg2 userProfileDescription:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSManagedObjectID *userProfileID; // @synthesize userProfileID=_userProfileID;
@property(readonly, nonatomic) GTGitUserProfileDescription *userProfileDescription; // @synthesize userProfileDescription=_userProfileDescription;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 userProfile:(id)arg2 userProfileDescription:(id)arg3;

@end
