//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

@class GTStateManager, NSArray, NSColor, NSImage, NSStackView, NSString, NSTextField;

@interface GTEmptyViewController : GTViewController
{
    NSTextField *_titleLabel;
    NSTextField *_descriptionTextField;
    NSStackView *_actionButtonsView;
    NSString *_titleText;
    NSString *_descriptionText;
    NSImage *_iconImage;
    NSArray *_buttons;
    GTStateManager *_viewState;
}

+ (id)defaultNibName;
- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak NSStackView *actionButtonsView; // @synthesize actionButtonsView=_actionButtonsView;
@property(nonatomic) __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateActionButtons;
- (BOOL)needsUpdateActionButtons;
- (BOOL)needsUpdate;
- (void)updateViewState;
- (void)updateIfNeeded;
- (void)update;
- (void)viewDidLoad;
- (void)awakeFromNib;
@property(readonly) NSColor *titleTextColor;
- (void)commonInit;

@end

