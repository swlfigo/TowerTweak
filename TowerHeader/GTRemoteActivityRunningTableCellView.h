//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTRemoteActivityTableCellView.h"

@class NSColor;

@interface GTRemoteActivityRunningTableCellView : GTRemoteActivityTableCellView
{
}

+ (double)height;
+ (id)keyPathsForValuesAffectingIndeterminate;
+ (id)keyPathsForValuesAffectingProgressValue;
+ (id)keyPathsForValuesAffectingProgressSummary;
@property(readonly) NSColor *secondaryTextColor;
@property(readonly) NSColor *textColor;
- (id)progressSummary;
- (id)progressValue;
- (id)maxProgressValue;
- (id)minProgressValue;
- (BOOL)isIndeterminate;

@end

