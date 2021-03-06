//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTWorkingTreeViewSettingsActions-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class GTWorkingTreeViewSettingsController, GTWorkingTreeViewSettingsMenuGenerator, NSArray, NSMenu, NSString;

@interface GTWorkingTreeViewSettingsMenuController : NSObject <GTWorkingTreeViewSettingsActions, NSMenuDelegate>
{
    BOOL _generatesKeyEquivalents;
    NSMenu *_menu;
    GTWorkingTreeViewSettingsMenuGenerator *_menuGenerator;
    GTWorkingTreeViewSettingsController *_settingsController;
    NSArray *_defaultMenuItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *defaultMenuItems; // @synthesize defaultMenuItems=_defaultMenuItems;
@property(retain, nonatomic) GTWorkingTreeViewSettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) GTWorkingTreeViewSettingsMenuGenerator *menuGenerator; // @synthesize menuGenerator=_menuGenerator;
@property(nonatomic) BOOL generatesKeyEquivalents; // @synthesize generatesKeyEquivalents=_generatesKeyEquivalents;
@property(nonatomic) __weak NSMenu *menu; // @synthesize menu=_menu;
- (void)menuNeedsUpdate:(id)arg1;
- (void)selectWorkingTreeViewMode:(id)arg1;
- (void)toggleShowAssumeUnchangedItems:(id)arg1;
- (void)toggleShowIgnoredItems:(id)arg1;
- (void)toggleShowNonModifiedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

