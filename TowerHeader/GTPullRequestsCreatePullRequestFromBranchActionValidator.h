//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class GTGitRef;

@interface GTPullRequestsCreatePullRequestFromBranchActionValidator : GTGitActionValidator
{
    GTGitRef *_ref;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRef *ref; // @synthesize ref=_ref;
- (BOOL)validateBefore:(id *)arg1;

@end

