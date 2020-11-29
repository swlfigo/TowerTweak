//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingDestination-Protocol.h"

@class NSColor, NSString;
@protocol GTBookmarksDropZoneViewDelegate;

@interface GTBookmarksDropZoneView : NSView <NSDraggingDestination>
{
    id <GTBookmarksDropZoneViewDelegate> _delegate;
    double _lineWidth;
    double _dashLength;
    double _dashSpaceLength;
    double _dashPhase;
    double _borderRadius;
    NSColor *_lineColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(nonatomic) double dashPhase; // @synthesize dashPhase=_dashPhase;
@property(nonatomic) double dashSpaceLength; // @synthesize dashSpaceLength=_dashSpaceLength;
@property(nonatomic) double dashLength; // @synthesize dashLength=_dashLength;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) __weak id <GTBookmarksDropZoneViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewDidReceiveRemoteURLString:(id)arg1;
- (void)viewDidReceiveFileURLs:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
