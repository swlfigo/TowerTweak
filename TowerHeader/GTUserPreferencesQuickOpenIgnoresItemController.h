//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol GTUserPreferencesQuickOpenIgnoresItemControllerDelegate;

@interface GTUserPreferencesQuickOpenIgnoresItemController : NSObject
{
    NSArray *_items;
    id <GTUserPreferencesQuickOpenIgnoresItemControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GTUserPreferencesQuickOpenIgnoresItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)reload;

@end

