//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAction.h"

@class GTGitRepository, GTGitRepositoryActivityManager, NSManagedObjectContext;

@interface GTGitRepositoryActivityAction : GTAction
{
    NSManagedObjectContext *_context;
    GTGitRepository *_repository;
    GTGitRepositoryActivityManager *_repositoryActivityManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryActivityManager *repositoryActivityManager; // @synthesize repositoryActivityManager=_repositoryActivityManager;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end

