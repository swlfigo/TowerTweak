//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;
@protocol GTUserDefaultsKeyObserving;

@interface GTUserDefaultsKeyObserver : NSObject
{
    BOOL _observing;
    id <GTUserDefaultsKeyObserving> _observer;
    NSArray *_keys;
    NSMutableSet *_observedKeys;
}

+ (id)userDefaultsObserverWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *observedKeys; // @synthesize observedKeys=_observedKeys;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) __weak id <GTUserDefaultsKeyObserving> observer; // @synthesize observer=_observer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving;
- (id)initWithObserver:(id)arg1 keys:(id)arg2;
- (id)initWithObserver:(id)arg1;
- (id)init;

@end

