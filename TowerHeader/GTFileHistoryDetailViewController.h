//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractRepositoryViewController.h"

@class GTDiffImageDetailViewController, GTFileDiffViewController, GTFileViewController, GTRepositoryHeaderView, NSArray, NSImage, NSNumber, NSString, NSView, NSViewController;

@interface GTFileHistoryDetailViewController : GTAbstractRepositoryViewController
{
    NSString *_filePath;
    NSString *_revision;
    NSView *_contentView;
    GTRepositoryHeaderView *_headerView;
    GTFileViewController *_fileViewController;
    GTFileDiffViewController *_fileDiffViewController;
    GTDiffImageDetailViewController *_imageDiffViewController;
    NSViewController *_currentContentViewController;
    NSNumber *_selectedContentViewTypeValue;
    long long _selectedContentViewType;
    NSString *_contributors;
    NSArray *_contributions;
    NSString *_contributionsDataRevision;
}

+ (id)keyPathsForValuesAffectingFileIcon;
+ (id)keyPathsForValuesAffectingShortRevision;
+ (id)keyPathsForValuesAffectingSelectedContentViewType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contributionsDataRevision; // @synthesize contributionsDataRevision=_contributionsDataRevision;
@property(retain, nonatomic) NSArray *contributions; // @synthesize contributions=_contributions;
@property(retain, nonatomic) NSString *contributors; // @synthesize contributors=_contributors;
@property(readonly, nonatomic) long long selectedContentViewType; // @synthesize selectedContentViewType=_selectedContentViewType;
@property(retain, nonatomic) NSNumber *selectedContentViewTypeValue; // @synthesize selectedContentViewTypeValue=_selectedContentViewTypeValue;
@property(retain, nonatomic) NSViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(retain, nonatomic) GTDiffImageDetailViewController *imageDiffViewController; // @synthesize imageDiffViewController=_imageDiffViewController;
@property(retain, nonatomic) GTFileDiffViewController *fileDiffViewController; // @synthesize fileDiffViewController=_fileDiffViewController;
@property(retain, nonatomic) GTFileViewController *fileViewController; // @synthesize fileViewController=_fileViewController;
@property(nonatomic) __weak GTRepositoryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)displayContentViewController:(id)arg1;
- (void)openDiffTool:(id)arg1;
- (void)showCommitView:(id)arg1;
- (void)showBlameView:(id)arg1;
- (void)showRawFile:(id)arg1;
- (void)contentViewSelectionDidChange:(id)arg1;
- (void)updateContentView;
- (void)updateDiffView;
- (void)updateRawView;
- (BOOL)needsUpdateDiffView;
- (BOOL)needsUpdateRawView;
- (BOOL)needsUpdateContentView;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)prepareForUpdate;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureActionBar;
- (void)configure;
@property(readonly, nonatomic) NSString *contributionsDataRevisionKey;
@property(readonly, nonatomic) NSString *revisionKey;
@property(readonly, nonatomic) NSString *filePathKey;
@property(readonly, nonatomic) NSString *selectedContentViewTypeKey;
@property(readonly, nonatomic) NSString *shortRevision;
@property(readonly, nonatomic) NSImage *fileIcon;
@property(readonly, nonatomic) NSString *fileName;
- (void)dealloc;

@end
