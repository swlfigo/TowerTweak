//
//  TowerHeader.h
//  TowerTweak
//
//  Created by Sylar on 2020/11/29.
//

#ifndef TowerHeader_h
#define TowerHeader_h

#import <Cocoa/Cocoa.h>
@interface GTNavigationBarBanderoleItemConfig : NSObject

@end

@interface GTLicenseBadgeConfig : GTNavigationBarBanderoleItemConfig
- (void)trialWillExpireInDays:(long long)arg1;
@end

@interface GTProductConfig : NSObject
@property(nonatomic) unsigned long long numberOfTrialDays; // @synthesize numberOfTrialDays=_numberOfTrialDays;
@property(copy, nonatomic) NSString *developerSecret; // @synthesize developerSecret=_developerSecret;
@property(copy, nonatomic) NSURL *licensingBaseURL; // @synthesize licensingBaseURL=_licensingBaseURL;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(copy, nonatomic) NSString *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property(copy, nonatomic) NSURL *licensesDirectoryURL; // @synthesize licensesDirectoryURL=_licensesDirectoryURL;
@property(copy, nonatomic) NSString *hashingSalt; // @synthesize hashingSalt=_hashingSalt;
@property(copy, nonatomic) NSString *operatingSystem; // @synthesize operatingSystem=_operatingSystem;
@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;

@end

@interface GTProductController : NSObject
- (BOOL)hasBetaLicenseFile;
@property(retain, nonatomic) GTProductConfig *productConfig;
@end

@interface FNLicensingHelpers : NSObject
+ (id)obfuscatedMachineUUID;
+ (id)obfuscatedUserName;
+ (id)obfuscateMachineUUID:(id)v1;
+ (id)obfuscateUserName:(id)v1;
+ (unsigned long long)convertTimeIntervalToDaysLeft:(double)v1;
+ (id)machineName;
+ (id)legacyExpirationDateStringForExpirationDate:(id)v1;
+ (id)expirationDateForExpirationDateString:(id)v1;
+ (id)expirationDateStringForExpirationDate:(id)v1;
@end


@interface FNLicenseValidator : NSObject {

}


- (id)initWithProductConfig:(id)v1;
- (char)validateBetaLicense:(id)v1;
- (char)validateTrialLicense:(id)v1;
- (char)validateProductLicense:(id)v1;
@end

@interface FNAbstractLicense : NSObject {
    NSString * _productName;
    NSString * _user;
    NSString * _machine;
    NSString * _type;
    NSString * _code;
}
@property (retain,nonatomic) NSString * productName;
@property (retain,nonatomic) NSString * user;
@property (retain,nonatomic) NSString * machine;
@property (retain,nonatomic) NSString * type;
@property (retain,nonatomic) NSString * code;
- (void)setValuesFromDictionary:(id)v1;

@end

@interface FNProductConfig : NSObject<NSCopying> {
    char _beta;
    NSString * _productName;
    NSString * _productVersion;
    NSString * _hashingSalt;
    NSURL * _licensesDirectoryURL;
    NSString * _machineUUID;
    NSString * _machineName;
    NSString * _userName;
    NSString * _operatingSystem;
    NSURL * _licensingBaseURL;
    NSString * _developerSecret;
    unsigned long long _numberOfTrialDays;
}
@property (retain,nonatomic) NSString * productName;
@property (retain,nonatomic) NSString * productVersion;
@property (retain,nonatomic) NSString * hashingSalt;
@property (retain,nonatomic) NSURL * licensesDirectoryURL;
@property (nonatomic,getter=isBeta) char beta;
@property (retain,nonatomic) NSString * machineUUID;
@property (retain,nonatomic) NSString * machineName;
@property (retain,nonatomic) NSString * userName;
@property (retain,nonatomic) NSString * operatingSystem;
@property (retain,nonatomic) NSURL * licensingBaseURL;
@property (retain,nonatomic) NSString * developerSecret;
@property (nonatomic) unsigned long long numberOfTrialDays;
- (id)init;
@end


@interface FNProductLicense : FNAbstractLicense {
    char _revoked;
    NSString * _identifier;
    NSString * _license;
    NSString * _email;
    NSString * _masked;
    NSString * _plan;
    NSString * _planIdentifier;
    NSString * _expires;
    NSDate * _expirationDate;
    NSArray * _features;
    double _timeLeft;
}
@property (retain,nonatomic) NSString * identifier;
@property (retain,nonatomic) NSString * email;
@property (retain,nonatomic) NSString * license;
@property (retain,nonatomic) NSString * masked;
@property (retain,nonatomic) NSString * plan;
@property (retain,nonatomic) NSString * planIdentifier;
@property (nonatomic,getter=isRevoked) char revoked;
@property (retain,nonatomic) NSString * expires;
@property (retain,nonatomic) NSDate * expirationDate;
@property (nonatomic) double timeLeft;
@property (retain,nonatomic) NSArray * features;
@property (readonly,nonatomic,getter=isExpired) char expired;
+ (id)productLicenseFromAPIProductLicense:(id)v1;
+ (id)licenseWithValuesFromDictionary:(id)v1;

@end

@interface FNBetaLicense : FNAbstractLicense {
    char _closed;
    NSString * _couponCode;
    NSDate * _couponExpirationDate;
    NSString * _closedStatus;
    NSString * _expires;
    NSDate * _expirationDate;
    double _timeLeft;
}
@property (retain,nonatomic) NSString * couponCode;
@property (retain,nonatomic) NSDate * couponExpirationDate;
@property (nonatomic,getter=isClosed) char closed;
@property (retain,nonatomic) NSString * closedStatus;
@property (retain,nonatomic) NSString * expires;
@property (retain,nonatomic) NSDate * expirationDate;
@property (nonatomic) double timeLeft;
@property (readonly,nonatomic,getter=isExpired) char expired;
+ (id)betaLicenseFromAPIBetaLicense:(id)v1;
+ (id)licenseWithValuesFromDictionary:(id)v1;
- (id)dictionaryRepresentation;
- (id)init;
- (char)isEqual:(id)v1;
- (id)description;
@end

@interface FNTrialLicense : FNAbstractLicense {
    char _expired;
    NSString * _productVersion;
    NSString * _expires;
    NSDate * _expirationDate;
    double _timeLeft;
}
@property (retain,nonatomic) NSString * productVersion;
@property (retain,nonatomic) NSString * expires;
@property (retain,nonatomic) NSDate * expirationDate;
@property (nonatomic) double timeLeft;
@property (nonatomic,getter=isExpired) char expired;
+ (id)licenseWithValuesFromDictionary:(id)v1;
+ (id)trialLicenseFromAPITrialLicense:(id)v1;


@end

@interface FNProductStatus : NSObject<NSCopying> {
    long long _mode;
    FNBetaLicense * _betaLicense;
    FNTrialLicense * _trialLicense;
    FNProductLicense * _productLicense;
}
@property (retain,nonatomic) FNBetaLicense * betaLicense;
@property (retain,nonatomic) FNTrialLicense * trialLicense;
@property (retain,nonatomic) FNProductLicense * productLicense;
@property (nonatomic) long long mode;
@property (readonly,nonatomic,getter=isWithoutStatus) char withoutStatus;
@property (readonly,nonatomic,getter=isActiveBeta) char activeBeta;
@property (readonly,nonatomic,getter=isExpiredBeta) char expiredBeta;
@property (readonly,nonatomic,getter=isBetaClosed) char betaClosed;
@property (readonly,nonatomic,getter=isActiveTrial) char activeTrial;
@property (readonly,nonatomic,getter=isExpiredTrial) char expiredTrial;
@property (readonly,nonatomic,getter=isActiveLicense) char activeLicense;
@property (readonly,nonatomic,getter=isExpiredLicense) char expiredLicense;
@property (readonly,nonatomic,getter=isRevokedLicense) char revokedLicense;
@property (readonly,nonatomic,getter=isValid) char valid;
@property (readonly,nonatomic,getter=isProductLicenseMode) char productLicenseMode;
@property (readonly,nonatomic,getter=isTrialLicenseMode) char trialLicenseMode;
@property (readonly,nonatomic,getter=isBetaLicenseMode) char betaLicenseMode;
+ (id)statusWithMode:(long long)v1 productLicense:(id)v2 trialLicense:(id)v3 betaLicense:(id)v4;
- (id)initWithMode:(long long)v1 productLicense:(id)v2 trialLicense:(id)v3 betaLicense:(id)v4;
@end

@interface FNLicenseManager : NSObject {
    FNProductConfig * _productConfig;
    FNProductStatus * _productStatus;
}
@property (readonly,nonatomic) FNProductConfig * productConfig;
@property (readonly,nonatomic) FNProductStatus * productStatus;
+ (id)managerWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (id)loadProductStatus;

@end

@interface _TtC5Tower11LicenseInfo : NSObject
{
    // Error parsing type: , name: licenseType
    // Error parsing type: , name: revoked
    // Error parsing type: , name: daysLeft
}

- (id)init;
@property(nonatomic, readonly) NSArray *uniqueID;
@property(nonatomic, readonly) BOOL expired;
@property(nonatomic) long long daysLeft; // @synthesize daysLeft;
@property(nonatomic) BOOL revoked; // @synthesize revoked;
@property(nonatomic, readonly) long long licenseType; // @synthesize licenseType;

@end

@interface _TtC5Tower17LicenseInfoButton : NSButton

+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

#endif /* TowerHeader_h */
