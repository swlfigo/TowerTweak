//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, GTUpdateChangeset, NSArray, NSManagedObjectContext, NSMutableArray;

@interface GTGitBranchesUpdater : NSObject
{
    GTGitRepository *_repository;
    NSArray *_gitBranches;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSMutableArray *_obsoleteBranches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteBranches; // @synthesize obsoleteBranches=_obsoleteBranches;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *gitBranches; // @synthesize gitBranches=_gitBranches;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)addBranchToDeletions:(id)arg1;
- (void)addBranchToUpdates:(id)arg1;
- (void)addBranchToInsertions:(id)arg1;
- (void)deleteObsoleteBranches;
- (void)updateBranch:(id)arg1 withGitBranch:(id)arg2;
- (void)createOrUpdateBranches;
- (BOOL)update:(id *)arg1;
- (id)initWithRepository:(id)arg1 gitBranches:(id)arg2;

@end
