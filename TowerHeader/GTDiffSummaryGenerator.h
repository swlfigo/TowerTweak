//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTDiffSummaryGenerator : NSObject
{
}

- (id)changesSummaryWithDiff:(id)arg1;
- (id)binaryFileSummaryWithDiff:(id)arg1;
- (id)copiedFileSummaryWithDiff:(id)arg1;
- (id)fileStatusRenamedFileSummaryWithDiff:(id)arg1;
- (id)fileStatusCopiedFileSummaryWithDiff:(id)arg1;
- (id)fileStatusDeletedSummaryWithDiff:(id)arg1;
- (id)fileStatusAddedSummaryWithDiff:(id)arg1;
- (id)fileModeChangedSummaryWithDiff:(id)arg1;
- (id)generateSummaryFromDiff:(id)arg1;

@end

