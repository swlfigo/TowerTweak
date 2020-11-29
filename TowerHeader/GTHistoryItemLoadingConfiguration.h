//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GTGitLogOptions, NSArray, NSString;

@interface GTHistoryItemLoadingConfiguration : NSObject <NSCopying>
{
    BOOL _shouldLoadTrackingInfo;
    BOOL _drawsGraph;
    BOOL _comparesRevisions;
    BOOL _countsCommits;
    BOOL _loadsChangesetSummary;
    NSArray *_revisions;
    NSArray *_baseRevisions;
    NSArray *_filePaths;
    GTGitLogOptions *_options;
    long long _groupingType;
}

+ (id)configurationWithRevisions:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL loadsChangesetSummary; // @synthesize loadsChangesetSummary=_loadsChangesetSummary;
@property(nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;
@property(nonatomic) BOOL countsCommits; // @synthesize countsCommits=_countsCommits;
@property(nonatomic) BOOL comparesRevisions; // @synthesize comparesRevisions=_comparesRevisions;
@property(nonatomic) BOOL drawsGraph; // @synthesize drawsGraph=_drawsGraph;
@property(nonatomic) BOOL shouldLoadTrackingInfo; // @synthesize shouldLoadTrackingInfo=_shouldLoadTrackingInfo;
@property(retain, nonatomic) GTGitLogOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) NSArray *baseRevisions; // @synthesize baseRevisions=_baseRevisions;
@property(retain, nonatomic) NSArray *revisions; // @synthesize revisions=_revisions;
- (BOOL)isEqualToHistoryItemLoadingConfiguration:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRevisions:(id)arg1;

@end

