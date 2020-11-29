//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;
@protocol GTCollapsableViewDelegate;

@interface GTCollapsableView : NSView
{
    BOOL _collapsed;
    BOOL _animating;
    id <GTCollapsableViewDelegate> _delegate;
    NSView *_contentView;
    double _animationDuration;
    long long _animationStyle;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(getter=isCollapsed) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property __weak id <GTCollapsableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidExpandAnimated:(BOOL)arg1;
- (void)viewWillExpandAnimated:(BOOL)arg1;
- (void)viewDidCollapseAnimated:(BOOL)arg1;
- (void)viewWillCollapseAnimated:(BOOL)arg1;
- (double)fittingHeight;
- (void)updateSize:(BOOL)arg1;
- (void)expandViewAnimated:(BOOL)arg1;
- (void)collapseViewAnimated:(BOOL)arg1;
- (void)toggleViewAnimated:(BOOL)arg1;
- (void)updateConstraints;
@property(readonly, getter=isExpanded) BOOL expanded;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
