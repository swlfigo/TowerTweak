//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTOperation.h"

@class NSManagedObjectContext;

@interface GTBookmarkOperation : GTOperation
{
    NSManagedObjectContext *_context;
}

+ (id)operationWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end

