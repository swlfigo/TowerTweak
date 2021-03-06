//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface GTStackView : NSView
{
    BOOL _centersViewsVertically;
    BOOL _automaticallyReducesCompressionResistances;
    double _interitemSpacing;
    struct NSEdgeInsets _edgeInsets;
}

@property(nonatomic) BOOL automaticallyReducesCompressionResistances; // @synthesize automaticallyReducesCompressionResistances=_automaticallyReducesCompressionResistances;
@property(nonatomic) BOOL centersViewsVertically; // @synthesize centersViewsVertically=_centersViewsVertically;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)update;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

