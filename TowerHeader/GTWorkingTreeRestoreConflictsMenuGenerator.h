//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class NSArray;

@interface GTWorkingTreeRestoreConflictsMenuGenerator : GTMenuGenerator
{
    NSArray *_workingTreeEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
- (void)addRestoreAncestorVersionMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)addRestoreTheirVersionMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)addRestoreMyVersionMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)addRestoreUnmergedVersionMenuItemWithWorkingTreeEntries:(id)arg1;
- (void)makeMenuItems;

@end
