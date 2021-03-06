//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRemoteConnectionOptionsInfo, GTGitRemoteInfo, GTGitRepositoryDescriptor, NSManagedObjectID, NSString, NSURL;

@interface GTGitSubmoduleInfo : NSObject
{
    NSManagedObjectID *_submoduleID;
    NSString *_path;
    NSURL *_absoluteFileURL;
    NSURL *_gitDirectoryURL;
    NSString *_name;
    GTGitRemoteConnectionOptionsInfo *_connectionOptionsInfo;
    NSString *_defaultURL;
    NSString *_defaultPath;
    long long _defaultIgnore;
    long long _defaultUpdateStrategy;
    long long _defaultRecurseSubmodules;
    NSString *_customURL;
    long long _customIgnore;
    long long _customUpdateStrategy;
    long long _customRecurseSubmodules;
    GTGitRepositoryDescriptor *_repositoryDescriptor;
    GTGitRepositoryDescriptor *_submoduleRepositoryDescriptor;
    GTGitRemoteInfo *_defaultRemoteInfo;
    GTGitRemoteInfo *_originRemoteInfo;
}

+ (id)submoduleInfoWithSubmodule:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRemoteInfo *originRemoteInfo; // @synthesize originRemoteInfo=_originRemoteInfo;
@property(retain, nonatomic) GTGitRemoteInfo *defaultRemoteInfo; // @synthesize defaultRemoteInfo=_defaultRemoteInfo;
@property(retain, nonatomic) GTGitRepositoryDescriptor *submoduleRepositoryDescriptor; // @synthesize submoduleRepositoryDescriptor=_submoduleRepositoryDescriptor;
@property(retain, nonatomic) GTGitRepositoryDescriptor *repositoryDescriptor; // @synthesize repositoryDescriptor=_repositoryDescriptor;
@property(nonatomic) long long customRecurseSubmodules; // @synthesize customRecurseSubmodules=_customRecurseSubmodules;
@property(nonatomic) long long customUpdateStrategy; // @synthesize customUpdateStrategy=_customUpdateStrategy;
@property(nonatomic) long long customIgnore; // @synthesize customIgnore=_customIgnore;
@property(retain, nonatomic) NSString *customURL; // @synthesize customURL=_customURL;
@property(nonatomic) long long defaultRecurseSubmodules; // @synthesize defaultRecurseSubmodules=_defaultRecurseSubmodules;
@property(nonatomic) long long defaultUpdateStrategy; // @synthesize defaultUpdateStrategy=_defaultUpdateStrategy;
@property(nonatomic) long long defaultIgnore; // @synthesize defaultIgnore=_defaultIgnore;
@property(retain, nonatomic) NSString *defaultPath; // @synthesize defaultPath=_defaultPath;
@property(retain, nonatomic) NSString *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain, nonatomic) GTGitRemoteConnectionOptionsInfo *connectionOptionsInfo; // @synthesize connectionOptionsInfo=_connectionOptionsInfo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *gitDirectoryURL; // @synthesize gitDirectoryURL=_gitDirectoryURL;
@property(retain, nonatomic) NSURL *absoluteFileURL; // @synthesize absoluteFileURL=_absoluteFileURL;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSManagedObjectID *submoduleID; // @synthesize submoduleID=_submoduleID;

@end

