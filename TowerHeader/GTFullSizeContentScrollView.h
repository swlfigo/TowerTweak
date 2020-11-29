//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class GTFullSizeContentView, GTKeyPathObserver;

@interface GTFullSizeContentScrollView : NSScrollView
{
    double _additionalTopOffset;
    GTKeyPathObserver *_keyPathObserver;
    GTFullSizeContentView *_observedFullSizeContentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GTFullSizeContentView *observedFullSizeContentView; // @synthesize observedFullSizeContentView=_observedFullSizeContentView;
@property(retain, nonatomic) GTKeyPathObserver *keyPathObserver; // @synthesize keyPathObserver=_keyPathObserver;
@property(nonatomic) double additionalTopOffset; // @synthesize additionalTopOffset=_additionalTopOffset;
- (void)updateScrollViewContentOffset;
- (void)fullSizeLayoutContentRectDidChange;
- (void)stopObservingFullSizeContentView;
- (void)startObservingFullSizeContentView;
- (void)viewWillDraw;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
@property(readonly, nonatomic, getter=isObservingFullSizeContentView) BOOL observingFullSizeContentView;
- (void)dealloc;

@end
