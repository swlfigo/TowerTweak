//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, NSURL;

@interface GTServiceRepositoryFetchInfo : NSObject
{
    BOOL _organizationRepository;
    NSManagedObjectID *_serviceAccountID;
    NSManagedObjectID *_remoteID;
    NSString *_repositoryUsername;
    NSString *_repositoryName;
    NSURL *_remoteURL;
}

+ (id)fetchInfoForRemote:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic, getter=isOrganizationRepository) BOOL organizationRepository; // @synthesize organizationRepository=_organizationRepository;
@property(retain, nonatomic) NSString *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) NSString *repositoryUsername; // @synthesize repositoryUsername=_repositoryUsername;
@property(retain, nonatomic) NSManagedObjectID *remoteID; // @synthesize remoteID=_remoteID;
@property(retain, nonatomic) NSManagedObjectID *serviceAccountID; // @synthesize serviceAccountID=_serviceAccountID;

@end
