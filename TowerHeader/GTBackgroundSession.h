//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface GTBackgroundSession : NSObject
{
    NSString *_identifier;
    NSMutableSet *_tasks;
}

+ (id)keyPathsForValuesAffectingHasActiveTasks;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)restartSession;
- (BOOL)validateTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
@property(readonly, nonatomic) NSArray *activeTasks;
@property(readonly, nonatomic) BOOL hasActiveTasks;
- (id)init;

@end

