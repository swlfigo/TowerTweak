//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, NSDictionary;

@interface GTGitLFSUpdater : NSObject
{
    GTGitRepository *_repository;
    NSDictionary *_gitConfigValues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *gitConfigValues; // @synthesize gitConfigValues=_gitConfigValues;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)loadPrePushHookContents:(id *)arg1;
- (BOOL)update:(id *)arg1;
- (id)initWithRepository:(id)arg1 gitConfigValues:(id)arg2;

@end

