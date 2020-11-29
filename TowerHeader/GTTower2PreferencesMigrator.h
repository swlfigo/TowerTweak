//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTTower2DataMigrator-Protocol.h"

@class NSArray, NSString, NSUserDefaults;

@interface GTTower2PreferencesMigrator : NSObject <GTTower2DataMigrator>
{
    NSUserDefaults *_sourceUserDefaults;
    NSUserDefaults *_destintationUserDefaults;
    NSArray *_migrationKeys;
    NSArray *_migratableSourceKeys;
}

+ (id)migratableKeysFromUserDefaults:(id)arg1 migrationKeys:(id)arg2;
+ (id)defaultMigrationKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *migratableSourceKeys; // @synthesize migratableSourceKeys=_migratableSourceKeys;
@property(retain, nonatomic) NSArray *migrationKeys; // @synthesize migrationKeys=_migrationKeys;
@property(retain, nonatomic) NSUserDefaults *destintationUserDefaults; // @synthesize destintationUserDefaults=_destintationUserDefaults;
@property(retain, nonatomic) NSUserDefaults *sourceUserDefaults; // @synthesize sourceUserDefaults=_sourceUserDefaults;
- (BOOL)migrate:(id *)arg1;
@property(readonly, nonatomic) BOOL needsMigration;
- (id)initWithSourceUserDefaults:(id)arg1 destintationUserDefaults:(id)arg2 migrationKeys:(id)arg3;
- (id)initWithSourceUserDefaults:(id)arg1 destintationUserDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
