//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTOperation, GTProgress;

@protocol GTOperationDelegate <NSObject>

@optional
- (void)operationDidFinish:(GTOperation *)arg1;
- (void)operation:(GTOperation *)arg1 didUpdateProgress:(GTProgress *)arg2;
- (void)operationDidStart:(GTOperation *)arg1;
@end

