//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@interface GTGitSetRepositoryGPGSigningEnabledOperation : GTGitRepositoryOperation
{
    BOOL _gpgSigningEnabled;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 gpgSigningEnabled:(BOOL)arg3;
@property(nonatomic) BOOL gpgSigningEnabled; // @synthesize gpgSigningEnabled=_gpgSigningEnabled;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 gpgSigningEnabled:(BOOL)arg3;

@end

