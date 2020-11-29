//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTGitRepositoryObserving-Protocol.h"

@class GTGitRepository, GTGitRepositoryObserver, NSString;

@interface GTRepositoryBaseViewController : GTViewController <GTGitRepositoryObserving>
{
    GTGitRepository *_repository;
    GTGitRepositoryObserver *_repositoryObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryObserver *repositoryObserver; // @synthesize repositoryObserver=_repositoryObserver;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)initWithRepository:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

