//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GTServiceAccount, NSDate, NSString;

@interface GTServicePublicKey : NSManagedObject
{
}

+ (id)servicePublicKeyWithManagedObjectContext:(id)arg1;
+ (id)servicePublicKeyWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fingerprintForPublicKey:(id)arg1;
- (void)updateLastUpdatedDate;
- (void)willSave;
- (void)awakeFromInsert;
@property(readonly, nonatomic) NSString *fingerprint;

// Remaining properties
@property(retain, nonatomic) GTServiceAccount *account; // @dynamic account;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSDate *publicKeyCreationDate; // @dynamic publicKeyCreationDate;
@property(retain, nonatomic) NSString *publicKeyID; // @dynamic publicKeyID;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

