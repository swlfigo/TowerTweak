//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTouchBarDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTouchBar;
@protocol GTTouchBarControllerDelegate;

@interface GTTouchBarController : NSObject <NSTouchBarDelegate>
{
    id <GTTouchBarControllerDelegate> _delegate;
    NSTouchBar *_touchBar;
    NSMutableArray *_items;
}

+ (id)customizationAllowedItemIdentifiers;
+ (id)customizationRequiredItemIdentifiers;
+ (id)defaultItemIdentifiers;
+ (id)customizationIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(nonatomic) __weak id <GTTouchBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addTouchBarItem:(id)arg1;
- (void)validateTouchBarItems;
- (void)update;
- (void)invalidateTouchBar;
- (void)configureTouchBar;
@property(readonly, nonatomic) NSArray *touchBarItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
