//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTHistoryViewSettings : NSObject
{
    BOOL _showsGraph;
    BOOL _showsFirstParentOnly;
    BOOL _sortsByTopoOrder;
    BOOL _sortsByDate;
    BOOL _verifiesGPGSignatures;
    BOOL _comparesBranches;
    long long _groupingType;
    long long _commitViewSize;
}

+ (id)currentViewSettings;
@property(nonatomic) long long commitViewSize; // @synthesize commitViewSize=_commitViewSize;
@property(nonatomic) long long groupingType; // @synthesize groupingType=_groupingType;
@property(nonatomic) BOOL comparesBranches; // @synthesize comparesBranches=_comparesBranches;
@property(nonatomic) BOOL verifiesGPGSignatures; // @synthesize verifiesGPGSignatures=_verifiesGPGSignatures;
@property(nonatomic) BOOL sortsByDate; // @synthesize sortsByDate=_sortsByDate;
@property(nonatomic) BOOL sortsByTopoOrder; // @synthesize sortsByTopoOrder=_sortsByTopoOrder;
@property(nonatomic) BOOL showsFirstParentOnly; // @synthesize showsFirstParentOnly=_showsFirstParentOnly;
@property(nonatomic) BOOL showsGraph; // @synthesize showsGraph=_showsGraph;
- (id)description;

@end
