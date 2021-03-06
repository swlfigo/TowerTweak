//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceOperation.h"

@class GTGitRepositoryDescriptor, GTUpdateChangeset, NSManagedObjectID;

@interface GTServiceUpdateMissingPullRequestInformationOperation : GTServiceOperation
{
    GTUpdateChangeset *_changeset;
    GTGitRepositoryDescriptor *_repositoryDescriptor;
    NSManagedObjectID *_servicePullRequestID;
}

+ (id)operationWithManagedObjectContext:(id)arg1 servicePullRequest:(id)arg2 repository:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *servicePullRequestID; // @synthesize servicePullRequestID=_servicePullRequestID;
@property(retain, nonatomic) GTGitRepositoryDescriptor *repositoryDescriptor; // @synthesize repositoryDescriptor=_repositoryDescriptor;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
- (BOOL)updateStatisticsIfRequired:(id)arg1 repository:(id)arg2 error:(id *)arg3;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 servicePullRequest:(id)arg2 repository:(id)arg3;

@end

