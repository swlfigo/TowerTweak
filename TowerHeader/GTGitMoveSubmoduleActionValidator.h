//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitSubmoduleActionValidator.h"

@class NSString;

@interface GTGitMoveSubmoduleActionValidator : GTGitSubmoduleActionValidator
{
    NSString *_destinationPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end
