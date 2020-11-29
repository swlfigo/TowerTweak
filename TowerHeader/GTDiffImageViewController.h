//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

@class GTBackgroundSession, GTDiffImageData, GTDiffImageRenderer, GTDiffImageView, GTStateManager, GTView, NSArray, NSColor, NSImage, NSString, NSTimer, NSView;
@protocol GTDiffImageViewControllerDelegate;

@interface GTDiffImageViewController : GTViewController
{
    BOOL _displaysActionControls;
    BOOL _noMaximumHeight;
    BOOL _usesFullsizeContentView;
    BOOL _loadingFinished;
    BOOL _loadingFailed;
    GTDiffImageData *_diffImageData;
    NSImage *_deletedImage;
    NSImage *_addedImage;
    NSArray *_actionItems;
    id <GTDiffImageViewControllerDelegate> _delegate;
    GTDiffImageRenderer *_renderer;
    long long _viewMode;
    long long _visibleImage;
    NSString *_addedImageLabelString;
    NSString *_deletedImageLabelString;
    NSColor *_backgroundColor;
    GTDiffImageView *_diffImageView;
    GTView *_loadingView;
    GTView *_loadingFailedView;
    NSView *_currentContentView;
    GTStateManager *_viewState;
    NSTimer *_loadingTimer;
    GTBackgroundSession *_backgroundSession;
}

+ (double)heightForData:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GTBackgroundSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(nonatomic) BOOL loadingFailed; // @synthesize loadingFailed=_loadingFailed;
@property(nonatomic, getter=isLoadingFinished) BOOL loadingFinished; // @synthesize loadingFinished=_loadingFinished;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(nonatomic) __weak NSView *currentContentView; // @synthesize currentContentView=_currentContentView;
@property(nonatomic) __weak GTView *loadingFailedView; // @synthesize loadingFailedView=_loadingFailedView;
@property(nonatomic) __weak GTView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak GTDiffImageView *diffImageView; // @synthesize diffImageView=_diffImageView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *deletedImageLabelString; // @synthesize deletedImageLabelString=_deletedImageLabelString;
@property(retain, nonatomic) NSString *addedImageLabelString; // @synthesize addedImageLabelString=_addedImageLabelString;
@property(nonatomic) long long visibleImage; // @synthesize visibleImage=_visibleImage;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(retain, nonatomic) GTDiffImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) BOOL usesFullsizeContentView; // @synthesize usesFullsizeContentView=_usesFullsizeContentView;
@property(nonatomic) BOOL noMaximumHeight; // @synthesize noMaximumHeight=_noMaximumHeight;
@property(nonatomic) __weak id <GTDiffImageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(nonatomic) BOOL displaysActionControls; // @synthesize displaysActionControls=_displaysActionControls;
@property(retain, nonatomic) NSImage *addedImage; // @synthesize addedImage=_addedImage;
@property(retain, nonatomic) NSImage *deletedImage; // @synthesize deletedImage=_deletedImage;
@property(retain, nonatomic) GTDiffImageData *diffImageData; // @synthesize diffImageData=_diffImageData;
- (void)controllerDidFailToRenderImagesWithBackgroundTask:(id)arg1;
- (void)controllerDidRenderAddedImage:(id)arg1 deletedImage:(id)arg2 addedImageSize:(struct CGSize)arg3 deletedImageSize:(struct CGSize)arg4 task:(id)arg5;
- (void)reset;
- (void)selectVisibleImage:(long long)arg1;
- (void)switchToMode:(long long)arg1;
- (void)updateDiffImageView;
- (void)updateImages;
- (void)displayContentView:(id)arg1;
- (void)updateContentView;
- (void)updateActionItems;
- (BOOL)needsUpdateDiffImageView;
- (BOOL)needsUpdateImages;
- (BOOL)needsUpdateContentView;
- (BOOL)needsUpdateActionItems;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)update;
- (void)prepareForUpdate;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)configureContentViews;
- (void)configureViewDefaults;
- (void)configure;
- (void)dealloc;

@end
