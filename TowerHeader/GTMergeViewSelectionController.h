//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface GTMergeViewSelectionController : NSObject
{
    BOOL _allowMultiSelection;
    NSIndexSet *_selectedIndexes;
    NSIndexSet *_hintedIndexes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *hintedIndexes; // @synthesize hintedIndexes=_hintedIndexes;
@property(retain, nonatomic) NSIndexSet *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(nonatomic) BOOL allowMultiSelection; // @synthesize allowMultiSelection=_allowMultiSelection;
- (void)addToSelection:(long long)arg1;
- (void)removeFromSelection:(long long)arg1;
- (long long)firstHintedIndex;
- (long long)firstSelectedIndex;
- (BOOL)isSelected:(long long)arg1;
- (unsigned long long)selectionCount;
- (unsigned long long)hintCount;
- (BOOL)hasNoHints;
- (BOOL)hasNoSelection;

@end

