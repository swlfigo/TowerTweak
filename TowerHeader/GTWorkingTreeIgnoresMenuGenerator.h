//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class NSArray;

@interface GTWorkingTreeIgnoresMenuGenerator : GTMenuGenerator
{
    NSArray *_workingTreeEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
- (void)addCreateIgnorePatternMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)addIgnoreAllMenuItemWithTypeWorkingTreeEntries:(id)arg1;
- (void)addIgnoreAllMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)addIgnoreMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)makeMenuItems;

@end
