//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FNCommandOperation, NSData;

@protocol FNCommandOperationDelegate <NSObject>

@optional
- (void)command:(FNCommandOperation *)arg1 didReceiveStandardErrorData:(NSData *)arg2;
- (void)command:(FNCommandOperation *)arg1 didReceiveStandardOutputData:(NSData *)arg2;
- (void)commandDidTerminate:(FNCommandOperation *)arg1;
- (void)commandDidFailToLaunch:(FNCommandOperation *)arg1;
@end

