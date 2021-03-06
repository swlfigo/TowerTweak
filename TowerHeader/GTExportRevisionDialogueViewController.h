//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTGitRepository, NSArray, NSString;

@interface GTExportRevisionDialogueViewController : GTDialogueViewController
{
    BOOL _createsArchive;
    GTGitRepository *_repository;
    NSArray *_filePaths;
    NSArray *_refs;
    NSString *_selectedRevision;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
- (void).cxx_destruct;
@property(nonatomic) BOOL createsArchive; // @synthesize createsArchive=_createsArchive;
@property(retain, nonatomic) NSString *selectedRevision; // @synthesize selectedRevision=_selectedRevision;
@property(retain, nonatomic) NSArray *refs; // @synthesize refs=_refs;
@property(retain, nonatomic) NSArray *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (BOOL)submitDialogue:(id *)arg1;
- (unsigned long long)options;
- (void)updateRevisionPreselection;
- (void)loadRefs;
- (BOOL)validatesSubmitButton;
- (void)updateTitleAndTextIfNeeded;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithRepository:(id)arg1;

@end

