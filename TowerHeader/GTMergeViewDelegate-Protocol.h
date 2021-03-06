//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTMergeView, NSIndexSet, NSMenu;

@protocol GTMergeViewDelegate <NSObject>

@optional
- (NSMenu *)mergeView:(GTMergeView *)arg1 menuForItemAtIndex:(long long)arg2;
- (void)mergeView:(GTMergeView *)arg1 startOverWithIndexSet:(NSIndexSet *)arg2;
- (void)mergeView:(GTMergeView *)arg1 confirmWithIndexSet:(NSIndexSet *)arg2;
- (void)mergeView:(GTMergeView *)arg1 cancelResolvingWithIndexSet:(NSIndexSet *)arg2;
- (void)mergeView:(GTMergeView *)arg1 startResolvingWithIndexSet:(NSIndexSet *)arg2;
- (void)mergeViewDidChangeSelection:(GTMergeView *)arg1;
@end

