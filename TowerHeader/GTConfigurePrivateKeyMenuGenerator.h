//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class NSArray;

@interface GTConfigurePrivateKeyMenuGenerator : GTMenuGenerator
{
    id _target;
    NSArray *_serviceAccounts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *serviceAccounts; // @synthesize serviceAccounts=_serviceAccounts;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)makeConfigureServiceAccountItemWithServiceAccount:(id)arg1;
- (void)makeMenuItems;

@end
