//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTGPGSignature : NSObject
{
    NSString *_username;
    NSString *_email;
    NSString *_fingerprint;
    NSString *_signingKey;
    long long _status;
}

+ (id)gpgSignatureWithUsername:(id)arg1 email:(id)arg2 fingerprint:(id)arg3 signingKey:(id)arg4 status:(long long)arg5;
+ (long long)statusFromString:(id)arg1;
+ (id)gpgSignatureWithFNGitGPGSignature:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic, getter=isGoodSignature) BOOL goodSignature;
- (id)initWithUsername:(id)arg1 email:(id)arg2 fingerprint:(id)arg3 signingKey:(id)arg4 status:(long long)arg5;

@end

