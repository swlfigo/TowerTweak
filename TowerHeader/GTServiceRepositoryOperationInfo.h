//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAccountOperationInfo.h"

@class NSString;

@interface GTServiceRepositoryOperationInfo : GTServiceAccountOperationInfo
{
    NSString *_serviceRepositoryOwner;
    NSString *_serviceRepositoryName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serviceRepositoryName; // @synthesize serviceRepositoryName=_serviceRepositoryName;
@property(retain, nonatomic) NSString *serviceRepositoryOwner; // @synthesize serviceRepositoryOwner=_serviceRepositoryOwner;
@property(readonly, nonatomic) NSString *serviceRepositoryFullName;
- (id)initWithServiceAccountCredentials:(id)arg1 serviceRepositoryOwner:(id)arg2 serviceRepositoryName:(id)arg3;

@end

