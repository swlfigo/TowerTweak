//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class GTGitRepositoryDescriptor, NSString;

@interface GTGitUnsetSubmoduleUpdateStrategyAction : GTGitAction
{
    NSString *_submoduleName;
    GTGitRepositoryDescriptor *_submoduleRepositoryDescriptor;
    long long _configType;
}

- (void).cxx_destruct;
@property(nonatomic) long long configType; // @synthesize configType=_configType;
@property(retain, nonatomic) GTGitRepositoryDescriptor *submoduleRepositoryDescriptor; // @synthesize submoduleRepositoryDescriptor=_submoduleRepositoryDescriptor;
@property(retain, nonatomic) NSString *submoduleName; // @synthesize submoduleName=_submoduleName;
- (void)actionDidFinish;
- (void)main;

@end

