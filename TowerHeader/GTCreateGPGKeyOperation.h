//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGPGKeyOperation.h"

@class GTGPGKeyDescription, NSManagedObjectID;

@interface GTCreateGPGKeyOperation : GTGPGKeyOperation
{
    GTGPGKeyDescription *_gpgKeyDescription;
    NSManagedObjectID *_createdGPGKeyID;
}

+ (id)operationWithManagedObjectContext:(id)arg1 gpgKeyDescription:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *createdGPGKeyID; // @synthesize createdGPGKeyID=_createdGPGKeyID;
@property(readonly, nonatomic) GTGPGKeyDescription *gpgKeyDescription; // @synthesize gpgKeyDescription=_gpgKeyDescription;
- (void)execute;
- (id)initWithManagedObjectContext:(id)arg1 gpgKeyDescription:(id)arg2;

@end
