//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAbstractLog.h"

@class NSDictionary, NSString;

@interface MSCustomPropertiesLog : MSAbstractLog
{
    NSString *_type;
    NSDictionary *_properties;
}

+ (id)serializeProperty:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void)setType:(id)arg1;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializeToDictionary;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

