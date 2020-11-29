//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

#import "GTGitValidationOperation-Protocol.h"

@class NSArray, NSError, NSString;

@interface GTGitValidateMainlineCommitsOperation : GTGitRepositoryOperation <GTGitValidationOperation>
{
    NSString *_refName;
    NSArray *_revisions;
    NSError *_validationError;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 refName:(id)arg3 revisions:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *validationError; // @synthesize validationError=_validationError;
@property(retain, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
@property(retain, nonatomic) NSString *refName; // @synthesize refName=_refName;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)initWithManagedObjectContext:(id)arg1 repositoryDescriptor:(id)arg2 refName:(id)arg3 revisions:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
