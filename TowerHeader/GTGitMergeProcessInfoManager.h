//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GTGitMergeProcessInfoManager : NSObject
{
    NSMutableDictionary *_repositoryStacks;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *repositoryStacks; // @synthesize repositoryStacks=_repositoryStacks;
- (id)mergeProcessInfoForRepository:(id)arg1;
- (id)popMergeProcessInfoForRepository:(id)arg1;
- (void)pushMergeProcessInfo:(id)arg1 repository:(id)arg2;

@end
