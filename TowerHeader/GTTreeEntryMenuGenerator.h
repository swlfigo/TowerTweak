//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class GTOpenFileWithApplicationMenuGenerator, NSArray, NSString;

@interface GTTreeEntryMenuGenerator : GTMenuGenerator
{
    id _target;
    NSString *_revision;
    NSArray *_treeEntries;
    GTOpenFileWithApplicationMenuGenerator *_appMenuGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTOpenFileWithApplicationMenuGenerator *appMenuGenerator; // @synthesize appMenuGenerator=_appMenuGenerator;
@property(retain, nonatomic) NSArray *treeEntries; // @synthesize treeEntries=_treeEntries;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)createBlameMenuItemWithTreeEntries:(id)arg1;
- (id)createRawFileMenuItemWithTreeEntries:(id)arg1;
- (id)createShowFileHistoryMenuItemWithTreeEntries:(id)arg1;
- (id)createArchiveMenuItemWithTreeEntries:(id)arg1;
- (id)createExportMenuItemWithTreeEntries:(id)arg1;
- (id)createRestoreMenuItemWithTreeEntries:(id)arg1;
- (id)createOpenWithMenuItemWithTreeEntries:(id)arg1;
- (id)createOpenMenuItemWithTreeEntries:(id)arg1;
- (void)addBlameHistoryMenuItemWithTreeEntries:(id)arg1;
- (void)addRawFileMenuItemWithTreeEntries:(id)arg1;
- (void)addShowFileHistoryMenuItemWithTreeEntries:(id)arg1;
- (void)addArchiveMenuItemWithTreeEntries:(id)arg1;
- (void)addExportMenuItemWithTreeEntries:(id)arg1;
- (void)addRestoreMenuItemWithTreeEntries:(id)arg1;
- (void)addOpenWithMenuItemWithTreeEntries:(id)arg1;
- (void)addOpenMenuItemWithTreeEntries:(id)arg1;
- (id)shortRevision;
- (void)makeMenuItems;

@end
