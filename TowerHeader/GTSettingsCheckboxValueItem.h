//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSettingsItem.h"

@class NSString;

@interface GTSettingsCheckboxValueItem : GTSettingsItem
{
    BOOL _value;
    NSString *_textValue;
    id _target;
    SEL _action;
}

+ (id)itemWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
- (id)initWithTitle:(id)arg1;

@end

