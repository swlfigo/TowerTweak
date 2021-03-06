//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTServicePullRequest, GTUpdateChangeset, NSArray, NSManagedObjectContext, NSMutableArray, NSMutableDictionary;

@interface GTServicePullRequestCommentsUpdater : NSObject
{
    GTServicePullRequest *_servicePullRequest;
    NSArray *_commentInfos;
    GTUpdateChangeset *_changeset;
    NSManagedObjectContext *_managedObjectContext;
    NSMutableDictionary *_commentsByID;
    NSMutableArray *_obsoleteServicePullRequestComments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *obsoleteServicePullRequestComments; // @synthesize obsoleteServicePullRequestComments=_obsoleteServicePullRequestComments;
@property(retain, nonatomic) NSMutableDictionary *commentsByID; // @synthesize commentsByID=_commentsByID;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(retain, nonatomic) NSArray *commentInfos; // @synthesize commentInfos=_commentInfos;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
- (BOOL)allCommentsDeleted:(id)arg1;
- (id)createCommentWithCommentInfo:(id)arg1 identifier:(id)arg2;
- (id)createCommentWithCommentInfo:(id)arg1;
- (id)findCommentWithIdentifier:(id)arg1;
- (void)deleteObsoleteServicePullRequestComments;
- (void)updateServicePullRequestComment:(id)arg1 commentInfo:(id)arg2;
- (void)createOrUpdateServicePullRequestComments:(id)arg1;
- (BOOL)update:(id *)arg1;
- (id)initWithServicePullRequest:(id)arg1 commentInfos:(id)arg2;

@end

