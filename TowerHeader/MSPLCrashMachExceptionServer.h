//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSPLCrashMachExceptionServer : NSObject
{
    // Error parsing type: ^{plcrash_exception_server_context=IIII^?^v{_opaque_pthread_mutex_t=q[56c]}{_opaque_pthread_cond_t=q[40c]}ABB}, name: _serverContext
}

- (void)dealloc;
- (id)exceptionPortWithMask:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)copySendRightForServerAndReturningError:(id *)arg1;
@property(readonly, nonatomic) unsigned int serverThread;
- (id)initWithCallBack:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 error:(id *)arg3;

@end

