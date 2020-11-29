//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAccountOperation.h"

@class GTServiceRepositoryCreationInfo, GTUpdateChangeset;
@protocol GTServiceRepositoryAdapter;

@interface GTServiceCreateRepositoryOperation : GTServiceAccountOperation
{
    id <GTServiceRepositoryAdapter> _createdServiceRepository;
    GTServiceRepositoryCreationInfo *_serviceRepositoryCreationInfo;
    GTUpdateChangeset *_changeset;
}

+ (id)operationWithManagedObjectContext:(id)arg1 serviceAccount:(id)arg2 serviceRepositoryCreationInfo:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) GTServiceRepositoryCreationInfo *serviceRepositoryCreationInfo; // @synthesize serviceRepositoryCreationInfo=_serviceRepositoryCreationInfo;
@property(retain, nonatomic) id <GTServiceRepositoryAdapter> createdServiceRepository; // @synthesize createdServiceRepository=_createdServiceRepository;
- (void)createWithFetchedRepository:(id)arg1;
- (BOOL)validateCreateRepository;
- (void)performFetchRequest;
- (void)execute;
- (void)operationWillExecute;
- (id)parameters;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 serviceAccountID:(id)arg2 serviceRepositoryCreationInfo:(id)arg3;

@end
