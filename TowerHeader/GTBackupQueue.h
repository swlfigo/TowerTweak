//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface GTBackupQueue : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)enqueueOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)runOperation:(id)arg1 error:(id *)arg2;

@end

