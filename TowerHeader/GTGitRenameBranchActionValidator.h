//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class GTGitBranch, NSString;

@interface GTGitRenameBranchActionValidator : GTGitActionValidator
{
    GTGitBranch *_branch;
    NSString *_theNewRefName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *theNewRefName; // @synthesize theNewRefName=_theNewRefName;
@property(retain, nonatomic) GTGitBranch *branch; // @synthesize branch=_branch;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end
