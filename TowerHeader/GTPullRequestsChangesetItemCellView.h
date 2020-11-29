//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GTGitChangesetEntry, GTGitFileStatusIcon, NSColor, NSString;

@interface GTPullRequestsChangesetItemCellView : NSTableCellView
{
    GTGitFileStatusIcon *_fileStatusIcon;
    NSColor *_defaultTextColor;
    NSColor *_highlightedTextColor;
}

+ (id)keyPathsForValuesAffectingFilePathColor;
+ (id)keyPathsForValuesAffectingFilePath;
+ (id)keyPathsForValuesAffectingFileStatusTextColor;
+ (id)keyPathsForValuesAffectingFileStatusText;
+ (id)keyPathsForValuesAffectingChangesetEntry;
+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) NSColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) __weak GTGitFileStatusIcon *fileStatusIcon; // @synthesize fileStatusIcon=_fileStatusIcon;
@property(readonly, nonatomic) NSColor *filePathColor;
@property(readonly, copy, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSColor *fileStatusTextColor;
@property(readonly, copy, nonatomic) NSString *fileStatusText;
@property(readonly, nonatomic) GTGitChangesetEntry *changesetEntry;
@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

