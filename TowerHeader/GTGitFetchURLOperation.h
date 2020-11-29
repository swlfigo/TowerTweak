//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRemoteURLOperation.h"

@class FNGitCommand, GTGitFetchResult, GTGitRemoteConnection, NSString;

@interface GTGitFetchURLOperation : GTGitRemoteURLOperation
{
    NSString *_refSpec;
    GTGitFetchResult *_fetchResult;
    GTGitRemoteConnection *_remoteConnection;
    FNGitCommand *_gitFetchCommand;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteConnection:(id)arg3 refSpec:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FNGitCommand *gitFetchCommand; // @synthesize gitFetchCommand=_gitFetchCommand;
@property(retain, nonatomic) GTGitRemoteConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) GTGitFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) NSString *refSpec; // @synthesize refSpec=_refSpec;
- (void)operationDidExecute;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (long long)remoteOperationType;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 remoteConnection:(id)arg3 refSpec:(id)arg4;

@end
