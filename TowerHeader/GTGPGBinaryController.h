//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitGlobalConfigManager, NSArray, NSOperationQueue;

@interface GTGPGBinaryController : NSObject
{
    NSOperationQueue *_queue;
    GTGitGlobalConfigManager *_configManager;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitGlobalConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)controllerDidLoadGPGBinariesForUpdate:(id)arg1 configuredBinaryPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)controllerDidLoadGPGBinaries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDefaultGPGBinaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setGPGBinaryAsDefault:(id)arg1;
- (void)loadAvailableGPGBinariesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *gpgBinaries;

@end

