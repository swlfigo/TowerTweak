//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRemoteInfo, NSString;

@interface GTGitRemoteBranchInfo : NSObject
{
    BOOL _head;
    NSString *_name;
    NSString *_commitHash;
    GTGitRemoteInfo *_remoteInfo;
    NSString *_fullRefName;
    NSString *_localFullRefName;
    NSString *_localRefName;
}

+ (id)remoteBranchInfoWithName:(id)arg1 commitHash:(id)arg2 remoteInfo:(id)arg3 head:(BOOL)arg4;
+ (id)remoteBranchInfoWithRemoteBranch:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localRefName; // @synthesize localRefName=_localRefName;
@property(retain, nonatomic) NSString *localFullRefName; // @synthesize localFullRefName=_localFullRefName;
@property(retain, nonatomic) NSString *fullRefName; // @synthesize fullRefName=_fullRefName;
@property(retain, nonatomic) GTGitRemoteInfo *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
@property(nonatomic, getter=isHead) BOOL head; // @synthesize head=_head;
@property(retain, nonatomic) NSString *commitHash; // @synthesize commitHash=_commitHash;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 commitHash:(id)arg2 remoteInfo:(id)arg3 head:(BOOL)arg4;

@end

