//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNGitDiffTool, GTGitRepository, NSString;

@interface GTGitDiffTool : NSObject
{
    GTGitRepository *_repository;
    NSString *_diffToolName;
    FNGitDiffTool *_gitDiffTool;
}

+ (id)diffToolWithRepository:(id)arg1 diffToolName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitDiffTool *gitDiffTool; // @synthesize gitDiffTool=_gitDiffTool;
@property(retain, nonatomic) NSString *diffToolName; // @synthesize diffToolName=_diffToolName;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)cancel;
- (void)compareRevisionRange:(id)arg1 filePaths:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compareRevision:(id)arg1 withRevision:(id)arg2 filePaths:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithRepository:(id)arg1 diffToolName:(id)arg2;
- (id)init;

@end

