//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (GTServiceErrors)
+ (id)userInfoForDeletePullRequestCommentErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForEditPullRequestCommentErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForCreatePullRequestCommentErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForMergePullRequestErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForClosePullRequestErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForEditPullRequestErrorWithPullRequestNumber:(id)arg1;
+ (id)userInfoForCreatePullRequestErrorWithRepositoryName:(id)arg1;
+ (id)userInfoForDeletePublicKeyErrorWithPublicKeyName:(id)arg1;
+ (id)userInfoForCreatePublicKeyError;
+ (id)userInfoForCreateRepositoryError;
+ (id)serviceHostValidationErrorWithServiceAPIError:(id)arg1 userInfo:(id)arg2;
+ (id)NSURLErrorFromServiceError:(id)arg1;
+ (BOOL)isServiceServerTrustError:(id)arg1;
+ (id)serviceServerTrustErrorWithNSURLError:(id)arg1;
+ (id)serviceServerTrustErrorWithError:(id)arg1;
+ (id)serviceErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (void)loadErrorDefinitionsForServiceErrorDomain;
+ (void)load;
@property(readonly, nonatomic, getter=isServiceErrorDomain) BOOL serviceErrorDomain;
@end

