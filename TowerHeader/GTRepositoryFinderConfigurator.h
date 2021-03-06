//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepositoryFinder, GTGitRepositoryFinderConfig, GTGitRepositoryFinderPathsManager;

@interface GTRepositoryFinderConfigurator : NSObject
{
    GTGitRepositoryFinder *_finder;
    GTGitRepositoryFinderConfig *_config;
}

+ (id)configuratorWithFinder:(id)arg1 config:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepositoryFinderConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) GTGitRepositoryFinder *finder; // @synthesize finder=_finder;
- (id)makeExcludedDirectoryURLs;
- (id)makeSearchDirectoryURLs;
- (id)makeSearchDirectoryPaths;
- (void)updateWithIgnorePaths:(id)arg1;
@property(readonly, nonatomic) GTGitRepositoryFinderPathsManager *pathsManager;
- (id)initWithFinder:(id)arg1 config:(id)arg2;

@end

