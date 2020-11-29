//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSChannelProtocol-Protocol.h"

@class MSChannelUnitConfiguration, NSObject, NSString;
@protocol MSLog, OS_dispatch_queue;

@protocol MSChannelUnitProtocol <MSChannelProtocol>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logsDispatchQueue;
@property(retain, nonatomic) MSChannelUnitConfiguration *configuration;
- (void)checkPendingLogs;
- (void)resumeSendingLogsWithToken:(NSString *)arg1;
- (void)pauseSendingLogsWithToken:(NSString *)arg1;
- (void)enqueueItem:(id <MSLog>)arg1 flags:(unsigned long long)arg2;
@end

