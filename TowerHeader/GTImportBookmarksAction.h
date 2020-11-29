//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBookmarkAction.h"

@class GTBookmark, GTUpdateChangeset, NSArray;

@interface GTImportBookmarksAction : GTBookmarkAction
{
    NSArray *_bookmarkDescriptions;
    GTBookmark *_parentBookmark;
    NSArray *_createdBookmarks;
    GTUpdateChangeset *_changeset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *createdBookmarks; // @synthesize createdBookmarks=_createdBookmarks;
@property(retain, nonatomic) GTBookmark *parentBookmark; // @synthesize parentBookmark=_parentBookmark;
@property(copy, nonatomic) NSArray *bookmarkDescriptions; // @synthesize bookmarkDescriptions=_bookmarkDescriptions;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidCreateBookmarksWithIDs:(id)arg1;
- (void)main;

@end

