//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class NSString;

@interface GTGitCreateTagActionValidator : GTGitActionValidator
{
    NSString *_refName;
    NSString *_startingRevision;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *startingRevision; // @synthesize startingRevision=_startingRevision;
@property(copy, nonatomic) NSString *refName; // @synthesize refName=_refName;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end

