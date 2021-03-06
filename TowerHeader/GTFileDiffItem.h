//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitDiff;

@interface GTFileDiffItem : NSObject
{
    long long _type;
    FNGitDiff *_diff;
    unsigned long long _diffChunkIndex;
}

+ (id)diffChunkItemWithDiff:(id)arg1 diffChunkIndex:(unsigned long long)arg2;
+ (id)diffChunkHeaderItemWithDiff:(id)arg1 diffChunkIndex:(unsigned long long)arg2;
+ (id)diffHeaderItemWithDiff:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long diffChunkIndex; // @synthesize diffChunkIndex=_diffChunkIndex;
@property(retain, nonatomic) FNGitDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isGroupItem) BOOL groupItem;
- (id)initWithType:(long long)arg1 diff:(id)arg2 diffChunkIndex:(unsigned long long)arg3;

@end

