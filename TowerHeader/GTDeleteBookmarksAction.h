//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBookmarkAction.h"

@class NSArray;

@interface GTDeleteBookmarksAction : GTBookmarkAction
{
    BOOL _shouldDeleteRepositories;
    NSArray *_bookmarks;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldDeleteRepositories; // @synthesize shouldDeleteRepositories=_shouldDeleteRepositories;
@property(retain, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void)actionDidFailWithError:(id)arg1;
- (void)actionDidFinish;
- (void)main;

@end
