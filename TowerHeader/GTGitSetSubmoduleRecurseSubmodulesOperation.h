//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitSubmoduleConfigOperation.h"

@interface GTGitSetSubmoduleRecurseSubmodulesOperation : GTGitSubmoduleConfigOperation
{
    long long _recurseSubmodulesOption;
}

+ (id)operationWithManagedObjectContext:(id)arg1 submoduleName:(id)arg2 configType:(long long)arg3 recurseSubmodulesOption:(long long)arg4 submoduleRepositoryDescriptor:(id)arg5;
@property(nonatomic) long long recurseSubmodulesOption; // @synthesize recurseSubmodulesOption=_recurseSubmodulesOption;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 submoduleName:(id)arg2 configType:(long long)arg3 recurseSubmodulesOption:(long long)arg4 submoduleRepositoryDescriptor:(id)arg5;

@end

