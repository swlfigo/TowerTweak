//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServicesSidebarViewController, NSMutableDictionary, NSNotificationCenter, NSOperationQueue;
@protocol GTServicesSidebarViewControllerObserving;

@interface GTServicesSidebarViewControllerObserver : NSObject
{
    GTServicesSidebarViewController *_viewController;
    id <GTServicesSidebarViewControllerObserving> _observer;
    NSMutableDictionary *_observers;
    NSOperationQueue *_queue;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <GTServicesSidebarViewControllerObserving> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak GTServicesSidebarViewController *viewController; // @synthesize viewController=_viewController;
- (void)unregisterObservers;
- (void)registerNotificationWithName:(id)arg1 action:(SEL)arg2;
- (void)registerObservers;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 observer:(id)arg2;
- (id)init;

@end

