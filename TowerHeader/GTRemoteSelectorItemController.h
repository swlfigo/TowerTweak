//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, NSArray, NSManagedObjectContext, NSString;
@protocol GTRemoteSelectorItemControllerDelegate;

@interface GTRemoteSelectorItemController : NSObject
{
    id <GTRemoteSelectorItemControllerDelegate> _delegate;
    NSString *_searchPattern;
    GTGitRepository *_repository;
    NSArray *_items;
    NSManagedObjectContext *_context;
}

+ (id)controllerWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(nonatomic) __weak id <GTRemoteSelectorItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)waitUntilLoaded;
- (void)cancel;
- (void)loadAdditionalEntries;
- (void)reload;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;

@end
