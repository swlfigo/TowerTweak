//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

@class NSArray, NSSet;

@interface GTAnnotatedTextViewNew : NSSplitView
{
    NSSet *_scrollViewObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *scrollViewObservers; // @synthesize scrollViewObservers=_scrollViewObservers;
- (void)scrollViewDidChangeBounds:(id)arg1;
- (void)stopSynchronizingScrollViews;
- (void)synchronizeScrollViews;
@property(readonly, nonatomic) NSArray *allScrollViews;
- (double)dividerThickness;

@end

