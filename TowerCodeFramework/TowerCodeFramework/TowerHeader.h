//
//  TowerHeader.h
//  TowerCodeFramework
//
//  Created by Sylar on 2021/3/1.
//

#import <Foundation/Foundation.h>

@interface FNAbstractLicense : NSObject{
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


@interface FNProductConfig : NSObject{
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


@interface FNLicenseHashGenerator : NSObject {
    FNProductConfig * _productConfig;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
- (id)initWithProductConfig:(id)v1;
- (id)generateHashForLicense:(id)v1;
- (id)generateHashForDictionary:(id)v1;
- (id)hashSourceForLicense:(id)v1;
- (id)hashSourceForDictionary:(id)v1;
@end
