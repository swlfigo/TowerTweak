//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitRefSpecInfo, GTGitRemoteInfo;

@interface GTGitUpdateSVNTagsRefSpecAction : GTGitAction
{
    GTGitRemoteInfo *_remoteInfo;
    GTGitRefSpecInfo *_refSpecInfo;
    GTGitRefSpecInfo *_updatedRefSpecInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRefSpecInfo *updatedRefSpecInfo; // @synthesize updatedRefSpecInfo=_updatedRefSpecInfo;
@property(retain, nonatomic) GTGitRefSpecInfo *refSpecInfo; // @synthesize refSpecInfo=_refSpecInfo;
@property(retain, nonatomic) GTGitRemoteInfo *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end

