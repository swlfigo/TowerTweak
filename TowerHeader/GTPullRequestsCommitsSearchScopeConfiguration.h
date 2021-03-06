//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSearchScopeConfiguration.h"

@class GTGitRepository, GTServicePullRequest, NSMutableDictionary;

@interface GTPullRequestsCommitsSearchScopeConfiguration : GTSearchScopeConfiguration
{
    GTGitRepository *_repository;
    GTServicePullRequest *_servicePullRequest;
    NSMutableDictionary *_autocompleteItemControllers;
}

+ (id)filters;
+ (id)defaultScopeFilter;
+ (id)scopeName;
+ (id)scope;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *autocompleteItemControllers; // @synthesize autocompleteItemControllers=_autocompleteItemControllers;
@property(retain, nonatomic) GTServicePullRequest *servicePullRequest; // @synthesize servicePullRequest=_servicePullRequest;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)orderedSearchScopeFiltersForSearchString:(id)arg1;
- (id)searchStringTransformerForFilter:(id)arg1;
- (unsigned long long)lineBreakModeForAutocompleteItem:(id)arg1;
- (id)imageForAutocompleteItem:(id)arg1;
- (id)autocompleteItemControllerForFilter:(id)arg1;
- (id)autocompleteTableCellViewProvider;
- (void)setupAutocompleteControllers;
- (id)initWithOwner:(id)arg1;

@end

