//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitSubmoduleConfigOperation.h"

@class NSString;

@interface GTGitSetSubmoduleURLOperation : GTGitSubmoduleConfigOperation
{
    NSString *_submoduleURL;
}

+ (id)operationWithManagedObjectContext:(id)arg1 submoduleName:(id)arg2 configType:(long long)arg3 submoduleURL:(id)arg4 submoduleRepositoryDescriptor:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *submoduleURL; // @synthesize submoduleURL=_submoduleURL;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 submoduleName:(id)arg2 configType:(long long)arg3 submoduleURL:(id)arg4 submoduleRepositoryDescriptor:(id)arg5;

@end
