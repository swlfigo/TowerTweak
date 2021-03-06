//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTGitRemote, NSNumber, NSString;

@interface GTGitRefSpec : NSManagedObject
{
}

+ (id)refSpecWithString:(id)arg1 managedObjectContext:(id)arg2;
+ (id)refSpecWithString:(id)arg1;
+ (id)gerritPushRefSpecWithRevision:(id)arg1 reviewName:(id)arg2;
+ (id)gerritPushRefSpecWithRefName:(id)arg1;
- (void)setValuesFromRefSpecString:(id)arg1;
- (id)stringValue;

// Remaining properties
@property(retain, nonatomic) NSNumber *allowsNonFastForwards; // @dynamic allowsNonFastForwards;
@property(retain, nonatomic) GTGitRemote *downstreamRemote; // @dynamic downstreamRemote;
@property(retain, nonatomic) NSString *localRefName; // @dynamic localRefName;
@property(retain, nonatomic) NSString *remoteRefName; // @dynamic remoteRefName;
@property(retain, nonatomic) GTGitRemote *svnBranchRefSpecsRemote; // @dynamic svnBranchRefSpecsRemote;
@property(retain, nonatomic) GTGitRemote *svnTagRefSpecsRemote; // @dynamic svnTagRefSpecsRemote;
@property(retain, nonatomic) GTGitRemote *svnTrunkRefSpecsRemote; // @dynamic svnTrunkRefSpecsRemote;
@property(retain, nonatomic) GTGitRemote *upstreamRemote; // @dynamic upstreamRemote;

@end

