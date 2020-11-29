//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTActionManager, NSTimer;

@interface GTServiceAccountsCleanUpController : NSObject
{
    double _cleanUpIntervalInSeconds;
    NSTimer *_cleanUpTimer;
    GTActionManager *_actionManager;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(nonatomic) __weak GTActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) NSTimer *cleanUpTimer; // @synthesize cleanUpTimer=_cleanUpTimer;
@property(nonatomic) double cleanUpIntervalInSeconds; // @synthesize cleanUpIntervalInSeconds=_cleanUpIntervalInSeconds;
- (void)updateTimerWithCleanUpInterval:(double)arg1;
- (void)cleanUpServiceAccounts;
- (void)updateTimer;
- (void)dealloc;
- (id)init;

@end

