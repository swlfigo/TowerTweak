//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractServiceManager.h"

@class NSManagedObjectContext;

@interface GTServiceAccountManager : GTAbstractServiceManager
{
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)managerWithManagedObjectContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (BOOL)restoreBackupFromFileAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)restoreBackup:(id *)arg1;
- (BOOL)createBackupAtFileURL:(id)arg1 format:(long long)arg2 error:(id *)arg3;
- (BOOL)createBackupAtFileURL:(id)arg1 error:(id *)arg2;
- (BOOL)createBackup:(id *)arg1;
- (BOOL)setPrivateSSHKey:(id)arg1 forServiceAccount:(id)arg2 error:(id *)arg3;
- (BOOL)setDefaultCloneProtocol:(unsigned long long)arg1 forServiceAccount:(id)arg2 error:(id *)arg3;
- (void)refreshAuthorizationForServiceAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteServiceAccounts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)deleteServiceAccounts:(id)arg1 error:(id *)arg2;
- (BOOL)deleteAllServiceAccounts:(id *)arg1;
- (BOOL)deleteServiceAccountsMarkedForDeletion:(id *)arg1;
- (BOOL)markServiceAccountsForDeletion:(id)arg1 error:(id *)arg2;
- (BOOL)updateServiceAccount:(id)arg1 withServiceAccountCredentials:(id)arg2 error:(id *)arg3;
- (id)createServiceAccountFromServiceAccountCredentials:(id)arg1 error:(id *)arg2;
- (void)reloadServiceAccount:(id)arg1 forceUpdate:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reloadServiceAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadServiceAccount:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)reloadServiceAccount:(id)arg1;
- (BOOL)reloadServiceAccount:(id)arg1 forceUpdate:(BOOL)arg2 error:(id *)arg3;
- (BOOL)reloadServiceAccount:(id)arg1 error:(id *)arg2;
- (void)probeServiceAPIVersionWithServiceAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end
