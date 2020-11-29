//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServiceRepository;
@protocol GTServiceRepositoryAdapter;

@interface GTServiceRepositoryUpdater : NSObject
{
    GTServiceRepository *_serviceRepository;
    id <GTServiceRepositoryAdapter> _fetchedServiceRepository;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GTServiceRepositoryAdapter> fetchedServiceRepository; // @synthesize fetchedServiceRepository=_fetchedServiceRepository;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
- (void)updateServiceRepository:(id)arg1 withFetchedServiceRepository:(id)arg2;
- (void)update;

@end
