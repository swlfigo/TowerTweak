//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitActionValidator.h"

@class NSString;

@interface GTGitMergeActionValidator : GTGitActionValidator
{
    NSString *_revision;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;

@end
