//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTGitRepository, GTGitSubmoduleCustomOptions, GTGitSubmoduleDefaultOptions, NSDictionary, NSString, NSURL;

@interface GTGitSubmodule : NSManagedObject
{
}

+ (id)submoduleWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchAllSubmodulesForRepository:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingNeedsSynchronizing;
+ (id)keyPathsForValuesAffectingCanSynchronize;
+ (id)keyPathsForValuesAffectingAbsoluteFileURL;
+ (id)keyPathsForValuesAffectingAbsoluteFilePath;
+ (id)keyPathsForValuesAffectingValid;
+ (id)keyPathsForValuesAffectingStatusUnmerged;
+ (id)keyPathsForValuesAffectingStatusUpdated;
+ (id)keyPathsForValuesAffectingStatusClean;
+ (id)keyPathsForValuesAffectingStatusUninitialized;
+ (id)keyPathsForValuesAffectingRegistered;
- (void)awakeFromInsert;
- (void)refreshRelationshipsMergingChanges:(BOOL)arg1;
@property(readonly, nonatomic) BOOL needsSynchronizing;
@property(readonly, nonatomic) BOOL canSynchronize;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isRegistered) BOOL registered;
@property(readonly, nonatomic, getter=isStatusUnmerged) BOOL statusUnmerged;
@property(readonly, nonatomic, getter=isStatusUpdated) BOOL statusUpdated;
@property(readonly, nonatomic, getter=isStatusClean) BOOL statusClean;
@property(readonly, nonatomic, getter=isStatusUninitialized) BOOL statusUninitialized;
@property(nonatomic) unsigned long long numberOfDirtyChanges;
@property(nonatomic) unsigned long long updatedCommitsBehind;
@property(nonatomic) unsigned long long updatedCommitsAhead;
@property(nonatomic) long long recurseSubmodules;
@property(nonatomic) long long ignore;
@property(nonatomic) long long updateStrategy;
@property(nonatomic) long long status;
@property(nonatomic, getter=isDirty) BOOL dirty;
@property(readonly, nonatomic) NSURL *absoluteFileURL;
@property(readonly, nonatomic) NSString *absoluteFilePath;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(retain, nonatomic) NSString *commitHash; // @dynamic commitHash;
@property(retain, nonatomic) GTGitSubmoduleCustomOptions *customConfig; // @dynamic customConfig;
@property(retain, nonatomic) GTGitSubmoduleDefaultOptions *defaultConfig; // @dynamic defaultConfig;
@property(retain, nonatomic) NSString *describe; // @dynamic describe;
@property(retain, nonatomic) NSString *indexCommitHash; // @dynamic indexCommitHash;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *remoteUrl; // @dynamic remoteUrl;
@property(retain, nonatomic) GTGitRepository *repository; // @dynamic repository;
@property(retain, nonatomic) GTGitRepository *submoduleRepository; // @dynamic submoduleRepository;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

