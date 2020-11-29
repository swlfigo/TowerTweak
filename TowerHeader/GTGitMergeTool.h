//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitMergeTool, GTGitRepository, NSString;

@interface GTGitMergeTool : NSObject
{
    BOOL _keepsBackupFiles;
    GTGitRepository *_repository;
    NSString *_mergeToolName;
    FNGitMergeTool *_gitMergeTool;
}

+ (id)mergeToolWithRepository:(id)arg1 mergeToolName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitMergeTool *gitMergeTool; // @synthesize gitMergeTool=_gitMergeTool;
@property(nonatomic) BOOL keepsBackupFiles; // @synthesize keepsBackupFiles=_keepsBackupFiles;
@property(retain, nonatomic) NSString *mergeToolName; // @synthesize mergeToolName=_mergeToolName;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)cancel;
- (void)launchWithFilePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRepository:(id)arg1 mergeToolName:(id)arg2;
- (id)init;

@end

