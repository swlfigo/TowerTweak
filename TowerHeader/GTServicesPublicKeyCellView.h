//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSettingsCellView.h"

@class GTServicePublicKey, GTServicesPublicKeyItem, NSImage, NSString;

@interface GTServicesPublicKeyCellView : GTSettingsCellView
{
    BOOL _private;
    BOOL _available;
}

+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingCreated;
+ (id)keyPathsForValuesAffectingContent;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingServicePublicKey;
+ (id)keyPathsForValuesAffectingServicesPublicKeyItem;
+ (id)height;
@property(readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(readonly, nonatomic, getter=isPrivate) BOOL private; // @synthesize private=_private;
@property(readonly, nonatomic) NSImage *iconImage;
@property(readonly, nonatomic) NSString *created;
@property(readonly, nonatomic) NSString *content;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) GTServicesPublicKeyItem *servicesPublicKeyItem;
@property(readonly, nonatomic) GTServicePublicKey *servicePublicKey;

@end

