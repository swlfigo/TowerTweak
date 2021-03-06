//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitIgnores;

@interface GTGitIgnoresManager : NSObject
{
    FNGitIgnores *_gitIgnores;
}

+ (id)excludesManagerForRepository:(id)arg1;
+ (id)ignoresManagerForRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitIgnores *gitIgnores; // @synthesize gitIgnores=_gitIgnores;
- (id)loadDefaultPatterns:(id *)arg1;
- (id)normalizePatterns:(id)arg1;
- (BOOL)removePatterns:(id)arg1 error:(id *)arg2;
- (BOOL)addPatterns:(id)arg1 error:(id *)arg2;
- (id)initWithGitIgnores:(id)arg1;
- (id)init;

@end

