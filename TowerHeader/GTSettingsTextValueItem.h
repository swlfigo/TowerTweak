//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSettingsItem.h"

@class NSString;

@interface GTSettingsTextValueItem : GTSettingsItem
{
    BOOL _enabled;
    NSString *_stringValue;
}

+ (id)itemWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)initWithTitle:(id)arg1 type:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

