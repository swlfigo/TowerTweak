//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNObserver.h>

@protocol GTWorkspaceObserving;

@interface GTWorkspaceObserver : FNObserver
{
    id <GTWorkspaceObserving> _delegate;
}

+ (id)observerWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTWorkspaceObserving> delegate; // @synthesize delegate=_delegate;
- (void)registerObservers;
- (id)invocationTarget;
- (id)notificationObject;
- (id)notificationCenter;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

