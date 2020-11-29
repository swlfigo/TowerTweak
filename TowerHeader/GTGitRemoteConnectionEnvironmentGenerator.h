//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRemoteConnection, NSDictionary, NSMutableDictionary, NSURL;

@interface GTGitRemoteConnectionEnvironmentGenerator : NSObject
{
    GTGitRemoteConnection *_remoteConnection;
    NSDictionary *_processEnvironment;
    NSURL *_askpassProgramURL;
    NSURL *_SSHWrapperScriptURL;
    NSMutableDictionary *_environment;
}

+ (id)environmentForRemoteConnection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSURL *SSHWrapperScriptURL; // @synthesize SSHWrapperScriptURL=_SSHWrapperScriptURL;
@property(retain, nonatomic) NSURL *askpassProgramURL; // @synthesize askpassProgramURL=_askpassProgramURL;
@property(retain, nonatomic) NSDictionary *processEnvironment; // @synthesize processEnvironment=_processEnvironment;
@property(retain, nonatomic) GTGitRemoteConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)setUpEnvironmentForNoSSLCertificateVerification;
- (void)setUpEnvironmentForHTTPProxy;
- (void)setUpEnvironmentForAskpass;
- (void)setUpEnvironmentForSSHWrapper;
- (void)setUpEnvironmentForPrivateKeyAuthentication;
- (void)setUpEnvironmentForServiceAccountTokenAuthentication;
- (void)setUpEnvironmentForPasswordAuthentication;
- (BOOL)remoteConnectionRequiresAskpass;
- (BOOL)remoteConnectionRequiresSSHWrapper;
- (BOOL)remoteConnectionRequiresSkippingSSLVerification;
- (BOOL)remoteConnectionRequiresHTTPProxy;
- (BOOL)remoteConnectionRequiresPrivateKeyAuthentication;
- (BOOL)remoteConnectionRequiresServiceAccountTokenAuthentication;
- (BOOL)remoteConnectionRequiresPasswordAuthentication;
- (id)makeGitCommandEnvironmentVariables;
- (id)initWithRemoteConnection:(id)arg1 processEnvironment:(id)arg2 askpassURL:(id)arg3 SSHWrapperScriptURL:(id)arg4;
- (id)initWithRemoteConnection:(id)arg1;

@end

