//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, GTUpdateChangeset, NSArray, NSManagedObjectContext, NSMutableArray;

@interface GTGitStashesUpdater : NSObject
{
    GTGitRepository *_repository;
    NSArray *_gitStashes;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSMutableArray *_obsoleteStashes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteStashes; // @synthesize obsoleteStashes=_obsoleteStashes;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *gitStashes; // @synthesize gitStashes=_gitStashes;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)addStashToDeletions:(id)arg1;
- (void)addStashToUpdates:(id)arg1;
- (void)addStashToInsertions:(id)arg1;
- (void)deleteObsoleteStashes;
- (void)updateStash:(id)arg1 withGitStash:(id)arg2;
- (void)createOrUpdateStashes;
- (BOOL)update:(id *)arg1;
- (id)initWithRepository:(id)arg1 gitStashes:(id)arg2;

@end

