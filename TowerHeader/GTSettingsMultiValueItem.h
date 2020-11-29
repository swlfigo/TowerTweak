//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSettingsItem.h"

@class NSArray;

@interface GTSettingsMultiValueItem : GTSettingsItem
{
    NSArray *_contentObjects;
    NSArray *_contentValues;
    id _preselectedObject;
    id _target;
    SEL _action;
    id _menuDelegate;
}

+ (id)itemWithTitle:(id)arg1;
+ (id)keyPathsForValuesAffectingContent;
- (void).cxx_destruct;
@property(nonatomic) __weak id menuDelegate; // @synthesize menuDelegate=_menuDelegate;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) id preselectedObject; // @synthesize preselectedObject=_preselectedObject;
@property(retain, nonatomic) NSArray *contentValues; // @synthesize contentValues=_contentValues;
@property(retain, nonatomic) NSArray *contentObjects; // @synthesize contentObjects=_contentObjects;
@property(readonly, nonatomic) NSArray *content;
- (id)initWithTitle:(id)arg1;

@end
