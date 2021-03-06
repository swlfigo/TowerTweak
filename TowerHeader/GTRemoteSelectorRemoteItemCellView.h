//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTRemoteSelectorRemoteItem, NSColor, NSImage, NSLayoutConstraint, NSString;

@interface GTRemoteSelectorRemoteItemCellView : NSTableCellView
{
    NSLayoutConstraint *_leadingConstraint;
    NSImage *_icon;
    NSString *_remoteName;
    GTRemoteSelectorRemoteItem *_item;
    NSColor *_fontColor;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingRemoteName;
+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingItem;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) GTRemoteSelectorRemoteItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *remoteName; // @synthesize remoteName=_remoteName;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)allowsVibrancy;

@end

