//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMutableArray;

@interface MSOrderedDictionary : NSMutableDictionary
{
    NSMutableArray *_order;
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSMutableArray *order; // @synthesize order=_order;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)mutableCopy;
- (void)removeAllObjects;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

