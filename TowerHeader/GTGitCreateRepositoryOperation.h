//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitOperation.h"

@class GTUpdateChangeset, NSManagedObjectID, NSURL;

@interface GTGitCreateRepositoryOperation : GTGitOperation
{
    NSURL *_fileURL;
    NSManagedObjectID *_createdRepositoryID;
    GTUpdateChangeset *_changeset;
}

+ (id)operationWithManagedObjectContext:(id)arg1 fileURL:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSManagedObjectID *createdRepositoryID; // @synthesize createdRepositoryID=_createdRepositoryID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 fileURL:(id)arg2;

@end
