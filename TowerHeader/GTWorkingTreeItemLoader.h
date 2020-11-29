//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, NSString;

@interface GTWorkingTreeItemLoader : NSObject
{
    GTGitRepository *_repository;
    NSString *_filterString;
}

+ (id)loaderWithRepository:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)makeWorkingTreeItemsRecursivelyWithWorkingTreeEntries:(id)arg1 subdirectoryPaths:(id)arg2;
- (id)loadChildItemsForPath:(id)arg1;
- (id)loadTreeRootItemsWithSubdirectoryPaths:(id)arg1;
- (id)loadListRootItems;
- (id)initWithRepository:(id)arg1;

@end
