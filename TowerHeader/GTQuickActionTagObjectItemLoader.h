//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTQuickActionObjectItemLoader.h"

@class NSCache, NSMutableArray;

@interface GTQuickActionTagObjectItemLoader : GTQuickActionObjectItemLoader
{
    NSMutableArray *_tagItems;
    CDUnknownBlockType _completionHandler;
    NSCache *_cache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableArray *tagItems; // @synthesize tagItems=_tagItems;
- (id)scoreForTag:(id)arg1;
- (id)cacheKeyForTag:(id)arg1;
- (void)makeItems;
- (void)reset;
- (void)cancel;
- (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)update;
- (id)items;

@end

