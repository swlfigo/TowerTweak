//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, NSArray, NSManagedObjectContext, NSString;
@protocol GTRefSelectorItemControllerDelegate;

@interface GTRefSelectorItemController : NSObject
{
    BOOL _loadsHEADRevision;
    BOOL _loadsBranches;
    BOOL _loadsTags;
    id <GTRefSelectorItemControllerDelegate> _delegate;
    NSString *_searchPattern;
    GTGitRepository *_repository;
    NSArray *_items;
    NSArray *_disallowedRefNames;
    NSManagedObjectContext *_context;
}

+ (id)controllerWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *disallowedRefNames; // @synthesize disallowedRefNames=_disallowedRefNames;
@property(nonatomic) BOOL loadsTags; // @synthesize loadsTags=_loadsTags;
@property(nonatomic) BOOL loadsBranches; // @synthesize loadsBranches=_loadsBranches;
@property(nonatomic) BOOL loadsHEADRevision; // @synthesize loadsHEADRevision=_loadsHEADRevision;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
@property(retain, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(nonatomic) __weak id <GTRefSelectorItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)waitUntilLoaded;
- (void)reset;
- (void)cancel;
- (void)loadAdditionalEntries;
- (void)reload;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;

@end

