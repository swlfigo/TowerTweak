//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, NSString;

@interface GTEditRepositoryDescriptionViewController : GTDialogueViewController
{
    GTGitRepository *_repository;
    NSString *_userDescription;
}

+ (id)dialogueWindow:(id)arg1 repository:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (void)commonInit;

@end

