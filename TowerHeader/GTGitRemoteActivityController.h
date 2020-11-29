//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionController.h"

@class GTActionManager;

@interface GTGitRemoteActivityController : GTGitActionController
{
    GTActionManager *_remoteActionManager;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) GTActionManager *remoteActionManager; // @synthesize remoteActionManager=_remoteActionManager;
- (void)removeRemoteActivitiesActionDidFinish:(id)arg1;
- (void)cancelRemoteActivitiesActionDidFinish:(id)arg1;
- (void)clearRemoteActivitiesActionDidFinish:(id)arg1;
- (void)removeRemoteActivities:(id)arg1;
- (void)removeRemoteActivity:(id)arg1;
- (void)clearInactiveRemoteActivities;
- (void)cancelRemoteActivities:(id)arg1;
- (void)cancelRemoteActivity:(id)arg1;

@end

