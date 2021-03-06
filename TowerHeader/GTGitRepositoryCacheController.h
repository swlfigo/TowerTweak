//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTGitRepositoryFinderDelegate-Protocol.h"
#import "GTGitRepositoryFinderPathsObserving-Protocol.h"

@class GTGitRepositoryFinderPathsObserver, GTGitRepositoryManager, NSManagedObjectContext, NSString;

@interface GTGitRepositoryCacheController : NSObject <GTGitRepositoryFinderPathsObserving, GTGitRepositoryFinderDelegate>
{
    GTGitRepositoryManager *_repositoryManager;
    NSManagedObjectContext *_context;
    GTGitRepositoryFinderPathsObserver *_repositoryFinderPathObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryFinderPathsObserver *repositoryFinderPathObserver; // @synthesize repositoryFinderPathObserver=_repositoryFinderPathObserver;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
- (void)addRepositoriesWithRepositoryURLs:(id)arg1;
- (void)validate;
- (void)cleanUp;
- (void)repositoryFinderPathsDidUpdate:(id)arg1;
- (void)repositoryFinder:(id)arg1 didFindRepositoryURLs:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

