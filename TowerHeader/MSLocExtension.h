//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSModel-Protocol.h"
#import "MSSerializableObject-Protocol.h"

@class NSString;

@interface MSLocExtension : NSObject <MSSerializableObject, MSModel>
{
    NSString *_tz;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tz; // @synthesize tz=_tz;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

