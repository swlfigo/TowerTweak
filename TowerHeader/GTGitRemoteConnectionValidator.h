//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTOperationDelegate-Protocol.h"

@class NSManagedObjectContext, NSOperationQueue, NSString;
@protocol GTGitRemoteConnectionValidatorDelegate;

@interface GTGitRemoteConnectionValidator : NSObject <GTOperationDelegate>
{
    id <GTGitRemoteConnectionValidatorDelegate> _delegate;
    NSManagedObjectContext *_backgroundContext;
    NSOperationQueue *_queue;
}

+ (id)validator;
+ (id)keyPathsForValuesAffectingValidating;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSManagedObjectContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
@property(nonatomic) __weak id <GTGitRemoteConnectionValidatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)validatorDidFinish;
- (void)validatorDidCancel;
- (void)validatorDidFailWithError:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)waitUntilFinished;
- (void)cancel;
- (void)validateRemoteConnection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)validateRemoteConnection:(id)arg1;
- (BOOL)validateRemoteConnection:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isValidating) BOOL validating;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
