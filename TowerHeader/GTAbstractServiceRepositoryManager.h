//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractServiceAccountManager.h"

@class GTServiceRepository;

@interface GTAbstractServiceRepositoryManager : GTAbstractServiceAccountManager
{
    GTServiceRepository *_serviceRepository;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
- (id)initWithServiceRepository:(id)arg1;
- (id)init;

@end

