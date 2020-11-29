//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRef, GTGitRepository, GTHistoryRefsConfiguration, GTHistoryViewSettings, NSArray;

@interface GTHistoryViewConfiguration : NSObject
{
    BOOL _titleBarVisible;
    GTHistoryRefsConfiguration *_refsConfiguration;
    GTHistoryViewSettings *_viewSettings;
    NSArray *_searchTokens;
    GTGitRef *_baseBranchRef;
    unsigned long long _defaultNumberOfCommitsInHistory;
    GTGitRepository *_repository;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(nonatomic, getter=isTitleBarVisible) BOOL titleBarVisible; // @synthesize titleBarVisible=_titleBarVisible;
@property(nonatomic) unsigned long long defaultNumberOfCommitsInHistory; // @synthesize defaultNumberOfCommitsInHistory=_defaultNumberOfCommitsInHistory;
@property(retain, nonatomic) GTGitRef *baseBranchRef; // @synthesize baseBranchRef=_baseBranchRef;
@property(retain, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(retain, nonatomic) GTHistoryViewSettings *viewSettings; // @synthesize viewSettings=_viewSettings;
@property(retain, nonatomic) GTHistoryRefsConfiguration *refsConfiguration; // @synthesize refsConfiguration=_refsConfiguration;

@end
