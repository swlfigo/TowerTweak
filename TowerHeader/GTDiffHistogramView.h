//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTDiffHistogram;

@interface GTDiffHistogramView : NSView
{
    BOOL _showsNumbers;
    unsigned long long _linesAdded;
    unsigned long long _linesDeleted;
    double _spacing;
    GTDiffHistogram *_diffHistogram;
    struct CGSize _blockSize;
    struct NSEdgeInsets _margins;
    struct NSEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTDiffHistogram *diffHistogram; // @synthesize diffHistogram=_diffHistogram;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct NSEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct CGSize blockSize; // @synthesize blockSize=_blockSize;
@property(nonatomic) BOOL showsNumbers; // @synthesize showsNumbers=_showsNumbers;
@property(nonatomic) unsigned long long linesDeleted; // @synthesize linesDeleted=_linesDeleted;
@property(nonatomic) unsigned long long linesAdded; // @synthesize linesAdded=_linesAdded;
- (void)drawBlockInRect:(struct CGRect)arg1 color:(id)arg2;
- (id)colorForBlockAtIndex:(unsigned long long)arg1;
- (struct CGRect)drawingRectForBlockAtIndex:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

