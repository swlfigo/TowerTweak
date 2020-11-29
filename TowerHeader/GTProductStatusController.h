//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface GTProductStatusController : NSObject
{
    BOOL _updatingBetaInfo;
    BOOL _updatingProductStatus;
    BOOL _updatingProductLicense;
    double _updateBetaInfoTimeInterval;
    double _updateProductStatusTimeInterval;
    double _updateProductLicenseTimeInterval;
    NSTimer *_updateBetaInfoTimer;
    NSTimer *_updateProductLicenseTimer;
    NSTimer *_updateProductStatusTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *updateProductStatusTimer; // @synthesize updateProductStatusTimer=_updateProductStatusTimer;
@property(retain, nonatomic) NSTimer *updateProductLicenseTimer; // @synthesize updateProductLicenseTimer=_updateProductLicenseTimer;
@property(retain, nonatomic) NSTimer *updateBetaInfoTimer; // @synthesize updateBetaInfoTimer=_updateBetaInfoTimer;
@property(nonatomic, getter=isUpdatingProductLicense) BOOL updatingProductLicense; // @synthesize updatingProductLicense=_updatingProductLicense;
@property(nonatomic, getter=isUpdatingProductStatus) BOOL updatingProductStatus; // @synthesize updatingProductStatus=_updatingProductStatus;
@property(nonatomic, getter=isUpdatingBetaInfo) BOOL updatingBetaInfo; // @synthesize updatingBetaInfo=_updatingBetaInfo;
@property(nonatomic) double updateProductLicenseTimeInterval; // @synthesize updateProductLicenseTimeInterval=_updateProductLicenseTimeInterval;
@property(nonatomic) double updateProductStatusTimeInterval; // @synthesize updateProductStatusTimeInterval=_updateProductStatusTimeInterval;
@property(nonatomic) double updateBetaInfoTimeInterval; // @synthesize updateBetaInfoTimeInterval=_updateBetaInfoTimeInterval;
- (void)updateProductLicense;
- (void)updateProductStatus;
- (void)updateBetaInfo;
- (void)invalidateUpdateProductLicenseTimerIfNeeded;
- (void)stopUpdatingProductLicense;
- (void)startUpdatingProductLicense;
- (void)invalidateUpdateProductStatusTimerIfNeeded;
- (void)stopUpdatingProductStatus;
- (void)startUpdatingProductStatus;
- (void)invalidateUpdateBetaInfoTimerIfNeeded;
- (void)stopUpdatingBetaInfo;
- (void)startUpdatingBetaInfo;
- (void)dealloc;

@end

