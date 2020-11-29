//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol GTAutocompleteItemControllerDelegate;

@protocol GTAutocompleteItemController <NSObject>
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(copy, nonatomic) NSString *searchPattern;
@property(readonly, nonatomic) NSArray *items;
@property(nonatomic) __weak id <GTAutocompleteItemControllerDelegate> delegate;
- (void)reset;
- (void)cancel;
- (void)reloadWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)reload;

@optional
- (void)performRemoteSearches;
@end
