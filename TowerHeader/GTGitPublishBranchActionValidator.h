//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRemoteActionValidator.h"

@class GTGitBranch, NSString;

@interface GTGitPublishBranchActionValidator : GTGitRemoteActionValidator
{
    GTGitBranch *_branch;
    NSString *_refName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *refName; // @synthesize refName=_refName;
@property(retain, nonatomic) GTGitBranch *branch; // @synthesize branch=_branch;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end

