//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAction.h"

@class NSArray;

@interface GTServiceRemoveAccountsAction : GTServiceAction
{
    NSArray *_serviceAccounts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *serviceAccounts; // @synthesize serviceAccounts=_serviceAccounts;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidDeleteAccounts;
- (id)userServiceAccountsFromServiceAccounts:(id)arg1;
- (void)main;

@end

