//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GTGitRepositoryFinderConfig : NSObject
{
    NSArray *_searchDirectoryURLs;
    NSArray *_excludedDirectoryURLs;
    unsigned long long _searchDepth;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long searchDepth; // @synthesize searchDepth=_searchDepth;
@property(retain, nonatomic) NSArray *excludedDirectoryURLs; // @synthesize excludedDirectoryURLs=_excludedDirectoryURLs;
@property(retain, nonatomic) NSArray *searchDirectoryURLs; // @synthesize searchDirectoryURLs=_searchDirectoryURLs;

@end
