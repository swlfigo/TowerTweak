//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, GTUpdateChangeset, NSArray, NSDictionary, NSManagedObjectContext, NSMutableArray;

@interface GTGitRemotesUpdater : NSObject
{
    GTGitRepository *_repository;
    NSArray *_gitRemotes;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSDictionary *_changes;
    NSMutableArray *_obsoleteRemotes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteRemotes; // @synthesize obsoleteRemotes=_obsoleteRemotes;
@property(retain, nonatomic) NSDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *gitRemotes; // @synthesize gitRemotes=_gitRemotes;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)addRemoteToDeletions:(id)arg1;
- (void)addRemoteToUpdates:(id)arg1;
- (void)addRemoteToInsertions:(id)arg1;
- (void)deleteObsoleteRemotes;
- (void)updateRemote:(id)arg1 withGitRemote:(id)arg2;
- (void)createOrUpdateRemotes;
- (BOOL)update:(id *)arg1;
- (id)initWithRepository:(id)arg1 gitRemotes:(id)arg2;

@end

