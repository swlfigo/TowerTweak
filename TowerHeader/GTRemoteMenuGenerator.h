//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class GTGitRemote;

@interface GTRemoteMenuGenerator : GTMenuGenerator
{
    GTGitRemote *_remote;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRemote *remote; // @synthesize remote=_remote;
- (void)addViewRemoteInBrowserMenuItemWithRemote:(id)arg1;
- (void)addDeleteRemoteMenuItemWithRemote:(id)arg1;
- (void)addEditConnectionSettingsMenuItemWithRemote:(id)arg1;
- (void)addRenameRemoteMenuItemWithRemote:(id)arg1;
- (void)addPushAllTagsMenuItemWithRemote:(id)arg1;
- (void)addPruneMenuItemWithRemote:(id)arg1;
- (void)addQuickFetchRemoteMenuItemWithRemote:(id)arg1;
- (void)addFetchRemoteMenuItemWithRemote:(id)arg1;
- (void)makeMenuItems;

@end

