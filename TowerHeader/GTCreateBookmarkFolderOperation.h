//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTBookmarkOperation.h"

@class NSManagedObjectID, NSString;

@interface GTCreateBookmarkFolderOperation : GTBookmarkOperation
{
    NSString *_bookmarkTitle;
    NSManagedObjectID *_parentBookmarkID;
    unsigned long long _childIndex;
    NSManagedObjectID *_createdBookmarkID;
}

+ (id)operationWithTitle:(id)arg1 parentBookmarkID:(id)arg2 childIndex:(unsigned long long)arg3 context:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *createdBookmarkID; // @synthesize createdBookmarkID=_createdBookmarkID;
@property(nonatomic) unsigned long long childIndex; // @synthesize childIndex=_childIndex;
@property(retain, nonatomic) NSManagedObjectID *parentBookmarkID; // @synthesize parentBookmarkID=_parentBookmarkID;
@property(retain, nonatomic) NSString *bookmarkTitle; // @synthesize bookmarkTitle=_bookmarkTitle;
- (void)execute;
- (id)initWithTitle:(id)arg1 parentBookmarkID:(id)arg2 childIndex:(unsigned long long)arg3 context:(id)arg4;

@end

