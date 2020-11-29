//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSString;
@protocol GTQuickOpenItemLoaderDelegate;

@interface GTQuickOpenItemLoader : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_items;
    NSString *_searchPattern;
    NSArray *_sortDescriptors;
    id <GTQuickOpenItemLoaderDelegate> _delegate;
}

+ (id)loaderWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTQuickOpenItemLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)startSearchWithTerms:(id)arg1;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (void)cancel;
- (void)reload;
- (id)initWithManagedObjectContext:(id)arg1;

@end

