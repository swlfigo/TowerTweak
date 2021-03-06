//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitFetchResult, GTGitRemoteActivityManager, GTGitRemoteInfo;

@interface GTGitFetchAction : GTGitAction
{
    BOOL _autoFetching;
    GTGitRemoteInfo *_remoteInfo;
    unsigned long long _fetchOptions;
    GTGitFetchResult *_fetchResult;
    GTGitRemoteActivityManager *_remoteActivityManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GTGitRemoteActivityManager *remoteActivityManager; // @synthesize remoteActivityManager=_remoteActivityManager;
@property(retain, nonatomic) GTGitFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic, getter=isAutoFetching) BOOL autoFetching; // @synthesize autoFetching=_autoFetching;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) GTGitRemoteInfo *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidFetchWithResult:(id)arg1;
- (void)main;
- (id)initWithRepository:(id)arg1 remoteInfo:(id)arg2 fetchOptions:(unsigned long long)arg3;

@end

