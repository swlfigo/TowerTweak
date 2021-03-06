//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNGitCommandDelegate-Protocol.h"

@class GTCompareToolConfiguration, NSImage, NSString;

@interface GTCompareTool : NSObject <FNGitCommandDelegate>
{
    BOOL _supportsMerge;
    BOOL _supportsDiffChangeset;
    BOOL _available;
    GTCompareToolConfiguration *_configuration;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_launchScript;
    NSString *_applicationPath;
    NSImage *_applicationIcon;
    NSString *_fullLaunchScriptPath;
}

+ (id)compareToolWithConfiguration:(id)arg1;
+ (id)compareToolForIdentifier:(id)arg1;
+ (id)allCompareToolsSortedByName;
+ (id)allMergeToolsSortedByName;
+ (id)allDiffToolsSortedByName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fullLaunchScriptPath; // @synthesize fullLaunchScriptPath=_fullLaunchScriptPath;
@property(retain, nonatomic) NSImage *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
@property(retain, nonatomic) NSString *applicationPath; // @synthesize applicationPath=_applicationPath;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(nonatomic) BOOL supportsDiffChangeset; // @synthesize supportsDiffChangeset=_supportsDiffChangeset;
@property(nonatomic) BOOL supportsMerge; // @synthesize supportsMerge=_supportsMerge;
@property(retain, nonatomic) NSString *launchScript; // @synthesize launchScript=_launchScript;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) GTCompareToolConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSString *description;
- (void)initializeWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

