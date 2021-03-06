//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTBackupInfo, NSArray, NSMutableSet;

@interface GTGitRestoreSubmodulesAction : GTGitAction
{
    NSArray *_submoduleInfos;
    GTBackupInfo *_gitDirectoryBackupInfo;
    GTBackupInfo *_workingDirectoryBackupInfo;
    NSMutableSet *_submodulesToAdd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *submodulesToAdd; // @synthesize submodulesToAdd=_submodulesToAdd;
@property(retain, nonatomic) GTBackupInfo *workingDirectoryBackupInfo; // @synthesize workingDirectoryBackupInfo=_workingDirectoryBackupInfo;
@property(retain, nonatomic) GTBackupInfo *gitDirectoryBackupInfo; // @synthesize gitDirectoryBackupInfo=_gitDirectoryBackupInfo;
@property(retain, nonatomic) NSArray *submoduleInfos; // @synthesize submoduleInfos=_submoduleInfos;
- (void)actionDidFinish;
- (void)actionDidAddSubmodule:(id)arg1;
- (void)addRemainingSubmodules;
- (void)restoreWorkingDirectoryIfRequired;
- (void)restoreGitDirectoryIfRequired;
- (void)main;

@end

