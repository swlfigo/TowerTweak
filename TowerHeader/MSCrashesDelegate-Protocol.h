//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSCrashes, MSErrorReport, NSArray, NSError;

@protocol MSCrashesDelegate <NSObject>

@optional
- (NSArray *)attachmentsWithCrashes:(MSCrashes *)arg1 forErrorReport:(MSErrorReport *)arg2;
- (void)crashes:(MSCrashes *)arg1 didFailSendingErrorReport:(MSErrorReport *)arg2 withError:(NSError *)arg3;
- (void)crashes:(MSCrashes *)arg1 didSucceedSendingErrorReport:(MSErrorReport *)arg2;
- (void)crashes:(MSCrashes *)arg1 willSendErrorReport:(MSErrorReport *)arg2;
- (BOOL)crashes:(MSCrashes *)arg1 shouldProcessErrorReport:(MSErrorReport *)arg2;
@end

