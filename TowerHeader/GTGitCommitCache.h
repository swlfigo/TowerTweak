//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface GTGitCommitCache : NSObject
{
    NSCache *_cache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)updateWithCommits:(id)arg1;
- (id)commitForCommitHash:(id)arg1;

@end

