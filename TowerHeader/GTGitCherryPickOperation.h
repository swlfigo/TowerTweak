//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSArray;

@interface GTGitCherryPickOperation : GTGitRepositoryOperation
{
    NSArray *_revisions;
    unsigned long long _mainlineParentNumber;
    unsigned long long _options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisions:(id)arg3 options:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long mainlineParentNumber; // @synthesize mainlineParentNumber=_mainlineParentNumber;
@property(copy, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
- (id)gitOptionsFromOptions:(unsigned long long)arg1 mainlineParentNumber:(unsigned long long)arg2;
- (void)execute;
- (BOOL)isWriteOperation;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revisions:(id)arg3;

@end

