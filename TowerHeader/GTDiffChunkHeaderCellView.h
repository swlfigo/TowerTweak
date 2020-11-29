//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "FNViewAppearance-Protocol.h"

@class FNGitDiffChunk, NSButton, NSColor, NSDictionary, NSString, NSTextField, NSView;

@interface GTDiffChunkHeaderCellView : NSTableCellView <FNViewAppearance>
{
    BOOL _usesSingleLineSelectionMode;
    BOOL _editable;
    BOOL _awokenFromNib;
    NSTextField *_label;
    NSView *_buttonContainerView;
    NSButton *_discardButton;
    NSButton *_stageButton;
    NSButton *_unstageButton;
    NSDictionary *_defaultTextAttributes;
    NSColor *_textColor;
    FNGitDiffChunk *_diffChunk;
    long long _diffMode;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) BOOL awokenFromNib; // @synthesize awokenFromNib=_awokenFromNib;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) BOOL usesSingleLineSelectionMode; // @synthesize usesSingleLineSelectionMode=_usesSingleLineSelectionMode;
@property(nonatomic) long long diffMode; // @synthesize diffMode=_diffMode;
@property(retain, nonatomic) FNGitDiffChunk *diffChunk; // @synthesize diffChunk=_diffChunk;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(retain, nonatomic) NSButton *unstageButton; // @synthesize unstageButton=_unstageButton;
@property(retain, nonatomic) NSButton *stageButton; // @synthesize stageButton=_stageButton;
@property(retain, nonatomic) NSButton *discardButton; // @synthesize discardButton=_discardButton;
@property(retain, nonatomic) NSView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (void)reloadView;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
