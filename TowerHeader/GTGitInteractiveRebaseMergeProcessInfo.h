//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitMergeProcessInfo.h"

@class NSArray, NSString;

@interface GTGitInteractiveRebaseMergeProcessInfo : GTGitMergeProcessInfo
{
    BOOL _insertsBelow;
    long long _interactiveRebaseType;
    NSString *_revision;
    NSArray *_revisions;
    NSString *_baseRevision;
    NSString *_targetBaseRevision;
    NSString *_targetRevision;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL insertsBelow; // @synthesize insertsBelow=_insertsBelow;
@property(retain, nonatomic) NSString *targetRevision; // @synthesize targetRevision=_targetRevision;
@property(retain, nonatomic) NSString *targetBaseRevision; // @synthesize targetBaseRevision=_targetBaseRevision;
@property(retain, nonatomic) NSString *baseRevision; // @synthesize baseRevision=_baseRevision;
@property(retain, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) long long interactiveRebaseType; // @synthesize interactiveRebaseType=_interactiveRebaseType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

