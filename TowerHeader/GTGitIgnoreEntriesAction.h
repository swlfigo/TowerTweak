//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class NSArray;

@interface GTGitIgnoreEntriesAction : GTGitAction
{
    NSArray *_workingTreeEntries;
    unsigned long long _options;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *workingTreeEntries; // @synthesize workingTreeEntries=_workingTreeEntries;
- (id)ignoreAllPatternsForWorkingTreeEntries:(id)arg1;
- (id)ignorePatternsForWorkingTreeEntries:(id)arg1;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end

