//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTLineNumberView;

@protocol GTLineNumberViewDelegate <NSObject>
- (double)lineHeightForLineNumberView:(GTLineNumberView *)arg1;
- (double)heightForLineNumberView:(GTLineNumberView *)arg1;
- (struct CGRect)lineNumberView:(GTLineNumberView *)arg1 rectForLineAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfLinesInLineNumberView:(GTLineNumberView *)arg1;
@end

