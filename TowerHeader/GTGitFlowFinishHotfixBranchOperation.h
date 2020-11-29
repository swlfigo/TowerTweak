//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSString;

@interface GTGitFlowFinishHotfixBranchOperation : GTGitRepositoryOperation
{
    NSString *_hotfixName;
    NSString *_tagMessage;
    NSString *_gpgKeyFingerprint;
    unsigned long long _options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 hotfixName:(id)arg3 tagMessage:(id)arg4 gpgKeyFingerprint:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *gpgKeyFingerprint; // @synthesize gpgKeyFingerprint=_gpgKeyFingerprint;
@property(copy, nonatomic) NSString *tagMessage; // @synthesize tagMessage=_tagMessage;
@property(copy, nonatomic) NSString *hotfixName; // @synthesize hotfixName=_hotfixName;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (BOOL)signsTag;
@property(readonly, nonatomic) BOOL keepsRemoteBranch;
@property(readonly, nonatomic) BOOL keepsLocalBranch;
@property(readonly, nonatomic) BOOL skipsTagging;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 hotfixName:(id)arg3 tagMessage:(id)arg4 gpgKeyFingerprint:(id)arg5;

@end

