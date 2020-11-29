//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTOperation.h"

@class NSManagedObjectContext;

@interface GTGitOperation : GTOperation
{
    BOOL _loaded;
    NSManagedObjectContext *_managedObjectContext;
}

- (void).cxx_destruct;
@property(getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)finishWithError:(id)arg1;
- (void)waitUntilLoaded;
- (id)mappedErrorForGitError:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;

@end

