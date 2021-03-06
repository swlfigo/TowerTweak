//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class NSArray;

@interface GTServicesSidebarMenuGenerator : GTMenuGenerator
{
    NSArray *_serviceAccounts;
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSArray *serviceAccounts; // @synthesize serviceAccounts=_serviceAccounts;
- (id)makeRemoveServiceAccountsMenuItemWithServiceAccounts:(id)arg1;
- (id)makeCreateServiceRepositoryMenuItemWithServiceAccount:(id)arg1;
- (id)makeReloadServiceAccountMenuItemWithServiceAccount:(id)arg1;
- (id)makeRemoveServiceAccountMenuItemWithServiceAccount:(id)arg1;
- (id)makeEditServiceAccountMenuItemWithServiceAccount:(id)arg1;
- (id)makeOpenServiceAccountInBrowserMenuItemWithServiceAccount:(id)arg1;
- (void)makeMenuItems;

@end

