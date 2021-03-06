//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "GTWindowObserving-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class GTBookmark, GTBookmarksSidebarItem, GTWindowObserver, NSButton, NSColor, NSImageView, NSNumber, NSString;

@interface GTBookmarksSidebarBookmarkItemCellView : NSTableCellView <GTWindowObserving, NSTextFieldDelegate>
{
    BOOL _isIndeterminateCloningProgress;
    NSString *_title;
    NSImageView *_iconImageView;
    NSButton *_errorBadge;
    GTWindowObserver *_windowObserver;
}

+ (id)keyPathsForValuesAffectingTitleTextColor;
+ (id)keyPathsForValuesAffectingIndeterminateCloningProgress;
+ (id)keyPathsForValuesAffectingCloningProgressValue;
+ (id)keyPathsForValuesAffectingCloning;
+ (id)keyPathsForValuesAffectingValid;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingBookmark;
+ (id)keyPathsForValuesAffectingBookmarksSidebarItem;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) GTWindowObserver *windowObserver; // @synthesize windowObserver=_windowObserver;
@property(nonatomic) __weak NSButton *errorBadge; // @synthesize errorBadge=_errorBadge;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic, getter=indeterminateCloningProgress) BOOL isIndeterminateCloningProgress; // @synthesize isIndeterminateCloningProgress=_isIndeterminateCloningProgress;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)draggingImageComponents;
- (void)windowDidResignKey:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
@property(readonly, nonatomic) NSColor *titleTextColor;
- (BOOL)isIndeterminateCloningProgress;
@property(readonly, nonatomic) NSNumber *cloningProgressValue;
@property(readonly, nonatomic) NSNumber *maxCloningProgressValue;
@property(readonly, nonatomic) NSNumber *minCloningProgressValue;
@property(readonly, nonatomic, getter=isCloning) BOOL cloning;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)bookmarkImage;
@property(readonly, nonatomic) GTBookmark *bookmark;
@property(readonly, nonatomic) GTBookmarksSidebarItem *bookmarksSidebarItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

