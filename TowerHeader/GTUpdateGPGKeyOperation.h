//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGPGKeyOperation.h"

@class GTGPGKeyDescription, NSManagedObjectID;

@interface GTUpdateGPGKeyOperation : GTGPGKeyOperation
{
    NSManagedObjectID *_gpgKeyID;
    GTGPGKeyDescription *_gpgKeyDescription;
}

+ (id)operationWithManagedObjectContext:(id)arg1 gpgKeyID:(id)arg2 gpgKeyDescription:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) GTGPGKeyDescription *gpgKeyDescription; // @synthesize gpgKeyDescription=_gpgKeyDescription;
@property(readonly, nonatomic) NSManagedObjectID *gpgKeyID; // @synthesize gpgKeyID=_gpgKeyID;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 gpgKeyID:(id)arg2 gpgKeyDescription:(id)arg3;

@end

