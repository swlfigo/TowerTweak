//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GTAppleEvent : NSObject
{
    long long _action;
    NSArray *_arguments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) long long action; // @synthesize action=_action;
- (id)initWithAction:(long long)arg1 arguments:(id)arg2;
- (id)init;

@end

