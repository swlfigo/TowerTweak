//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSArray;

@interface NSError (DetailedErrors)
+ (id)makeDeletePullRequestCommentServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestCommentServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestCommentServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeMergePullRequestServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeClosePullRequestServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithGitLabAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithGitLabAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithGitLabAPIError:(id)arg1;
+ (id)validationErrorMessagesForGitLabAPIError:(id)arg1 fieldNamesMapping:(id)arg2;
+ (id)makeDeletePullRequestCommentServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestCommentServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestCommentServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeMergePullRequestServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeClosePullRequestServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithGitHubAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithGitHubAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithGitHubAPIError:(id)arg1;
+ (id)validationErrorMessagesForGitHubAPIError:(id)arg1 fieldNamesMapping:(id)arg2;
+ (id)informativeTextForReplyToPullRequestCommentErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 context:(id)arg3;
+ (id)messageTextForReplyToPullRequestCommentErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForDeletePullRequestCommentErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 context:(id)arg3;
+ (id)messageTextForDeletePullRequestCommentErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForEditPullRequestCommentErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForEditPullRequestCommentErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForCreatePullRequestCommentErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForCreatePullRequestCommentErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)makeReplyToPullRequestCommentServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePullRequestCommentServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestCommentServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestCommentServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeMergePullRequestServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeClosePullRequestServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithBitbucketAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithBitbucketAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithBitbucketAPIError:(id)arg1;
+ (id)validationErrorMessagesForBitbucketAPIError:(id)arg1 fieldNamesMapping:(id)arg2;
+ (id)makeReplyToPullRequestCommentServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePullRequestCommentServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestCommentServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestCommentServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeMergePullRequestServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeClosePullRequestServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithStashAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithStashAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithStashAPIError:(id)arg1;
+ (id)validationErrorMessagesForStashAPIError:(id)arg1 fieldNamesMapping:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithBeanstalkAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithBeanstalkAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithBeanstalkAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithBeanstalkAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithBeanstalkAPIError:(id)arg1;
+ (id)informativeTextForCreateRepositoryErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForCreateRepositoryErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForDeletePublicKeyErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 context:(id)arg3;
+ (id)messageTextForDeletePublicKeyErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForCreatePublicKeyErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForCreatePublicKeyErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForMergePullRequestErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 context:(id)arg3;
+ (id)messageTextForMergePullRequestErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForClosePullRequestErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 context:(id)arg3;
+ (id)messageTextForClosePullRequestErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForEditPullRequestErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForEditPullRequestErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)informativeTextForCreatePullRequestErrorWithErrorCode:(long long)arg1 errorMessage:(id)arg2 validationErrorMessages:(id)arg3 context:(id)arg4;
+ (id)messageTextForCreatePullRequestErrorWithErrorCode:(long long)arg1 context:(id)arg2;
+ (id)makeDeletePullRequestCommentServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeReplyToPullRequestCommentServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestCommentServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestCommentServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeMergePullRequestServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeClosePullRequestServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeEditPullRequestServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePullRequestServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeDeletePublicKeyServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreatePublicKeyServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)makeCreateRepositoryServiceErrorWithAzureDevOpsAPIError:(id)arg1 context:(id)arg2;
+ (id)serviceErrorWithAzureDevOpsAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)serviceErrorWithAzureDevOpsAPIError:(id)arg1;
+ (id)validationErrorMessagesForAzureDevOpsAPIError:(id)arg1 fieldNamesMapping:(id)arg2;
@property(readonly, nonatomic) NSArray *detailedErrorCodes;
@property(readonly, nonatomic) NSArray *detailedErrors;
@end

