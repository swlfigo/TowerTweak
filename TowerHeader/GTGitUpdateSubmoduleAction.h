//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitRemoteConnection, GTGitSubmoduleInfo;

@interface GTGitUpdateSubmoduleAction : GTGitAction
{
    GTGitSubmoduleInfo *_submoduleInfo;
    GTGitRemoteConnection *_remoteConnection;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) GTGitRemoteConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) GTGitSubmoduleInfo *submoduleInfo; // @synthesize submoduleInfo=_submoduleInfo;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end

