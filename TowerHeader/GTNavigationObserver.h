//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNObserver.h>

@class GTNavigationController;
@protocol GTNavigationObserving;

@interface GTNavigationObserver : FNObserver
{
    GTNavigationController *_navigationController;
    id <GTNavigationObserving> _observer;
}

+ (id)observerWithNavigationController:(id)arg1 observer:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTNavigationObserving> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) GTNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)registerObservers;
- (id)invocationTarget;
- (id)notificationObject;
- (id)initWithNavigationController:(id)arg1 observer:(id)arg2;

@end

