//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNKeychain, NSArray, NSString, NSURL;

@interface GTServiceConfig : NSObject
{
    NSURL *_backupFileURL;
    long long _backupFormat;
    NSString *_gitHubAppClientID;
    NSString *_gitHubAppClientSecret;
    NSString *_gitHubAppFingerprint;
    NSString *_gitHubAppNote;
    NSURL *_gitHubAppNoteURL;
    NSArray *_gitHubAppScopes;
    FNKeychain *_defaultKeychain;
    double _updateTimeInterval;
}

+ (id)sharedConfig;
- (void).cxx_destruct;
@property(nonatomic) double updateTimeInterval; // @synthesize updateTimeInterval=_updateTimeInterval;
@property(retain, nonatomic) FNKeychain *defaultKeychain; // @synthesize defaultKeychain=_defaultKeychain;
@property(retain, nonatomic) NSArray *gitHubAppScopes; // @synthesize gitHubAppScopes=_gitHubAppScopes;
@property(retain, nonatomic) NSURL *gitHubAppNoteURL; // @synthesize gitHubAppNoteURL=_gitHubAppNoteURL;
@property(retain, nonatomic) NSString *gitHubAppNote; // @synthesize gitHubAppNote=_gitHubAppNote;
@property(retain, nonatomic) NSString *gitHubAppFingerprint; // @synthesize gitHubAppFingerprint=_gitHubAppFingerprint;
@property(retain, nonatomic) NSString *gitHubAppClientSecret; // @synthesize gitHubAppClientSecret=_gitHubAppClientSecret;
@property(retain, nonatomic) NSString *gitHubAppClientID; // @synthesize gitHubAppClientID=_gitHubAppClientID;
@property(nonatomic) long long backupFormat; // @synthesize backupFormat=_backupFormat;
@property(retain, nonatomic) NSURL *backupFileURL; // @synthesize backupFileURL=_backupFileURL;
- (id)init;

@end

