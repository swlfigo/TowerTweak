//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface GTServicesServiceItem : NSObject
{
    unsigned long long _serviceType;
}

+ (id)itemWithServiceType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) BOOL usesAlternateDisplay;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *title;
- (id)initWithServiceType:(unsigned long long)arg1;
- (id)init;

@end

