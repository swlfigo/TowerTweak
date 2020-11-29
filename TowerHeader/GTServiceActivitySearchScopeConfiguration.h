//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTSearchScopeConfiguration.h"

@class GTAutocompleteWindowController, NSMutableDictionary;

@interface GTServiceActivitySearchScopeConfiguration : GTSearchScopeConfiguration
{
    NSMutableDictionary *_autocompleteItemControllers;
    GTAutocompleteWindowController *_autocompleteWindowController;
}

+ (id)filters;
+ (id)defaultScopeFilter;
+ (id)scopeName;
+ (id)scope;
- (void).cxx_destruct;
@property(retain, nonatomic) GTAutocompleteWindowController *autocompleteWindowController; // @synthesize autocompleteWindowController=_autocompleteWindowController;
@property(retain, nonatomic) NSMutableDictionary *autocompleteItemControllers; // @synthesize autocompleteItemControllers=_autocompleteItemControllers;
- (id)autocompleteItemControllerForFilter:(id)arg1;
- (void)setupAutocompleteControllers;
- (id)initWithOwner:(id)arg1;

@end

