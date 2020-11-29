//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServiceAccount, NSArray, NSManagedObjectContext;
@protocol GTServiceOrganizationAdapter;

@interface GTServiceOrganizationUpdater : NSObject
{
    GTServiceAccount *_serviceOrganization;
    id <GTServiceOrganizationAdapter> _fetchedServiceOrganization;
    NSArray *_changedAttributes;
    NSManagedObjectContext *_managedObjectContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSArray *changedAttributes; // @synthesize changedAttributes=_changedAttributes;
@property(retain, nonatomic) id <GTServiceOrganizationAdapter> fetchedServiceOrganization; // @synthesize fetchedServiceOrganization=_fetchedServiceOrganization;
@property(retain, nonatomic) GTServiceAccount *serviceOrganization; // @synthesize serviceOrganization=_serviceOrganization;
- (BOOL)update:(id *)arg1;
- (id)initWithServiceOrganization:(id)arg1 fetchedServiceOrganization:(id)arg2;

@end

