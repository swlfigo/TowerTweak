//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor, NSDictionary, NSFont, NSParagraphStyle;

@interface GTDiffViewStyles : GTAbstractViewStyles
{
    NSColor *_backgroundColor;
    NSDictionary *_defaultTextAttributes;
    NSFont *_defaultFont;
    NSParagraphStyle *_defaultParagraphStyle;
    NSColor *_defaultTextColor;
    double _defaultLineFragmentPadding;
    double _defaultTextContainerHorizontalInset;
    double _defaultTextContainerVerticalInset;
    double _defaultChangedTextSectionBorderWidth;
    double _defaultBottomPadding;
    NSDictionary *_diffHeaderTextAttributes;
    NSColor *_diffHeaderTextColor;
    NSColor *_diffHeaderBackgroundColor;
    NSColor *_diffHeaderBorderColor;
    NSColor *_headerTextColor;
    NSColor *_headerBackgroundColor;
    NSColor *_floatingHeaderBackgroundColor;
    NSColor *_headerBorderColor;
    NSColor *_highlightHeaderBorderColor;
    NSColor *_lineNumberColumnBackgroundColor;
    NSColor *_lineNumberColumnTextColor;
    NSColor *_lineNumberColumnBorderColor;
    double _lineNumberColumnAdditionalTextSpacing;
    double _lineNumberColumnBorderWidth;
    NSColor *_selectedLineNumberColumnBackgroundColor;
    NSColor *_selectedLineNumberColumnTextColor;
    NSColor *_selectedLineNumberColumnBorderColor;
    NSColor *_highlightedLineNumberColumnBackgroundColor;
    NSColor *_highlightedLineNumberColumnTextColor;
    NSColor *_highlightedLineNumberColumnBorderColor;
    NSFont *_addLineIconFont;
    NSColor *_addLineIconTextColor;
    NSColor *_contentBackgroundColor;
    NSColor *_contentTextColor;
    NSColor *_lightContentTextColor;
    NSColor *_contentAddedLineBackgroundColor;
    NSColor *_contentAddedLineTextColor;
    NSColor *_contentAddedLineBorderColor;
    NSColor *_contentAddedLineHighlightColor;
    NSColor *_contentDeletedLineBackgroundColor;
    NSColor *_contentDeletedLineTextColor;
    NSColor *_contentDeletedLineBorderColor;
    NSColor *_contentDeletedLineHighlightColor;
    NSColor *_selectedContentAddedLineBackgroundColor;
    NSColor *_selectedContentAddedLineTextColor;
    NSColor *_selectedContentDeletedLineBackgroundColor;
    NSColor *_selectedContentDeletedLineTextColor;
    struct CGSize _defaultTextContainerInset;
    struct CGSize _lineNumberColumnTextInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *selectedContentDeletedLineTextColor; // @synthesize selectedContentDeletedLineTextColor=_selectedContentDeletedLineTextColor;
@property(retain, nonatomic) NSColor *selectedContentDeletedLineBackgroundColor; // @synthesize selectedContentDeletedLineBackgroundColor=_selectedContentDeletedLineBackgroundColor;
@property(retain, nonatomic) NSColor *selectedContentAddedLineTextColor; // @synthesize selectedContentAddedLineTextColor=_selectedContentAddedLineTextColor;
@property(retain, nonatomic) NSColor *selectedContentAddedLineBackgroundColor; // @synthesize selectedContentAddedLineBackgroundColor=_selectedContentAddedLineBackgroundColor;
@property(retain, nonatomic) NSColor *contentDeletedLineHighlightColor; // @synthesize contentDeletedLineHighlightColor=_contentDeletedLineHighlightColor;
@property(retain, nonatomic) NSColor *contentDeletedLineBorderColor; // @synthesize contentDeletedLineBorderColor=_contentDeletedLineBorderColor;
@property(retain, nonatomic) NSColor *contentDeletedLineTextColor; // @synthesize contentDeletedLineTextColor=_contentDeletedLineTextColor;
@property(retain, nonatomic) NSColor *contentDeletedLineBackgroundColor; // @synthesize contentDeletedLineBackgroundColor=_contentDeletedLineBackgroundColor;
@property(retain, nonatomic) NSColor *contentAddedLineHighlightColor; // @synthesize contentAddedLineHighlightColor=_contentAddedLineHighlightColor;
@property(retain, nonatomic) NSColor *contentAddedLineBorderColor; // @synthesize contentAddedLineBorderColor=_contentAddedLineBorderColor;
@property(retain, nonatomic) NSColor *contentAddedLineTextColor; // @synthesize contentAddedLineTextColor=_contentAddedLineTextColor;
@property(retain, nonatomic) NSColor *contentAddedLineBackgroundColor; // @synthesize contentAddedLineBackgroundColor=_contentAddedLineBackgroundColor;
@property(retain, nonatomic) NSColor *lightContentTextColor; // @synthesize lightContentTextColor=_lightContentTextColor;
@property(retain, nonatomic) NSColor *contentTextColor; // @synthesize contentTextColor=_contentTextColor;
@property(retain, nonatomic) NSColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(retain, nonatomic) NSColor *addLineIconTextColor; // @synthesize addLineIconTextColor=_addLineIconTextColor;
@property(retain, nonatomic) NSFont *addLineIconFont; // @synthesize addLineIconFont=_addLineIconFont;
@property(retain, nonatomic) NSColor *highlightedLineNumberColumnBorderColor; // @synthesize highlightedLineNumberColumnBorderColor=_highlightedLineNumberColumnBorderColor;
@property(retain, nonatomic) NSColor *highlightedLineNumberColumnTextColor; // @synthesize highlightedLineNumberColumnTextColor=_highlightedLineNumberColumnTextColor;
@property(retain, nonatomic) NSColor *highlightedLineNumberColumnBackgroundColor; // @synthesize highlightedLineNumberColumnBackgroundColor=_highlightedLineNumberColumnBackgroundColor;
@property(retain, nonatomic) NSColor *selectedLineNumberColumnBorderColor; // @synthesize selectedLineNumberColumnBorderColor=_selectedLineNumberColumnBorderColor;
@property(retain, nonatomic) NSColor *selectedLineNumberColumnTextColor; // @synthesize selectedLineNumberColumnTextColor=_selectedLineNumberColumnTextColor;
@property(retain, nonatomic) NSColor *selectedLineNumberColumnBackgroundColor; // @synthesize selectedLineNumberColumnBackgroundColor=_selectedLineNumberColumnBackgroundColor;
@property(nonatomic) double lineNumberColumnBorderWidth; // @synthesize lineNumberColumnBorderWidth=_lineNumberColumnBorderWidth;
@property(nonatomic) double lineNumberColumnAdditionalTextSpacing; // @synthesize lineNumberColumnAdditionalTextSpacing=_lineNumberColumnAdditionalTextSpacing;
@property(nonatomic) struct CGSize lineNumberColumnTextInset; // @synthesize lineNumberColumnTextInset=_lineNumberColumnTextInset;
@property(retain, nonatomic) NSColor *lineNumberColumnBorderColor; // @synthesize lineNumberColumnBorderColor=_lineNumberColumnBorderColor;
@property(retain, nonatomic) NSColor *lineNumberColumnTextColor; // @synthesize lineNumberColumnTextColor=_lineNumberColumnTextColor;
@property(retain, nonatomic) NSColor *lineNumberColumnBackgroundColor; // @synthesize lineNumberColumnBackgroundColor=_lineNumberColumnBackgroundColor;
@property(retain, nonatomic) NSColor *highlightHeaderBorderColor; // @synthesize highlightHeaderBorderColor=_highlightHeaderBorderColor;
@property(retain, nonatomic) NSColor *headerBorderColor; // @synthesize headerBorderColor=_headerBorderColor;
@property(retain, nonatomic) NSColor *floatingHeaderBackgroundColor; // @synthesize floatingHeaderBackgroundColor=_floatingHeaderBackgroundColor;
@property(retain, nonatomic) NSColor *headerBackgroundColor; // @synthesize headerBackgroundColor=_headerBackgroundColor;
@property(retain, nonatomic) NSColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
@property(retain, nonatomic) NSColor *diffHeaderBorderColor; // @synthesize diffHeaderBorderColor=_diffHeaderBorderColor;
@property(retain, nonatomic) NSColor *diffHeaderBackgroundColor; // @synthesize diffHeaderBackgroundColor=_diffHeaderBackgroundColor;
@property(retain, nonatomic) NSColor *diffHeaderTextColor; // @synthesize diffHeaderTextColor=_diffHeaderTextColor;
@property(retain, nonatomic) NSDictionary *diffHeaderTextAttributes; // @synthesize diffHeaderTextAttributes=_diffHeaderTextAttributes;
@property(nonatomic) struct CGSize defaultTextContainerInset; // @synthesize defaultTextContainerInset=_defaultTextContainerInset;
@property(nonatomic) double defaultBottomPadding; // @synthesize defaultBottomPadding=_defaultBottomPadding;
@property(nonatomic) double defaultChangedTextSectionBorderWidth; // @synthesize defaultChangedTextSectionBorderWidth=_defaultChangedTextSectionBorderWidth;
@property(nonatomic) double defaultTextContainerVerticalInset; // @synthesize defaultTextContainerVerticalInset=_defaultTextContainerVerticalInset;
@property(nonatomic) double defaultTextContainerHorizontalInset; // @synthesize defaultTextContainerHorizontalInset=_defaultTextContainerHorizontalInset;
@property(nonatomic) double defaultLineFragmentPadding; // @synthesize defaultLineFragmentPadding=_defaultLineFragmentPadding;
@property(retain, nonatomic) NSColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(retain, nonatomic) NSParagraphStyle *defaultParagraphStyle; // @synthesize defaultParagraphStyle=_defaultParagraphStyle;
@property(retain, nonatomic) NSFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(retain, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)computeDefaultParagraphStyle;
- (void)loadViewStyles;

@end

