//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractRepositoryViewController.h"

#import "GTRefSelectorViewControllerDelegate-Protocol.h"
#import "GTRepositoryRefLogActions-Protocol.h"

@class GTGitRef, GTRefSelectorViewController, NSButton, NSImage, NSImageView, NSMenu, NSString;
@protocol GTRefLogListHeaderViewControllerDelegate;

@interface GTRefLogListHeaderViewController : GTAbstractRepositoryViewController <GTRepositoryRefLogActions, GTRefSelectorViewControllerDelegate>
{
    BOOL _headRevisionSelected;
    id <GTRefLogListHeaderViewControllerDelegate> _delegate;
    GTGitRef *_ref;
    NSButton *_button;
    NSImageView *_iconImageView;
    NSMenu *_branchMenu;
    NSImage *_icon;
    GTRefSelectorViewController *_refSelectorViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTRefSelectorViewController *refSelectorViewController; // @synthesize refSelectorViewController=_refSelectorViewController;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSMenu *branchMenu; // @synthesize branchMenu=_branchMenu;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak NSButton *button; // @synthesize button=_button;
@property(readonly, nonatomic, getter=isHeadRevisionSelected) BOOL headRevisionSelected; // @synthesize headRevisionSelected=_headRevisionSelected;
@property(retain, nonatomic) GTGitRef *ref; // @synthesize ref=_ref;
@property(nonatomic) __weak id <GTRefLogListHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)refSelectorDidSelectHEADRevision:(id)arg1;
- (void)refSelector:(id)arg1 didSelectRef:(id)arg2;
- (void)showRefSelector:(id)arg1;
- (void)updateRefSelectorButton;
- (void)updateRepositoryProperties;
- (BOOL)needsUpdateRefSelectorButton;
- (BOOL)needsUpdateRepositoryProperties;
- (void)updateViewState;
- (void)updateViewComponents;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureRefSelectorButton;
- (void)configure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

