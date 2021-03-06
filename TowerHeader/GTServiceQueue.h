//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTOperationDelegate-Protocol.h"

@class GTServiceOperationManager, NSManagedObjectContext, NSOperationQueue, NSString;

@interface GTServiceQueue : NSObject <GTOperationDelegate>
{
    NSManagedObjectContext *_managedObjectContext;
    NSOperationQueue *_queue;
    GTServiceOperationManager *_operationManager;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) GTServiceOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 didUpdateProgress:(id)arg2;
- (void)operationDidStart:(id)arg1;
- (void)enqueueOperation:(id)arg1 coalescing:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enqueueOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)runOperation:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

