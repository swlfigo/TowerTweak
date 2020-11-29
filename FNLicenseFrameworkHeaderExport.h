struct _NSZone {
};



/*****************************************************************/

@protocol NSObject
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
- (char)isEqual:(id)v1;
- (Class)class;
- (id)self;
- (id)performSelector:(SEL)v1;
- (id)performSelector:(SEL)v1 withObject:(id)v2;
- (id)performSelector:(SEL)v1 withObject:(id)v2 withObject:(id)v3;
- (char)isProxy;
- (char)isKindOfClass:(Class)v1;
- (char)isMemberOfClass:(Class)v1;
- (char)conformsToProtocol:(id)v1;
- (char)respondsToSelector:(SEL)v1;
- (id)retain;
- (oneway  void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (struct _NSZone *)zone;
- (unsigned long long)hash;
- (Class)superclass;
- (id)description;

@optional
- (id)debugDescription;
@end


/*****************************************************************/

@protocol FNLicensingCancelling<NSObject>
- (void)cancel;
@end


/*****************************************************************/

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)v1;
@end


/*****************************************************************/

@interface NSError (FNLicenseAPIErrorMapping)
+ (id)licensingErrorFromLicensingAPIError:(id)v1;
@end


/*****************************************************************/

@interface NSError (FNLicensing)
+ (void)load;
+ (id)licensingErrorWithCode:(long long)v1 userInfo:(id)v2;
+ (void)loadErrorDefinitionsForLicensingErrorDomain;
@end


/*****************************************************************/

@interface NSError (FNLicensingAPI)
+ (void)load;
+ (id)licensingAPIErrorWithCode:(long long)v1 userInfo:(id)v2;
+ (id)licensingAPIConnectionErrorWithNSURLError:(id)v1 userInfo:(id)v2;
+ (id)licensingAPIParseErrorWithError:(id)v1 userInfo:(id)v2;
+ (void)loadErrorDefinitionsForLicensingAPIErrorDomain;
@end


/*****************************************************************/

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


/*****************************************************************/

@interface FNLicenseHashGenerator : NSObject {
    FNProductConfig * _productConfig;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
- (id)initWithProductConfig:(id)v1;
- (id)generateHashForLicense:(id)v1;
- (id)generateHashForDictionary:(id)v1;
- (id)hashSourceForLicense:(id)v1;
- (id)hashSourceForDictionary:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingUpdateProductLicenseOperation : FNLicensingAPIOperation {
    char _updatesStore;
    FNLicensingProductLicenseUpdateInfo * _updateInfo;
    FNProductLicense * _license;
    FNLicensingAPIClient * _apiClient;
}
@property (retain,nonatomic) FNLicensingProductLicenseUpdateInfo * updateInfo;
@property (retain,nonatomic) FNProductLicense * license;
@property (retain,nonatomic) FNLicensingAPIClient * apiClient;
@property (nonatomic) char updatesStore;
+ (id)operationProductConfig:(id)v1 updateInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 updateInfo:(id)v2;
- (void)performRequest;
- (void)operationDidFinish;
- (void)cancel;
- (void)apiClientDidReceiveResponse:(id)v1;
- (void)apiClientDidCancelRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNStringToBoolTransformer : NSValueTransformer
+ (char)allowsReverseTransformation;
- (id)transformedValue:(id)v1;
- (id)reverseTransformedValue:(id)v1;
@end


/*****************************************************************/

@interface FNLicensingAPIRequest : FNRESTAPIRequest
@end


/*****************************************************************/

@interface FNLicensingAPIRequestConfiguration : NSObject {
    unsigned long long _defaultRequestCachePolicy;
    NSDictionary * _HTTPMethodNames;
}
@property (nonatomic) unsigned long long defaultRequestCachePolicy;
@property (retain,nonatomic) NSDictionary * HTTPMethodNames;
+ (id)sharedConfiguration;
- (id)init;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIOperation : FNLicensingOperation {
    char _loaded;
    FNLicensingAPIRequest * _request;
    NSError * _responseError;
}
@property (retain,nonatomic) FNLicensingAPIRequest * request;
@property (retain,nonatomic) NSError * responseError;
@property (nonatomic,getter=isLoaded) char loaded;
- (void)main;
- (void)performRequest;
- (void)waitUntilLoaded;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPITrialLicense : FNRESTAPIModel {
    NSString * _productName;
    NSString * _productVersion;
    NSString * _user;
    NSString * _machine;
    NSString * _type;
    NSString * _code;
    NSString * _expires;
    NSDate * _expirationDate;
    NSArray * _keys;
}
@property (readonly,nonatomic) NSString * productName;
@property (readonly,nonatomic) NSString * productVersion;
@property (readonly,nonatomic) NSString * user;
@property (readonly,nonatomic) NSString * machine;
@property (readonly,nonatomic) NSString * type;
@property (readonly,nonatomic) NSString * code;
@property (readonly,nonatomic) NSString * expires;
@property (readonly,nonatomic) NSDate * expirationDate;
@property (readonly,nonatomic) NSArray * keys;
+ (id)propertyMappings;
+ (id)objectWithJSONObject:(id)v1;
+ (id)trialLicenseWithJSONObject:(id)v1;
- (char)isEqualToLicensingAPITrialLicense:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIResponse : FNRESTAPIResponse
@end


/*****************************************************************/

@interface FNLicensingAPIErrorJSONParser : NSObject
+ (id)parseErrorsFromJSONData:(id)v1 error:(id *)v2;
@end


/*****************************************************************/

@interface FNLicensingAPIRequestOperation : FNRESTAPIRequestOperation {
    id _result;
    FNLicensingAPIResponse * _APIResponse;
    FNProductConfig * _productConfig;
    void (^ /* unknown block signature */)(void) _completionHandler;
}
@property (retain,nonatomic) FNLicensingAPIResponse * APIResponse;
@property (retain,nonatomic) id result;
@property (readonly,nonatomic) FNProductConfig * productConfig;
@property (copy,nonatomic) void (^ /* unknown block signature */)(void) completionHandler;
+ (id)defaultOptions;
- (id)initWithProductConfig:(id)v1 method:(id)v2 path:(id)v3 params:(id)v4;
- (void)setRequestBodyWithParams:(id)v1 contentType:(id)v2;
- (id)handleConnectionError:(id)v1;
- (id)handleAPIErrorResponse:(id)v1 data:(id)v2;
- (void)requestDidFinish;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingProductLicenseDeactivationInfo : NSObject {
    NSString * _licenseIdentifier;
}
@property (retain,nonatomic) NSString * licenseIdentifier;
+ (id)deactivationInfoWithLicenseIdentifier:(id)v1;
- (id)initWithLicenseIdentifier:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIHelpers : NSObject
+ (id)makeAPIURLWithProductConfig:(id)v1 resourcePath:(id)v2 params:(id)v3;
+ (id)makeAPIURLWithHost:(id)v1 resourcePath:(id)v2 params:(id)v3;
+ (id)makeAPIRequestParamsWithOptions:(id)v1 defaultOptions:(id)v2;
+ (id)makeAPIResourcePathWithPathComponents:(id)v1;
+ (id)activateLicenseAPIResourcePathForProductWithName:(id)v1;
+ (id)updateLicenseAPIResourcePathForProductWithName:(id)v1 activationIdentifier:(id)v2;
+ (id)deactivateLicenseAPIResourcePathForProductWithName:(id)v1 activationIdentifier:(id)v2;
+ (id)registerTrialAPIResourcePathForProductWithName:(id)v1;
+ (id)resetTrialAPIResourcePathForProductWithName:(id)v1;
+ (id)registerBetaAPIResourcePathForProductWithName:(id)v1;
@end


/*****************************************************************/

@interface FNLicensingProductLicenseUpdateInfo : NSObject {
    NSString * _licenseIdentifier;
}
@property (retain,nonatomic) NSString * licenseIdentifier;
+ (id)updateInfoWithLicenseIdentifier:(id)v1;
- (id)initWithLicenseIdentifier:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIRegisterTrialRequestOperation : FNLicensingAPIRequestOperation
+ (id)requestWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (id)makeParamsWithProductConfig:(id)v1;
@end


/*****************************************************************/

@interface FNLicensingOperation : FNOperation<FNLicensingCancelling> {
    FNProductConfig * _productConfig;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly,copy) NSString * description;
@property (readonly,copy) NSString * debugDescription;
+ (id)operationWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (void)execute;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

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
- (id)copyWithZone:(struct _NSZone *)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingRegisterBetaOperation : FNLicensingAPIOperation {
    char _updatesStore;
    FNBetaLicense * _license;
    FNLicensingAPIClient * _apiClient;
}
@property (retain,nonatomic) FNLicensingAPIClient * apiClient;
@property (retain,nonatomic) FNBetaLicense * license;
@property (nonatomic) char updatesStore;
- (void)operationWillExecute;
- (void)performRequest;
- (void)operationDidFinish;
- (void)cancel;
- (void)apiClientDidReceiveResponse:(id)v1;
- (void)apiClientDidCancelRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIUpdateLicenseRequestOperation : FNLicensingAPIRequestOperation {
    FNLicensingProductLicenseUpdateInfo * _deactivationInfo;
    FNLicensingProductLicenseUpdateInfo * _updateInfo;
}
@property (retain,nonatomic) FNLicensingProductLicenseUpdateInfo * updateInfo;
@property (readonly,nonatomic) FNLicensingProductLicenseUpdateInfo * deactivationInfo;
+ (id)requestWithProductConfig:(id)v1 updateInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 updateInfo:(id)v2;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIClient : NSObject {
    FNProductConfig * _productConfig;
    NSOperationQueue * _queue;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
@property (retain,nonatomic) NSOperationQueue * queue;
+ (id)apiClientWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (id)executeRequest:(id)v1 error:(id *)v2;
- (id)enqueueRequest:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void)cancelAllRequests;
- (id)allRequests;
- (id)activateLicenseWithActivationInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)deactivateLicenseWithDeactivationInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)updateLicenseWithUpdateInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)registerTrialWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)resetTrialWithEmail:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)registerBetaWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicenseManager : NSObject {
    FNProductConfig * _productConfig;
    FNProductStatus * _productStatus;
    NSOperationQueue * _queue;
}
@property (retain,nonatomic) NSOperationQueue * queue;
@property (readonly,nonatomic) FNProductConfig * productConfig;
@property (readonly,nonatomic) FNProductStatus * productStatus;
+ (id)managerWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (id)loadProductStatus;
- (id)activateLicenseWithActivationInfo:(id)v1 error:(id *)v2;
- (id)activateLicenseWithActivationInfo:(id)v1 updatesStore:(char)v2 error:(id *)v3;
- (id)activateLicenseWithActivationInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)activateLicenseWithActivationInfo:(id)v1 updatesStore:(char)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (char)deactivateLicenseWithDeactivationInfo:(id)v1 error:(id *)v2;
- (char)deactivateLicenseWithDeactivationInfo:(id)v1 updatesStore:(char)v2 error:(id *)v3;
- (id)deactivateLicenseWithDeactivationInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)deactivateLicenseWithDeactivationInfo:(id)v1 updatesStore:(char)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (id)updateLicenseWithUpdateInfo:(id)v1 error:(id *)v2;
- (id)updateLicenseWithUpdateInfo:(id)v1 updatesStore:(char)v2 error:(id *)v3;
- (id)updateLicenseWithUpdateInfo:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (id)updateLicenseWithUpdateInfo:(id)v1 updatesStore:(char)v2 completionHandler:(void (^ /* unknown block signature */)(void))v3;
- (char)deleteProductLicense:(id *)v1;
- (id)registerTrial:(id *)v1;
- (id)registerTrial:(char)v1 error:(id *)v2;
- (id)registerTrialWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)registerTrial:(char)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (char)deleteTrialLicense:(id *)v1;
- (id)registerBeta:(id *)v1;
- (id)registerBeta:(char)v1 error:(id *)v2;
- (id)registerBetaWithCompletionHandler:(void (^ /* unknown block signature */)(void))v1;
- (id)registerBeta:(char)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (char)deleteBetaLicense:(id *)v1;
- (char)hasBetaLicenseFile;
- (char)runOperation:(id)v1 error:(id *)v2;
- (void)enqueueOperation:(id)v1 completionHandler:(void (^ /* unknown block signature */)(void))v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingProductLicenseActivationInfo : NSObject {
    NSString * _email;
    NSString * _licenseCode;
}
@property (retain,nonatomic) NSString * email;
@property (retain,nonatomic) NSString * licenseCode;
+ (id)activationInfoWithEmail:(id)v1 licenseCode:(id)v2;
- (id)initWithEmail:(id)v1 licenseCode:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIBetaLicense : FNRESTAPIModel {
    NSString * _closedStatus;
    NSString * _productName;
    NSString * _user;
    NSString * _machine;
    NSString * _type;
    NSString * _code;
    NSString * _couponCode;
    NSDate * _couponExpirationDate;
    NSString * _expires;
    NSDate * _expirationDate;
    NSArray * _keys;
}
@property (readonly,nonatomic) NSString * closedStatus;
@property (readonly,nonatomic) NSString * productName;
@property (readonly,nonatomic) NSString * user;
@property (readonly,nonatomic) NSString * machine;
@property (readonly,nonatomic) NSString * type;
@property (readonly,nonatomic) NSString * code;
@property (readonly,nonatomic) NSString * couponCode;
@property (readonly,nonatomic) NSDate * couponExpirationDate;
@property (readonly,nonatomic) NSString * expires;
@property (readonly,nonatomic) NSDate * expirationDate;
@property (readonly,nonatomic) NSArray * keys;
+ (id)propertyMappings;
+ (id)betaLicenseWithJSONObject:(id)v1;
- (char)isEqualToLicensingAPIBetaLicense:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIProductLicense : FNRESTAPIModel {
    char _revoked;
    NSString * _identifier;
    NSString * _masked;
    NSString * _productName;
    NSString * _user;
    NSString * _email;
    NSString * _machine;
    NSString * _type;
    NSString * _code;
    NSString * _expires;
    NSString * _plan;
    NSString * _planIdentifier;
    NSArray * _features;
    NSDate * _expirationDate;
}
@property (readonly,nonatomic) NSString * identifier;
@property (readonly,nonatomic) NSString * masked;
@property (readonly,nonatomic) NSString * productName;
@property (readonly,nonatomic) NSString * user;
@property (readonly,nonatomic) NSString * email;
@property (readonly,nonatomic) NSString * machine;
@property (readonly,nonatomic) NSString * type;
@property (readonly,nonatomic) NSString * code;
@property (readonly,nonatomic) NSString * expires;
@property (readonly,nonatomic) NSString * plan;
@property (readonly,nonatomic) NSString * planIdentifier;
@property (readonly,nonatomic) NSArray * features;
@property (readonly,nonatomic) NSDate * expirationDate;
@property (readonly,nonatomic,getter=isRevoked) char revoked;
+ (id)propertyMappings;
+ (id)objectWithJSONObject:(id)v1;
+ (id)productLicenseWithJSONObject:(id)v1;
- (char)isEqualToLicensingAPIProductLicense:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIRegisterBetaRequestOperation : FNLicensingAPIRequestOperation
+ (id)requestWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (id)makeParamsWithProductConfig:(id)v1;
@end


/*****************************************************************/

@interface FNLicensingAPIDeactivateLicenseRequestOperation : FNLicensingAPIRequestOperation {
    FNLicensingProductLicenseDeactivationInfo * _deactivationInfo;
}
@property (retain,nonatomic) FNLicensingProductLicenseDeactivationInfo * deactivationInfo;
+ (id)requestWithProductConfig:(id)v1 deactivationInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 deactivationInfo:(id)v2;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNMachineIdentifier : NSObject
+ (id)obfuscatedMachineUUID;
+ (id)obfuscateMachineUUID:(id)v1;
+ (id)salt;
@end


/*****************************************************************/

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
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingRegisterTrialOperation : FNLicensingAPIOperation {
    char _updatesStore;
    FNTrialLicense * _license;
    FNLicensingAPIClient * _apiClient;
}
@property (retain,nonatomic) FNLicensingAPIClient * apiClient;
@property (retain,nonatomic) FNTrialLicense * license;
@property (nonatomic) char updatesStore;
- (void)operationWillExecute;
- (void)performRequest;
- (void)operationDidFinish;
- (void)cancel;
- (void)apiClientDidReceiveResponse:(id)v1;
- (void)apiClientDidCancelRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicenseValidator : NSObject {
    FNProductConfig * _productConfig;
    FNLicenseHashGenerator * _licenseHashGenerator;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
@property (retain,nonatomic) FNLicenseHashGenerator * licenseHashGenerator;
- (id)initWithProductConfig:(id)v1;
- (char)validateBetaLicense:(id)v1;
- (char)validateTrialLicense:(id)v1;
- (char)validateProductLicense:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIResetTrialRequestOperation : FNLicensingAPIRequestOperation {
    NSString * _email;
}
@property (retain,nonatomic) NSString * email;
+ (id)requestWithProductConfig:(id)v1 email:(id)v2;
- (id)initWithProductConfig:(id)v1 email:(id)v2;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (id)makeParamsWithProductConfig:(id)v1 email:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicenseStoreManager : NSObject {
    FNProductConfig * _productConfig;
}
@property (retain,nonatomic) FNProductConfig * productConfig;
+ (id)managerWithProductConfig:(id)v1;
- (id)initWithProductConfig:(id)v1;
- (id)readProductLicense:(id *)v1;
- (id)readTrialLicense:(id *)v1;
- (id)readBetaLicense:(id *)v1;
- (char)deleteLicense:(id)v1 error:(id *)v2;
- (char)storeLicense:(id)v1 error:(id *)v2;
- (char)createDestinationDirectoryAtFileURLIfNeeded:(id)v1 error:(id *)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNExpirationDateStringValueToExpirationDateTransformer : NSValueTransformer
+ (Class)transformedValueClass;
+ (char)allowsReverseTransformation;
+ (id)iso8601DateFormatterWithoutSubsecondPrecision;
- (id)transformedValue:(id)v1;
- (id)reverseTransformedValue:(id)v1;
@end


/*****************************************************************/

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
- (id)copyWithZone:(struct _NSZone *)v1;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIActivateLicenseRequestOperation : FNLicensingAPIRequestOperation {
    FNLicensingProductLicenseActivationInfo * _activationInfo;
}
@property (retain,nonatomic) FNLicensingProductLicenseActivationInfo * activationInfo;
@property (readonly,nonatomic) FNProductLicense * license;
+ (id)requestWithProductConfig:(id)v1 activationInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 activationInfo:(id)v2;
- (char)parseResponseData:(id)v1 error:(id *)v2;
- (id)makeParamsWithProductConfig:(id)v1 activationInfo:(id)v2;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIBetaLicenseJSONParser : FNRESTAPIJSONParser
+ (id)parseBetaLicenseFromJSONData:(id)v1 error:(id *)v2;
+ (id)parseBetaLicensesFromJSONData:(id)v1 error:(id *)v2;
@end


/*****************************************************************/

@interface FNUserIdentifier : NSObject
+ (id)obfuscatedUserUUID;
+ (id)obfuscateUserName:(id)v1;
@end


/*****************************************************************/

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
- (id)dictionaryRepresentation;
- (char)isEqual:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIProductLicenseJSONParser : FNRESTAPIJSONParser
+ (id)parseProductLicenseFromJSONData:(id)v1 error:(id *)v2;
+ (id)parseProductLicensesFromJSONData:(id)v1 error:(id *)v2;
@end


/*****************************************************************/

@interface FNSystemInfo : NSObject {
    char _uses64BitKernelExtensions;
    NSString * _osVersion;
    NSString * _kernelVersion;
    NSString * _modelName;
    NSString * _modelIdentifier;
    NSString * _processorName;
    NSString * _processorSpeed;
    unsigned long long _numberOfProcessors;
    unsigned long long _totalNumberOfCores;
    NSString * _physicalMemory;
    NSString * _hardwareUUID;
    NSString * _machineName;
    NSString * _userName;
}
@property (retain,nonatomic) NSString * osVersion;
@property (retain,nonatomic) NSString * kernelVersion;
@property (nonatomic) char uses64BitKernelExtensions;
@property (retain,nonatomic) NSString * modelName;
@property (retain,nonatomic) NSString * modelIdentifier;
@property (retain,nonatomic) NSString * processorName;
@property (retain,nonatomic) NSString * processorSpeed;
@property (nonatomic) unsigned long long numberOfProcessors;
@property (nonatomic) unsigned long long totalNumberOfCores;
@property (retain,nonatomic) NSString * physicalMemory;
@property (retain,nonatomic) NSString * hardwareUUID;
@property (retain,nonatomic) NSString * userName;
@property (readonly,nonatomic) NSString * machineName;
+ (id)systemInfo;
- (id)init;
- (void)setValuesFromSystemInformation:(id)v1;
- (id)systemInformation;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

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
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNReloadProductStatusOperation : FNLicensingOperation {
    FNProductStatus * _productStatus;
}
@property (retain,nonatomic) FNProductStatus * productStatus;
- (void)main;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPIRequestErrorHandler : NSObject {
    NSURLRequest * _request;
    NSHTTPURLResponse * _response;
    NSData * _data;
}
@property (retain,nonatomic) NSURLRequest * request;
@property (retain,nonatomic) NSHTTPURLResponse * response;
@property (retain,nonatomic) NSData * data;
+ (id)errorFromNSURLError:(id)v1 request:(id)v2;
+ (id)errorFromRequest:(id)v1 response:(id)v2 data:(id)v3;
+ (id)requestErrorHandlerWithRequest:(id)v1 response:(id)v2 data:(id)v3;
+ (id)makeRequestErrorUserInfoWithRequest:(id)v1;
+ (id)makeResponseErrorUserInfoWithResponse:(id)v1 data:(id)v2;
- (id)init;
- (id)initWithRequest:(id)v1 response:(id)v2 data:(id)v3;
- (id)createError:(id *)v1;
- (long long)errorCodeForErrorName:(id)v1;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingFileHelpers : NSObject
+ (id)licenseFileURLForLicenseType:(id)v1 productConfig:(id)v2;
+ (id)licenseFileNameForLicenseType:(id)v1;
@end


/*****************************************************************/

@interface FNLicensingDeactivateProductLicenseOperation : FNLicensingAPIOperation {
    char _updatesStore;
    FNLicensingProductLicenseDeactivationInfo * _deactivationInfo;
    FNLicenseValidator * _licenseValidator;
    FNLicensingAPIClient * _apiClient;
}
@property (retain,nonatomic) FNLicensingProductLicenseDeactivationInfo * deactivationInfo;
@property (retain,nonatomic) FNLicenseValidator * licenseValidator;
@property (retain,nonatomic) FNLicensingAPIClient * apiClient;
@property (nonatomic) char updatesStore;
+ (id)operationProductConfig:(id)v1 deactivationInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 deactivationInfo:(id)v2;
- (void)performRequest;
- (void)operationDidFinish;
- (void)cancel;
- (void)apiClientDidReceiveResponse:(id)v1;
- (void)apiClientDidCancelRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingActivateProductLicenseOperation : FNLicensingAPIOperation {
    char _updatesStore;
    FNLicensingProductLicenseActivationInfo * _activationInfo;
    FNProductLicense * _license;
    FNLicensingAPIClient * _apiClient;
}
@property (retain,nonatomic) FNLicensingAPIClient * apiClient;
@property (retain,nonatomic) FNProductLicense * license;
@property (retain,nonatomic) FNLicensingProductLicenseActivationInfo * activationInfo;
@property (nonatomic) char updatesStore;
+ (id)operationProductConfig:(id)v1 activationInfo:(id)v2;
- (id)initWithProductConfig:(id)v1 activationInfo:(id)v2;
- (void)operationWillExecute;
- (void)performRequest;
- (void)operationDidFinish;
- (void)cancel;
- (void)apiClientDidReceiveResponse:(id)v1;
- (void)apiClientDidCancelRequest;
- (void).cxx_destruct;
@end


/*****************************************************************/

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
- (id)dictionaryRepresentation;
- (id)init;
- (char)isEqual:(id)v1;
- (id)description;
- (void).cxx_destruct;
@end


/*****************************************************************/

@interface FNLicensingAPITrialLicenseJSONParser : FNRESTAPIJSONParser
+ (id)parseTrialLicenseFromJSONData:(id)v1 error:(id *)v2;
+ (id)parseTrialLicensesFromJSONData:(id)v1 error:(id *)v2;
@end
