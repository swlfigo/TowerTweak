//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTGPGKeyDescription : NSObject
{
    NSString *_fingerprint;
    NSString *_username;
    NSString *_email;
    NSString *_validity;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;

@end

