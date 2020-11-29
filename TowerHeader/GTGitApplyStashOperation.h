//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSString;

@interface GTGitApplyStashOperation : GTGitRepositoryOperation
{
    NSString *_refName;
    unsigned long long _options;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 refName:(id)arg3 options:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *refName; // @synthesize refName=_refName;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (long long)type;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 refName:(id)arg3 options:(unsigned long long)arg4;

@end

