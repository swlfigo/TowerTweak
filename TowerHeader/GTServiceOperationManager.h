//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface GTServiceOperationManager : NSObject
{
    NSMutableArray *_operations;
    NSMutableDictionary *_operationsByIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *operationsByIdentifier; // @synthesize operationsByIdentifier=_operationsByIdentifier;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (id)operationForIdentifier:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)init;

@end
