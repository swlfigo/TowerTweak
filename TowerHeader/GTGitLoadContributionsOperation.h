//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray, NSString;

@interface GTGitLoadContributionsOperation : GTGitRepositoryOperation
{
    NSString *_revision;
    NSString *_filePath;
    unsigned long long _limit;
    NSArray *_loadedContributions;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 filePath:(id)arg4 limit:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *loadedContributions; // @synthesize loadedContributions=_loadedContributions;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)execute;
- (id)groups;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 filePath:(id)arg4 limit:(unsigned long long)arg5;

@end

