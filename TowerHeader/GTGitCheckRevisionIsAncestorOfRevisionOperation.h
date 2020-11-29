//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class NSString;

@interface GTGitCheckRevisionIsAncestorOfRevisionOperation : GTGitRepositoryOperation
{
    BOOL _ancestor;
    NSString *_revision;
    NSString *_ancestorRevision;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 ancestorRevision:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic, getter=isAncestor) BOOL ancestor; // @synthesize ancestor=_ancestor;
@property(retain, nonatomic) NSString *ancestorRevision; // @synthesize ancestorRevision=_ancestorRevision;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)execute;
- (id)groups;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3 ancestorRevision:(id)arg4;

@end
