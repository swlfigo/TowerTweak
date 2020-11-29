//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNOperation.h>

@class GTGitRemoteConnection, GTProgress, NSDictionary, NSOperationQueue, NSString, NSURL;
@protocol GTGitCloneOperationDelegate;

@interface GTGitCloneOperation : FNOperation
{
    BOOL _loaded;
    id <GTGitCloneOperationDelegate> _delegate;
    NSString *_identifier;
    NSString *_remoteURL;
    NSURL *_destinationURL;
    GTGitRemoteConnection *_remoteConnection;
    NSDictionary *_options;
    GTProgress *_progress;
    NSOperationQueue *_callbackQueue;
}

+ (id)operationWithRemoteURL:(id)arg1 destinationURL:(id)arg2 remoteConnection:(id)arg3 options:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) GTProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) GTGitRemoteConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSString *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id <GTGitCloneOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)waitUntilLoaded;
- (void)gitCommandDidFinishWithError:(id)arg1;
- (void)gitCommandDidFinish:(id)arg1;
- (void)gitCommandDidUpdateProgress:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 destinationURL:(id)arg2 remoteConnection:(id)arg3 options:(id)arg4;
- (id)init;

@end
