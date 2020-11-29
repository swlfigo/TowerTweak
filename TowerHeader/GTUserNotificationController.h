//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GTUserNotificationController : NSObject <NSUserNotificationCenterDelegate, UNUserNotificationCenterDelegate>
{
    BOOL _postingNotificationsAllowed;
    NSMutableDictionary *_identifierToActionHandler;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *identifierToActionHandler; // @synthesize identifierToActionHandler=_identifierToActionHandler;
@property(nonatomic, getter=isPostingNotificationsAllowed) BOOL postingNotificationsAllowed; // @synthesize postingNotificationsAllowed=_postingNotificationsAllowed;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)postUserNotificationWithTitle:(id)arg1 subtitle:(id)arg2 informativeText:(id)arg3 categoryIdentifier:(id)arg4 userInfo:(id)arg5;
- (void)postUserNotificationWithTitle:(id)arg1 subtitle:(id)arg2 informativeText:(id)arg3 userInfo:(id)arg4;
- (void)postUserNotificationWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)postCommandLineToolUpdateAvailableUserNotificationWithActionHandler:(CDUnknownBlockType)arg1;
- (void)postCloneFinishedUserNotificationRemoteURL:(id)arg1 repositoryURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

