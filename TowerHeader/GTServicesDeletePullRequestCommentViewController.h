//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTServicePullRequestComment;

@interface GTServicesDeletePullRequestCommentViewController : GTDialogueViewController
{
    GTServicePullRequestComment *_servicePullRequestComment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTServicePullRequestComment *servicePullRequestComment; // @synthesize servicePullRequestComment=_servicePullRequestComment;
- (void)updateTitleAndText;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;

@end

