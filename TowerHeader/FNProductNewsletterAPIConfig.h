//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FNProductNewsletterAPIConfig : NSObject
{
    NSURL *_baseURL;
    NSString *_productName;
    NSString *_operatingSystem;
    NSString *_userAgentString;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(retain, nonatomic) NSString *operatingSystem; // @synthesize operatingSystem=_operatingSystem;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;

@end

