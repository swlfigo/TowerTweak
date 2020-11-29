//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractViewStyles.h"

@class NSColor, NSFont;

@interface GTFileHistoryViewStyles : GTAbstractViewStyles
{
    NSFont *_commitHashFont;
    NSColor *_commitHashTextColor;
    NSFont *_subjectFont;
    NSColor *_subjectTextColor;
    NSFont *_authorFont;
    NSColor *_authorTextColor;
    NSFont *_dateFont;
    NSColor *_dateTextColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *dateTextColor; // @synthesize dateTextColor=_dateTextColor;
@property(retain, nonatomic) NSFont *dateFont; // @synthesize dateFont=_dateFont;
@property(retain, nonatomic) NSColor *authorTextColor; // @synthesize authorTextColor=_authorTextColor;
@property(retain, nonatomic) NSFont *authorFont; // @synthesize authorFont=_authorFont;
@property(retain, nonatomic) NSColor *subjectTextColor; // @synthesize subjectTextColor=_subjectTextColor;
@property(retain, nonatomic) NSFont *subjectFont; // @synthesize subjectFont=_subjectFont;
@property(retain, nonatomic) NSColor *commitHashTextColor; // @synthesize commitHashTextColor=_commitHashTextColor;
@property(retain, nonatomic) NSFont *commitHashFont; // @synthesize commitHashFont=_commitHashFont;
- (void)loadViewStyles;

@end

