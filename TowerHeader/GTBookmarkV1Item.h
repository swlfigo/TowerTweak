//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface GTBookmarkV1Item : NSObject
{
    BOOL _expanded;
    long long _type;
    NSString *_title;
    NSString *_UUID;
    NSURL *_repositoryURL;
    unsigned long long _sortingOrder;
    NSArray *_childItemUUIDs;
    NSArray *_childItems;
}

+ (id)bookmarkItemWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(retain, nonatomic) NSArray *childItemUUIDs; // @synthesize childItemUUIDs=_childItemUUIDs;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(nonatomic) unsigned long long sortingOrder; // @synthesize sortingOrder=_sortingOrder;
@property(retain, nonatomic) NSURL *repositoryURL; // @synthesize repositoryURL=_repositoryURL;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (BOOL)validateBookmarkType;
- (BOOL)validateFolderType;
- (BOOL)validate:(id *)arg1;

@end

