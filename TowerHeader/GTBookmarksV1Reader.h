//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface GTBookmarksV1Reader : NSObject
{
    NSURL *_fileURL;
    NSDictionary *_bookmarksByUUID;
    NSArray *_childItemUUIDs;
}

+ (id)defaultReader;
+ (id)oldBookmarksURL;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *childItemUUIDs; // @synthesize childItemUUIDs=_childItemUUIDs;
@property(retain, nonatomic) NSDictionary *bookmarksByUUID; // @synthesize bookmarksByUUID=_bookmarksByUUID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (BOOL)validateFileURL:(id)arg1 error:(id *)arg2;
- (id)allValidBookmarkURLs;
- (id)allBookmarks;
- (id)allBookmarkDescriptions;
- (BOOL)loadBookmarks:(id *)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

