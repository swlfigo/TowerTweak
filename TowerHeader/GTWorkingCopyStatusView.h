//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface GTWorkingCopyStatusView : NSView
{
    NSView *_headerView;
    NSView *_commitAreaView;
    NSView *_fileListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *fileListView; // @synthesize fileListView=_fileListView;
@property(retain, nonatomic) NSView *commitAreaView; // @synthesize commitAreaView=_commitAreaView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void)updateConstraints;
- (void)layoutSubviews;

@end

