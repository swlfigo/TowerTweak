//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class GTGitSubmodule;

@interface GTGitSubmoduleActionValidator : GTGitActionValidator
{
    GTGitSubmodule *_submodule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitSubmodule *submodule; // @synthesize submodule=_submodule;
- (BOOL)validateSubmoduleRemote:(id *)arg1;
- (BOOL)validateInitializedSubmodule:(id *)arg1;
- (BOOL)validateSubmoduleStatus:(id *)arg1;
- (BOOL)validateSubmoduleRepository:(id *)arg1;
- (BOOL)validate:(id *)arg1;

@end
