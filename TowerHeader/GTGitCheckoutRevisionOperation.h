//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitRepositoryOperation.h"

@class FNGitCheckoutCommand, NSError, NSString;

@interface GTGitCheckoutRevisionOperation : GTGitRepositoryOperation
{
    NSString *_revision;
    long long _options;
    FNGitCheckoutCommand *_gitCheckoutCommand;
    NSError *_gitError;
}

+ (id)operationWithManagedObjectContext:(id)arg1 repositoryDescriptor:(id)arg2 revision:(id)arg3;
+ (id)operationWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *gitError; // @synthesize gitError=_gitError;
@property(retain, nonatomic) FNGitCheckoutCommand *gitCheckoutCommand; // @synthesize gitCheckoutCommand=_gitCheckoutCommand;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
- (void)gitCommandDidFinish:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)groups;
- (BOOL)isWriteOperation;
- (id)title;
- (id)initWithManagedObjectContext:(id)arg1 repositoryDescriptor:(id)arg2 revision:(id)arg3;
- (id)initWithManagedObjectContext:(id)arg1 repository:(id)arg2 revision:(id)arg3;

@end

