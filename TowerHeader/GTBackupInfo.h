//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface GTBackupInfo : NSObject
{
    NSURL *_location;
    NSArray *_items;
}

+ (id)backupInfoWithLocation:(id)arg1 items:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSURL *location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1 items:(id)arg2;

@end
