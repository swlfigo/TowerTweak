//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTFileSelectorFileItem, NSColor, NSImage, NSLayoutConstraint, NSString;

@interface GTFileSelectorFileCellView : NSTableCellView
{
    NSLayoutConstraint *_leadingConstraint;
    NSImage *_icon;
    NSString *_filePath;
    GTFileSelectorFileItem *_item;
    NSColor *_fontColor;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingFilePath;
+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingItem;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) GTFileSelectorFileItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)allowsVibrancy;

@end

