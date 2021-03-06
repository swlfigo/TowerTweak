//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitDiff, FNGitDiffChunk, NSArray, NSIndexSet, NSString;

@interface GTDiffItem : NSObject
{
    long long _type;
    NSString *_identifier;
    FNGitDiff *_diff;
    unsigned long long _diffChunkIndex;
    NSIndexSet *_selectedLineIndexes;
    NSArray *_inlineDiffs;
    id _representedObject;
    FNGitDiffChunk *_diffChunk;
}

+ (id)diffItemWithType:(long long)arg1 identifier:(id)arg2;
+ (id)keyPathsForValuesAffectingGroupItem;
+ (id)keyPathsForValuesAffectingDiffChunk;
+ (id)keyPathsForValuesAffectingRepresentedObject;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitDiffChunk *diffChunk; // @synthesize diffChunk=_diffChunk;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) NSArray *inlineDiffs; // @synthesize inlineDiffs=_inlineDiffs;
@property(retain, nonatomic) NSIndexSet *selectedLineIndexes; // @synthesize selectedLineIndexes=_selectedLineIndexes;
@property(nonatomic) unsigned long long diffChunkIndex; // @synthesize diffChunkIndex=_diffChunkIndex;
@property(retain, nonatomic) FNGitDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic, getter=isEmptyDiffType) BOOL emptyDiffType;
@property(readonly, nonatomic, getter=isChunkContentType) BOOL chunkContentType;
@property(readonly, nonatomic, getter=isChunkHeaderType) BOOL chunkHeaderType;
@property(readonly, nonatomic, getter=isDiffHeaderType) BOOL diffHeaderType;
@property(readonly, nonatomic, getter=isGroupItem) BOOL groupItem;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (id)init;

@end

