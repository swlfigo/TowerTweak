//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class NSString;

@interface GTGitRenameSubmoduleAction : GTGitAction
{
    NSString *_submoduleName;
    NSString *_destinationName;
    long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) NSString *submoduleName; // @synthesize submoduleName=_submoduleName;
- (void)actionDidFinish;
- (void)main;

@end

