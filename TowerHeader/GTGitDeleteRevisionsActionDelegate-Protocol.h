//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTGitDeleteRevisionsAction;

@protocol GTGitDeleteRevisionsActionDelegate <NSObject>

@optional
- (void)deleteRevisionsActionNeedsAutoUpdateSubmodules:(GTGitDeleteRevisionsAction *)arg1;
- (void)deleteRevisionsActionNeedsAutoStash:(GTGitDeleteRevisionsAction *)arg1;
@end
