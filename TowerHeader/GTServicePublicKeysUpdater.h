//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServiceAccount, GTUpdateChangeset, NSArray, NSDictionary, NSManagedObjectContext, NSMutableArray;

@interface GTServicePublicKeysUpdater : NSObject
{
    GTServiceAccount *_serviceAccount;
    NSArray *_fetchedServicePublicKeys;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSDictionary *_changes;
    NSMutableArray *_obsoleteServicePublicKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteServicePublicKeys; // @synthesize obsoleteServicePublicKeys=_obsoleteServicePublicKeys;
@property(retain, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *fetchedServicePublicKeys; // @synthesize fetchedServicePublicKeys=_fetchedServicePublicKeys;
@property(retain, nonatomic) GTServiceAccount *serviceAccount; // @synthesize serviceAccount=_serviceAccount;
- (void)deleteObsoleteServicePublicKeys;
- (void)updateServicePublicKey:(id)arg1 withFetchedServicePublicKey:(id)arg2;
- (void)createOrUpdateServicePublicKeys;
- (BOOL)update:(id *)arg1;
- (id)initWithServiceAccount:(id)arg1 fetchedServicePublicKeys:(id)arg2;
- (id)init;

@end

