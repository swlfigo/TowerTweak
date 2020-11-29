//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTQuickActionObject : NSObject
{
    BOOL _supportsQuickLook;
    BOOL _supportsInspect;
    long long _type;
    NSString *_identifier;
    NSString *_name;
    NSString *_displayName;
}

+ (id)objectWithType:(long long)arg1 name:(id)arg2 displayName:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsInspect; // @synthesize supportsInspect=_supportsInspect;
@property(nonatomic) BOOL supportsQuickLook; // @synthesize supportsQuickLook=_supportsQuickLook;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 name:(id)arg2 displayName:(id)arg3;

@end
