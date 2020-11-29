//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext;

@interface GTBookmarksSidebarItemsLoader : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_items;
}

+ (id)loaderWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)bookmarkItemForIdentifier:(id)arg1;
- (id)allBookmarkItems;
- (id)bookmarkItemsForBookmarks:(id)arg1;
- (void)reload;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end

