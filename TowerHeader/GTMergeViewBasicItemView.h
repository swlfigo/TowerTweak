//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTMergeViewBasicItem, GTMergeViewItemContentFileStatusTextField, GTMergeViewItemContentFileView, GTMergeViewItemContentTitleView, NSColor, NSFont, NSImageView, NSString, NSTextField;
@protocol GTMergeViewBasicItemViewDelegate;

@interface GTMergeViewBasicItemView : NSView
{
    BOOL _displayItemActions;
    GTMergeViewBasicItem *_model;
    id <GTMergeViewBasicItemViewDelegate> _delegate;
    NSView *_titleViewContainer;
    GTMergeViewItemContentTitleView *_titleView;
    NSView *_fileViewContainer;
    GTMergeViewItemContentFileView *_fileView;
    NSTextField *_titleField;
    NSTextField *_fileField;
    GTMergeViewItemContentFileStatusTextField *_fileStatusField;
    NSImageView *_fileTypeImageView;
    NSColor *_borderColor;
    NSColor *_backgroundColor;
    NSString *_title;
    NSString *_file;
    NSString *_fileStatus;
    NSFont *_statusFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSFont *statusFont; // @synthesize statusFont=_statusFont;
@property(retain, nonatomic) NSString *fileStatus; // @synthesize fileStatus=_fileStatus;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) BOOL displayItemActions; // @synthesize displayItemActions=_displayItemActions;
@property __weak NSImageView *fileTypeImageView; // @synthesize fileTypeImageView=_fileTypeImageView;
@property(retain, nonatomic) GTMergeViewItemContentFileStatusTextField *fileStatusField; // @synthesize fileStatusField=_fileStatusField;
@property(retain, nonatomic) NSTextField *fileField; // @synthesize fileField=_fileField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak GTMergeViewItemContentFileView *fileView; // @synthesize fileView=_fileView;
@property __weak NSView *fileViewContainer; // @synthesize fileViewContainer=_fileViewContainer;
@property __weak GTMergeViewItemContentTitleView *titleView; // @synthesize titleView=_titleView;
@property __weak NSView *titleViewContainer; // @synthesize titleViewContainer=_titleViewContainer;
@property __weak id <GTMergeViewBasicItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GTMergeViewBasicItem *model; // @synthesize model=_model;
- (void)mouseDown:(id)arg1;
- (id)fileNameFont;
- (id)titleFont;
- (id)fileNameColor;
- (id)titleColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTemplate:(BOOL)arg1;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
