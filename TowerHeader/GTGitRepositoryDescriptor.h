//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitRepository, NSManagedObjectID, NSURL;

@interface GTGitRepositoryDescriptor : NSObject
{
    NSManagedObjectID *_repositoryID;
    NSURL *_fileURL;
    NSURL *_gitDirectoryURL;
    NSURL *_workingTreeDirectoryURL;
    FNGitRepository *_gitRepository;
}

+ (id)repositoryDescriptorWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitRepository *gitRepository; // @synthesize gitRepository=_gitRepository;
@property(retain, nonatomic) NSURL *workingTreeDirectoryURL; // @synthesize workingTreeDirectoryURL=_workingTreeDirectoryURL;
@property(retain, nonatomic) NSURL *gitDirectoryURL; // @synthesize gitDirectoryURL=_gitDirectoryURL;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSManagedObjectID *repositoryID; // @synthesize repositoryID=_repositoryID;
- (id)initWithRepository:(id)arg1;

@end

