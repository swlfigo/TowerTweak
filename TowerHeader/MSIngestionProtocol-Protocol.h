//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSEnable-Protocol.h"
#import "NSObject-Protocol.h"

@class NSObject, NSString;

@protocol MSIngestionProtocol <NSObject, MSEnable>
@property(readonly, nonatomic, getter=isReadyToSend) BOOL readyToSend;
- (void)sendAsync:(NSObject *)arg1 eTag:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSHTTPURLResponse *, NSData *, NSError *))arg3;
- (void)sendAsync:(NSObject *)arg1 completionHandler:(void (^)(NSString *, NSHTTPURLResponse *, NSData *, NSError *))arg2;
@end

