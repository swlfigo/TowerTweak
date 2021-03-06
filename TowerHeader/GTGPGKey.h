//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSDictionary, NSString;

@interface GTGPGKey : NSManagedObject
{
}

+ (id)gpgKeyWithManagedObjectContext:(id)arg1;
+ (id)gpgKeyWithFingerprint:(id)arg1 username:(id)arg2 email:(id)arg3 context:(id)arg4;
+ (id)gpgKeyWithID:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (void)deleteGPGKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)fetchAllGPGKeysSortedByCreationDateWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAllGPGKeysWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (void)createGPGKeyWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)restoreBackupFromURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)restoreBackupFromURL:(id)arg1 error:(id *)arg2;
+ (void)restoreBackupWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)restoreBackup:(id *)arg1;
+ (void)createBackupAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)createBackupAtURL:(id)arg1 error:(id *)arg2;
+ (void)createBackupWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)createBackup:(id *)arg1;
+ (void)reload:(id *)arg1;
+ (void)reloadWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)createRealGPGKeyWithUsername:(id)arg1 email:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)updateGPGKey:(id)arg1 gpgKeyDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateLastModifiedDate;
- (void)willSave;
- (void)awakeFromInsert;
@property(readonly, nonatomic) NSDictionary *obfuscatedDictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(copy, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

