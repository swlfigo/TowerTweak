//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSLogWithProperties.h"

@class MSException, NSString;

@interface MSHandledErrorLog : MSLogWithProperties
{
    NSString *_errorId;
    MSException *_exception;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSException *exception; // @synthesize exception=_exception;
@property(copy, nonatomic) NSString *errorId; // @synthesize errorId=_errorId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;
- (id)init;

@end
