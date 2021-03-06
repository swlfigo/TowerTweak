//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SUUpdaterDelegate-Protocol.h"

@class GTReleaseChannelManager, NSString, NSUserDefaults;

@interface GTUpdatesController : NSObject <SUUpdaterDelegate>
{
    NSUserDefaults *_userDefaults;
    GTReleaseChannelManager *_releaseChannelManager;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) GTReleaseChannelManager *releaseChannelManager; // @synthesize releaseChannelManager=_releaseChannelManager;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)updaterDidNotFindUpdate:(id)arg1;
- (void)updater:(id)arg1 didFindValidUpdate:(id)arg2;
- (void)updater:(id)arg1 didFinishLoadingAppcast:(id)arg2;
- (id)feedURLStringForUpdater:(id)arg1;
- (id)releaseChannels;
- (id)validReleaseChannelsForUser;
- (id)feedURL;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

