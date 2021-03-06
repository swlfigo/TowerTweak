//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface GTServiceAPIVersionEnumerator : NSObject
{
    NSArray *_apiVersions;
    unsigned long long _currentAPIVersionIndex;
}

+ (id)serviceAPIVersionEnumeratorWithServiceType:(unsigned long long)arg1;
+ (id)serviceAPIVersionEnumeratorWithServiceDefaults:(id)arg1;
+ (id)serviceAPIVersionEnumeratorWithService:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentAPIVersionIndex; // @synthesize currentAPIVersionIndex=_currentAPIVersionIndex;
@property(retain, nonatomic) NSArray *apiVersions; // @synthesize apiVersions=_apiVersions;
@property(readonly, nonatomic) NSNumber *nextAPIVersion;
@property(readonly, nonatomic) NSNumber *currentAPIVersion;
@property(readonly, nonatomic) BOOL hasNextAPIVersion;
- (id)initWithAPIVersions:(id)arg1;

@end

