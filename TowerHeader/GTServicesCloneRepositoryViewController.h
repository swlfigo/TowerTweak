//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTDialogueViewController.h"

@class GTCloneDestinationInputValidator, GTCloneDestinationMenuController, GTGitRemoteConnection, GTServiceRepository, GTStateManager, NSArray, NSDictionary, NSString, NSURL;

@interface GTServicesCloneRepositoryViewController : GTDialogueViewController
{
    BOOL _initializesSubmodules;
    BOOL _usesLFSClone;
    GTServiceRepository *_serviceRepository;
    NSString *_cloneURLString;
    GTCloneDestinationMenuController *_cloneDestinationMenuController;
    GTCloneDestinationInputValidator *_cloneDestinationInputValidator;
    GTStateManager *_viewState;
}

+ (id)keyPathsForValuesAffectingValidatesSubmitButton;
+ (id)keyPathsForValuesAffectingDestinationURL;
- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTCloneDestinationInputValidator *cloneDestinationInputValidator; // @synthesize cloneDestinationInputValidator=_cloneDestinationInputValidator;
@property(retain, nonatomic) GTCloneDestinationMenuController *cloneDestinationMenuController; // @synthesize cloneDestinationMenuController=_cloneDestinationMenuController;
@property(nonatomic) BOOL usesLFSClone; // @synthesize usesLFSClone=_usesLFSClone;
@property(nonatomic) BOOL initializesSubmodules; // @synthesize initializesSubmodules=_initializesSubmodules;
@property(retain, nonatomic) NSString *cloneURLString; // @synthesize cloneURLString=_cloneURLString;
@property(retain, nonatomic) GTServiceRepository *serviceRepository; // @synthesize serviceRepository=_serviceRepository;
- (BOOL)validateDestinationURL:(id *)arg1;
- (BOOL)submitDialogue:(id *)arg1;
- (BOOL)validatesSubmitButton;
- (void)cloneURLSelectionDidChange:(id)arg1;
- (void)updateCloneDestination;
- (BOOL)needsUpdateCloneDestination;
- (void)updateViewState;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureCloneURL;
@property(readonly, nonatomic) GTGitRemoteConnection *remoteConnection;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) NSArray *cloneURLs;
@property(readonly, nonatomic) NSURL *destinationURL;
- (void)commonInit;

@end

