//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNTreeNode.h>

@class NSArray;

@interface GTPullRequestsChangesetItem : FNTreeNode
{
    BOOL _selectable;
}

@property(readonly, nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) NSArray *childItems;
@property(readonly, nonatomic) GTPullRequestsChangesetItem *parentItem;
@property(readonly, nonatomic) BOOL hasChildItems;

@end
