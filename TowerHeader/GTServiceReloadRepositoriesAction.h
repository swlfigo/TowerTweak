//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceAccountAction.h"

@class GTServiceAccount;

@interface GTServiceReloadRepositoriesAction : GTServiceAccountAction
{
    GTServiceAccount *_organizationAccount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServiceAccount *organizationAccount; // @synthesize organizationAccount=_organizationAccount;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end
