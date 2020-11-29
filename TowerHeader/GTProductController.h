//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTProductConfig;

@interface GTProductController : NSObject
{
    GTProductConfig *_productConfig;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) GTProductConfig *productConfig; // @synthesize productConfig=_productConfig;
- (void)controllerDidFailWithError:(id)arg1;
- (void)controllerDidRegisterBeta;
- (void)controllerDidRequestTrialReset;
- (void)controllerDidRegisterTrial;
- (void)controllerDidUpdateLicense;
- (void)controllerDidDeactivateLicense;
- (void)controllerDidActivateLicense;
- (BOOL)hasBetaLicenseFile;
- (BOOL)deleteBetaLicense:(id *)arg1;
- (id)registerBetaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)registerBeta:(BOOL)arg1 error:(id *)arg2;
- (id)registerBeta:(id *)arg1;
- (BOOL)deleteTrialLicense:(id *)arg1;
- (id)registerTrialWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)registerTrial:(BOOL)arg1 error:(id *)arg2;
- (id)registerTrial:(id *)arg1;
- (BOOL)deleteProductLicense:(id *)arg1;
- (id)updateLicenseWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updateLicenseWithIdentifier:(id)arg1 updatesStore:(BOOL)arg2 error:(id *)arg3;
- (id)updateLicenseWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)deactivateLicenseWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deactivateLicenseWithIdentifier:(id)arg1 updatesStore:(BOOL)arg2 error:(id *)arg3;
- (BOOL)deactivateLicenseWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)activateLicenseWithEmail:(id)arg1 licenseCode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)activateLicenseWithEmail:(id)arg1 licenseCode:(id)arg2 updatesStore:(BOOL)arg3 error:(id *)arg4;
- (id)activateLicenseWithEmail:(id)arg1 licenseCode:(id)arg2 error:(id *)arg3;
- (void)reloadStatus;

@end
