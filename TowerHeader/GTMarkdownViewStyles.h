//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor;

@interface GTMarkdownViewStyles : GTAbstractViewStyles
{
    NSColor *_codeBlockBackgroundColor;
    NSColor *_codeBlockBorderColor;
    NSColor *_blockquoteBorderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *blockquoteBorderColor; // @synthesize blockquoteBorderColor=_blockquoteBorderColor;
@property(retain, nonatomic) NSColor *codeBlockBorderColor; // @synthesize codeBlockBorderColor=_codeBlockBorderColor;
@property(retain, nonatomic) NSColor *codeBlockBackgroundColor; // @synthesize codeBlockBackgroundColor=_codeBlockBackgroundColor;
- (void)loadViewStyles;

@end

