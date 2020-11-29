//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTServiceRepositoryOperation.h"

@class GTServicePullRequestCommentInfo, GTUpdateChangeset, NSManagedObjectID, NSString;

@interface GTServiceCreatePullRequestCommentOperation : GTServiceRepositoryOperation
{
    GTServicePullRequestCommentInfo *_createdCommentInfo;
    NSManagedObjectID *_servicePullRequestID;
    NSManagedObjectID *_parentCommentID;
    NSString *_body;
    GTUpdateChangeset *_changeset;
}

+ (id)operationWithManagedObjectContext:(id)arg1 servicePullRequest:(id)arg2 parentComment:(id)arg3 body:(id)arg4 account:(id)arg5;
+ (id)operationWithManagedObjectContext:(id)arg1 servicePullRequest:(id)arg2 body:(id)arg3 account:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) GTUpdateChangeset *changeset; // @synthesize changeset=_changeset;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSManagedObjectID *parentCommentID; // @synthesize parentCommentID=_parentCommentID;
@property(retain, nonatomic) NSManagedObjectID *servicePullRequestID; // @synthesize servicePullRequestID=_servicePullRequestID;
@property(retain, nonatomic) GTServicePullRequestCommentInfo *createdCommentInfo; // @synthesize createdCommentInfo=_createdCommentInfo;
- (id)createWithPullRequestCommentInfo:(id)arg1 error:(id *)arg2;
- (BOOL)validateCreatePullRequestComment;
- (void)performRequest;
- (void)execute;
- (void)operationWillExecute;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 servicePullRequest:(id)arg2 parentComment:(id)arg3 body:(id)arg4 account:(id)arg5;

@end

