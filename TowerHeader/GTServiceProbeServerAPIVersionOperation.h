//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAccountOperation.h"

@interface GTServiceProbeServerAPIVersionOperation : GTServiceAccountOperation
{
    unsigned long long _detectedAPIVersion;
}

+ (id)operationWithManagedObjectContext:(id)arg1 serviceAccount:(id)arg2;
@property unsigned long long detectedAPIVersion; // @synthesize detectedAPIVersion=_detectedAPIVersion;
- (void)operationDidExecute;
- (BOOL)updateServiceWithServerAPIVersion:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)validateProbeServerAPIVersion;
- (void)performFetchRequest;
- (void)execute;
- (id)title;

@end
