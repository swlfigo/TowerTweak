//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSKeychainUtil : NSObject
{
}

+ (int)secItemCopyMatchingQuery:(id)arg1 result:(const void **)arg2;
+ (int)addSecItem:(id)arg1;
+ (int)deleteSecItem:(id)arg1;
+ (id)generateItem:(id)arg1 withServiceName:(id)arg2;
+ (BOOL)clear;
+ (id)stringForKey:(id)arg1 statusCode:(int *)arg2;
+ (id)stringForKey:(id)arg1 withServiceName:(id)arg2 statusCode:(int *)arg3;
+ (id)deleteStringForKey:(id)arg1;
+ (id)deleteStringForKey:(id)arg1 withServiceName:(id)arg2;
+ (BOOL)storeString:(id)arg1 forKey:(id)arg2;
+ (BOOL)storeString:(id)arg1 forKey:(id)arg2 withServiceName:(id)arg3;

@end
