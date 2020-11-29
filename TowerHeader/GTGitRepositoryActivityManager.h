//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMapTable, NSMutableArray;

@interface GTGitRepositoryActivityManager : NSObject
{
    NSManagedObjectContext *_context;
    NSMutableArray *_allActivities;
    NSMapTable *_activityLookupTable;
}

+ (id)managerWithManagedObjectContext:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *activityLookupTable; // @synthesize activityLookupTable=_activityLookupTable;
@property(retain, nonatomic) NSMutableArray *allActivities; // @synthesize allActivities=_allActivities;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)updateRepositoryActivity:(id)arg1 info:(id)arg2;
- (void)removeFinishedRepositoryActivities;
- (void)removeAllRepositoryActivities;
- (void)removeRepositoryActivities:(id)arg1;
- (void)updateProgress:(id)arg1 forRepositoryActivityWithUUID:(id)arg2;
- (void)finishRepositoryActivityWithRepositoryActivityInfo:(id)arg1;
- (void)createOrUpdateRepositoryActivityWithRepositoryActivityInfo:(id)arg1;
- (id)activitiesWithIdentifiers:(id)arg1;
- (void)addRepositoryActivity:(id)arg1;
@property(readonly, nonatomic) NSArray *activities;
- (id)initWithManagedObjectContext:(id)arg1;

@end

