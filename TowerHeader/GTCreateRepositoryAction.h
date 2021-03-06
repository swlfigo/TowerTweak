//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBookmarkAction.h"

@class GTBookmark, GTGitRepository, GTGitRepositoryManager, NSURL;

@interface GTCreateRepositoryAction : GTBookmarkAction
{
    NSURL *_fileURL;
    GTGitRepository *_createdRepository;
    GTBookmark *_createdBookmark;
    GTGitRepositoryManager *_repositoryManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryManager *repositoryManager; // @synthesize repositoryManager=_repositoryManager;
@property(retain, nonatomic) GTBookmark *createdBookmark; // @synthesize createdBookmark=_createdBookmark;
@property(retain, nonatomic) GTGitRepository *createdRepository; // @synthesize createdRepository=_createdRepository;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidCreateBookmarkWithID:(id)arg1;
- (void)actionDidCreateRepositoryWithID:(id)arg1;
- (void)main;

@end

