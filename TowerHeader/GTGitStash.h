//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRef.h"

@class GTGitRepository, NSDate, NSNumber, NSString;

@interface GTGitStash : GTGitRef
{
}

+ (id)stashWithCommitHash:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchAllStashesForRepository:(id)arg1 error:(id *)arg2;
+ (id)stashWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (id)dictionaryRepresentation;

// Remaining properties
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) NSString *indexCommitHash; // @dynamic indexCommitHash;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *originBranch; // @dynamic originBranch;
@property(retain, nonatomic) NSString *originCommitHash; // @dynamic originCommitHash;
@property(retain, nonatomic) GTGitRepository *repository; // @dynamic repository;
@property(retain, nonatomic) NSString *untrackedCommitHash; // @dynamic untrackedCommitHash;
@property(retain, nonatomic) NSString *userMessage; // @dynamic userMessage;

@end

