//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSString;

@interface GTGitFlowCreateReleaseBranchOperation : GTGitRepositoryOperation
{
    NSString *_releaseName;
    NSString *_startingPoint;
    unsigned long long _options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 releaseName:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *startingPoint; // @synthesize startingPoint=_startingPoint;
@property(copy, nonatomic) NSString *releaseName; // @synthesize releaseName=_releaseName;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 releaseName:(id)arg3;

@end

