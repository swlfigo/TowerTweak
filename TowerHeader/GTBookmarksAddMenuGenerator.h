//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@interface GTBookmarksAddMenuGenerator : GTMenuGenerator
{
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)makeCloneSVNRepositoryItem;
- (id)makeCloneGitRepositoryItem;
- (id)makeSearchLocalHardDriveItem;
- (id)makeCreateRepositoryItem;
- (id)makeAddBookmarkFolderItem;
- (id)makeAddBookmarkItem;
- (void)makeMenuItems;

@end

