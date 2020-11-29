//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary;

@interface GTGitRemoteActivityManager : NSObject
{
    NSManagedObjectContext *_context;
    NSMutableDictionary *_activityUUIDToLastProgressUpdate;
}

+ (id)managerWithManagedObjectContext:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *activityUUIDToLastProgressUpdate; // @synthesize activityUUIDToLastProgressUpdate=_activityUUIDToLastProgressUpdate;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)removeAllInactiveRemoteActivities;
- (void)removeRemoteActivitiesWithIDs:(id)arg1;
- (void)removeRemoteActivities:(id)arg1;
- (void)resetRemoteActivitiesWithIDs:(id)arg1;
- (void)resetRemoteActivities:(id)arg1;
- (void)finishRemoteActivityWithRemoteActivityInfo:(id)arg1;
- (void)updateProgress:(id)arg1 forRemoteActivityWithUUID:(id)arg2;
- (void)createOrUpdateRemoteActivityWithRemoteActivityInfo:(id)arg1;
- (id)remoteActivitiesMatchingPredicate:(id)arg1;
- (id)allActiveRemoteActivitiesForDestinationURL:(id)arg1;
- (id)allActiveRemoteActivities;
- (id)allRemoteActivities;
- (id)remoteActivityWithIdentifier:(id)arg1;
- (unsigned long long)remoteActivitiesCount;
- (id)initWithManagedObjectContext:(id)arg1;

@end

