//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class NSArray;

@interface GTGitUnsetAssumeUnchangedEntriesAction : GTGitAction
{
    NSArray *_entries;
    NSArray *_submoduleEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *submoduleEntries; // @synthesize submoduleEntries=_submoduleEntries;
@property(retain, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (id)submoduleEntriesFromEntries:(id)arg1;
- (id)validWorkingTreeEntriesFromEntries:(id)arg1;
- (void)main;

@end

