//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTUserPreferencesQuickOpenSearchPathItem, NSImage, NSString;

@interface GTUserPreferencesQuickOpenSearchPathCellView : NSTableCellView
{
}

+ (id)keyPathsForValuesAffectingFolderImage;
+ (id)keyPathsForValuesAffectingFilePath;
+ (id)keyPathsForValuesAffectingItem;
@property(readonly, nonatomic) NSImage *folderImage;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) GTUserPreferencesQuickOpenSearchPathItem *item;

@end

