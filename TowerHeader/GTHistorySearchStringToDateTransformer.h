//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateFormatter;

@interface GTHistorySearchStringToDateTransformer : NSValueTransformer
{
    BOOL _transformsToStartOfDay;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(nonatomic) BOOL transformsToStartOfDay; // @synthesize transformsToStartOfDay=_transformsToStartOfDay;
- (id)normalizeDate:(id)arg1;
- (id)convertDateToSearchText:(id)arg1;
- (id)convertSearchTextToDate:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter3;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter2;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter1;

@end

