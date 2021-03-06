//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSColor;

@interface GTMergeViewItemContentFileStatusTextField : NSTextField
{
    NSColor *_borderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)updateColorsForFileStatus:(unsigned long long)arg1;
- (void)updateColorsForArtificialFileStatus;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initLabelWithFrame:(struct CGRect)arg1;
- (id)init;

@end

