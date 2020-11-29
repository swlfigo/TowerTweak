//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTSearchLocalHardDriveItem : NSObject
{
    BOOL _selected;
    BOOL _preselected;
    NSString *_repositoryName;
    NSString *_repositoryPath;
}

+ (id)itemWithRepository:(id)arg1;
+ (id)keyPathsForValuesAffectingRepositoryChecked;
- (void).cxx_destruct;
@property(nonatomic, getter=isPreselected) BOOL preselected; // @synthesize preselected=_preselected;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *repositoryPath; // @synthesize repositoryPath=_repositoryPath;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)repositoryURL;
- (id)initWithFilePath:(id)arg1;

@end

