//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitSubmoduleState;

@interface GTGitSubmoduleStateComparator : NSObject
{
    GTGitSubmoduleState *_originalState;
    GTGitSubmoduleState *_currentState;
}

+ (long long)compareOriginalState:(id)arg1 withCurrentState:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitSubmoduleState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) GTGitSubmoduleState *originalState; // @synthesize originalState=_originalState;
- (long long)compare;
- (id)initWithOriginalState:(id)arg1 withCurrentState:(id)arg2;

@end

