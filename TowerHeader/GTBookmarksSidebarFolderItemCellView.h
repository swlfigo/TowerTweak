//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "GTWindowObserving-Protocol.h"

@class GTBookmark, GTBookmarksSidebarItem, GTWindowObserver, NSImage, NSImageView, NSString;

@interface GTBookmarksSidebarFolderItemCellView : NSTableCellView <GTWindowObserving>
{
    NSString *_title;
    NSImageView *_iconImageView;
    GTWindowObserver *_windowObserver;
}

+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingBookmark;
+ (id)keyPathsForValuesAffectingBookmarksSidebarItem;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) GTWindowObserver *windowObserver; // @synthesize windowObserver=_windowObserver;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)draggingImageComponents;
- (void)windowDidResignKey:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
@property(readonly, nonatomic) NSImage *folderIcon;
@property(readonly, nonatomic) GTBookmark *bookmark;
@property(readonly, nonatomic) GTBookmarksSidebarItem *bookmarksSidebarItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

