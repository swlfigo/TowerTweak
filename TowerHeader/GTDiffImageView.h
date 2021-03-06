//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImage, NSImageView, NSMutableArray, NSString, NSTextField;

@interface GTDiffImageView : NSView
{
    BOOL _noMaximumHeight;
    BOOL _usesFullsizeContentView;
    long long _viewMode;
    long long _visibleImage;
    NSImage *_addedImage;
    NSImage *_deletedImage;
    NSString *_addedImageDescription;
    NSString *_deletedImageDescription;
    NSColor *_backgroundColor;
    NSImageView *_leftImageView;
    NSImageView *_rightImageView;
    NSTextField *_firstImageLabel;
    NSTextField *_secondImageLabel;
    NSTextField *_firstImageTopLabel;
    NSTextField *_secondImageTopLabel;
    NSMutableArray *_customConstraints;
    NSMutableArray *_customLayoutGuides;
    struct CGSize _canvasSize;
}

+ (double)heightForAddedImage:(id)arg1 deletedImage:(id)arg2 canvasSize:(struct CGSize)arg3 width:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *customLayoutGuides; // @synthesize customLayoutGuides=_customLayoutGuides;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) NSTextField *secondImageTopLabel; // @synthesize secondImageTopLabel=_secondImageTopLabel;
@property(retain, nonatomic) NSTextField *firstImageTopLabel; // @synthesize firstImageTopLabel=_firstImageTopLabel;
@property(retain, nonatomic) NSTextField *secondImageLabel; // @synthesize secondImageLabel=_secondImageLabel;
@property(retain, nonatomic) NSTextField *firstImageLabel; // @synthesize firstImageLabel=_firstImageLabel;
@property(retain, nonatomic) NSImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) NSImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) BOOL usesFullsizeContentView; // @synthesize usesFullsizeContentView=_usesFullsizeContentView;
@property(nonatomic) BOOL noMaximumHeight; // @synthesize noMaximumHeight=_noMaximumHeight;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *deletedImageDescription; // @synthesize deletedImageDescription=_deletedImageDescription;
@property(retain, nonatomic) NSString *addedImageDescription; // @synthesize addedImageDescription=_addedImageDescription;
@property(retain, nonatomic) NSImage *deletedImage; // @synthesize deletedImage=_deletedImage;
@property(retain, nonatomic) NSImage *addedImage; // @synthesize addedImage=_addedImage;
@property(nonatomic) long long visibleImage; // @synthesize visibleImage=_visibleImage;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
- (void)reset;
- (void)updateImageViews;
- (void)updateLabels;
- (void)updateSubviews;
- (void)update;
- (void)updateConstraints;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)wantsLayer;

@end

