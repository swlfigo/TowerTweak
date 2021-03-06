//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNTreeNode.h>

@class NSManagedObjectID;

@interface GTRepositorySidebarItem : FNTreeNode
{
    id _representedObject;
    BOOL _updating;
    long long _itemType;
    NSManagedObjectID *_representedObjectID;
}

+ (id)sidebarItemWithItemType:(long long)arg1 representedObject:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *representedObjectID; // @synthesize representedObjectID=_representedObjectID;
@property(nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating=_updating;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic, getter=isRefItemType) BOOL refItemType;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (id)description;
@property(readonly, nonatomic, getter=isGroupItem) BOOL groupItem;
@property(readonly, nonatomic) GTRepositorySidebarItem *parentItem;
- (id)initWithItemType:(long long)arg1 representedObject:(id)arg2;

@end

