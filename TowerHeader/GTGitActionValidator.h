//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTActionValidator.h"

@class GTGitRepository;

@interface GTGitActionValidator : GTActionValidator
{
    GTGitRepository *_repository;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)validateRefName:(id)arg1 error:(id *)arg2;
- (BOOL)validateRefNameIsNotHEADRefName:(id)arg1 error:(id *)arg2;
- (BOOL)validateRevisionIsNotHEADRevision:(id)arg1 error:(id *)arg2;
- (BOOL)validateWorkingCopyHasChanges:(id *)arg1;
- (BOOL)validateWorkingCopyIsNotMerging:(id *)arg1;
- (BOOL)validateWorkingCopyIsNotUpdating:(id *)arg1;
- (BOOL)validateWorkingCopy:(id *)arg1;
- (BOOL)validateRepositoryIsNotEmpty:(id *)arg1;
- (BOOL)validateRepository:(id *)arg1;
- (BOOL)validate:(id *)arg1;
- (BOOL)validateBefore:(id *)arg1;
- (id)initWithRepository:(id)arg1;

@end

