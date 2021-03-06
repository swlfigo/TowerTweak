//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

@class GTAvatarImageView, GTGPGSignature, GTGitTagManager, GTStateManager, NSString, NSView;

@interface GTGPGSignaturePopoverViewController : GTViewController
{
    GTGPGSignature *_gpgSignature;
    GTAvatarImageView *_avatarImageView;
    NSView *_signatureView;
    NSView *_signatureCannotBeCheckedView;
    NSView *_signatureNotFoundView;
    GTGitTagManager *_tagManager;
    GTStateManager *_viewState;
}

+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingUsername;
+ (id)keyPathsForValuesAffectingEmail;
+ (id)keyPathsForValuesAffectingSigningKey;
+ (id)keyPathsForValuesAffectingFingerprint;
- (void).cxx_destruct;
@property(retain, nonatomic) GTStateManager *viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) GTGitTagManager *tagManager; // @synthesize tagManager=_tagManager;
@property(nonatomic) __weak NSView *signatureNotFoundView; // @synthesize signatureNotFoundView=_signatureNotFoundView;
@property(nonatomic) __weak NSView *signatureCannotBeCheckedView; // @synthesize signatureCannotBeCheckedView=_signatureCannotBeCheckedView;
@property(nonatomic) __weak NSView *signatureView; // @synthesize signatureView=_signatureView;
@property(nonatomic) __weak GTAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) GTGPGSignature *gpgSignature; // @synthesize gpgSignature=_gpgSignature;
- (void)controllerDidLoadTagSignature:(id)arg1;
- (void)viewWillAppear;
- (void)showSignatureForTagWithRefName:(id)arg1 repository:(id)arg2;
- (void)showSignatureForTag:(id)arg1;
- (void)updateContentView;
- (void)updateAvatarImageView;
- (BOOL)needsUpdateContentView;
- (BOOL)needsUpdateAvatarImageView;
- (void)viewDidUpdate;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)update;
- (void)prepareForUpdate;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSString *signingKey;
@property(readonly, nonatomic) NSString *fingerprint;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *username;

@end

