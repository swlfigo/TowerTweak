//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTHistoryCommitListCellView.h"

@class GTGPGSignaturePopoverViewController, NSButton, NSImage, NSPopover;

@interface GTHistoryCommitListMediumCellView : GTHistoryCommitListCellView
{
    GTGPGSignaturePopoverViewController *_signatureViewController;
    NSPopover *_signaturePopover;
    NSButton *_signatureButton;
}

+ (double)height;
+ (id)keyPathsForValuesAffectingStatusIndicatorImage;
- (void).cxx_destruct;
@property(nonatomic) __weak NSButton *signatureButton; // @synthesize signatureButton=_signatureButton;
@property(retain, nonatomic) NSPopover *signaturePopover; // @synthesize signaturePopover=_signaturePopover;
@property(retain, nonatomic) GTGPGSignaturePopoverViewController *signatureViewController; // @synthesize signatureViewController=_signatureViewController;
- (void)showSignaturePopover:(id)arg1;
@property(readonly, nonatomic) NSImage *statusIndicatorImage;
- (void)configureGraph;
- (void)configureDate;
- (void)configureAuthor;
- (void)configureSubjectAndMessage;
- (void)configureCommitHash;
- (void)configureCellView;

@end
