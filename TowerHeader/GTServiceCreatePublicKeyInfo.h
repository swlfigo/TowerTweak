//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAccountOperationInfo.h"

@class GTServicePublicKeyCreationInfo;

@interface GTServiceCreatePublicKeyInfo : GTServiceAccountOperationInfo
{
    GTServicePublicKeyCreationInfo *_servicePublicKeyCreationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServicePublicKeyCreationInfo *servicePublicKeyCreationInfo; // @synthesize servicePublicKeyCreationInfo=_servicePublicKeyCreationInfo;
- (id)initWithServiceAccountCredentials:(id)arg1 servicePublicKeyCreationInfo:(id)arg2;

@end

