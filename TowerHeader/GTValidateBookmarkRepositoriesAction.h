//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBookmarkAction.h"

@class GTGitRepositoryManager;

@interface GTValidateBookmarkRepositoriesAction : GTBookmarkAction
{
    GTGitRepositoryManager *_repositoryManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
- (id)allBookmarkRepositories;
- (void)main;
- (BOOL)automaticallyCreatesBackup;

@end
