//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTGitRepository, NSManagedObjectContext;

@interface GTGitController : NSObject
{
    GTGitRepository *_repository;
    NSManagedObjectContext *_managedObjectContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)initWithRepository:(id)arg1;
- (id)init;

@end

