//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class GTGitCommit, NSString;

@interface GTGitLoadCommitOperation : GTGitRepositoryOperation
{
    BOOL _verifiesGPGSignature;
    NSString *_revision;
    GTGitCommit *_loadedCommit;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 verifiesGPGSignature:(BOOL)arg4;
+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL verifiesGPGSignature; // @synthesize verifiesGPGSignature=_verifiesGPGSignature;
@property(retain, nonatomic) GTGitCommit *loadedCommit; // @synthesize loadedCommit=_loadedCommit;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)execute;
- (id)groups;
- (id)title;
- (id)parameters;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 verifiesGPGSignature:(BOOL)arg4;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;

@end

