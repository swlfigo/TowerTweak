//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTGitCloneOperationDelegate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface GTGitCloningQueue : NSObject <GTGitCloneOperationDelegate>
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_operationsByUUID;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *operationsByUUID; // @synthesize operationsByUUID=_operationsByUUID;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)cloneOperationDidFinish:(id)arg1;
- (void)cloneOperation:(id)arg1 didUpdateProgress:(id)arg2;
- (void)cloneOperationDidStart:(id)arg1;
- (id)cloneOperationForUUID:(id)arg1;
- (id)allCloneOperationUUIDs;
- (id)allCloneOperations;
- (void)cancelOperationWithUUID:(id)arg1;
- (void)enqueueOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)runOperation:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
