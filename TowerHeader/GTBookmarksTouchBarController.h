//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTTouchBarController.h"

@protocol GTBookmarksActions;

@interface GTBookmarksTouchBarController : GTTouchBarController
{
    id <GTBookmarksActions> _target;
}

+ (id)customizationAllowedItemIdentifiers;
+ (id)customizationRequiredItemIdentifiers;
+ (id)defaultItemIdentifiers;
+ (id)customizationIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GTBookmarksActions> target; // @synthesize target=_target;
- (id)openInFinderItem:(id)arg1;
- (id)openInTerminalItem:(id)arg1;
- (id)deleteBookmarksActionItem:(id)arg1;
- (id)openBookmarkActionItem:(id)arg1;
- (id)addRepositoryActionItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)configureTouchBar;

@end

