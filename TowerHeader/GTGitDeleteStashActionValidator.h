//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class GTGitStash;

@interface GTGitDeleteStashActionValidator : GTGitActionValidator
{
    GTGitStash *_stash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitStash *stash; // @synthesize stash=_stash;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end

