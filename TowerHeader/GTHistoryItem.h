//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTHistoryItem : NSObject
{
    BOOL _isFirstItem;
    BOOL _isLastItem;
    BOOL _isFirstInGroup;
    BOOL _isLastInGroup;
    unsigned long long _groupNumber;
}

@property(nonatomic) unsigned long long groupNumber; // @synthesize groupNumber=_groupNumber;
@property(nonatomic) BOOL isLastInGroup; // @synthesize isLastInGroup=_isLastInGroup;
@property(nonatomic) BOOL isFirstInGroup; // @synthesize isFirstInGroup=_isFirstInGroup;
@property(nonatomic) BOOL isLastItem; // @synthesize isLastItem=_isLastItem;
@property(nonatomic) BOOL isFirstItem; // @synthesize isFirstItem=_isFirstItem;

@end

