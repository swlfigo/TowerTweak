//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTServiceAccountUIActions-Protocol.h"

@class GTPrivateSSHKeyManager, GTPrivateSSHKeyMenuGenerator, NSMenu, NSPopUpButton, NSString, NSURL, NSWindow;
@protocol GTPrivateSSHKeyMenuControllerDelegate;

@interface GTPrivateSSHKeyMenuController : NSObject <GTServiceAccountUIActions>
{
    id <GTPrivateSSHKeyMenuControllerDelegate> _delegate;
    NSWindow *_window;
    NSMenu *_menu;
    NSPopUpButton *_popUpButton;
    NSURL *_privateSSHKeyFileURL;
    GTPrivateSSHKeyManager *_privateSSHKeyManager;
    GTPrivateSSHKeyMenuGenerator *_privateSSHKeyMenuGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTPrivateSSHKeyMenuGenerator *privateSSHKeyMenuGenerator; // @synthesize privateSSHKeyMenuGenerator=_privateSSHKeyMenuGenerator;
@property(retain, nonatomic) GTPrivateSSHKeyManager *privateSSHKeyManager; // @synthesize privateSSHKeyManager=_privateSSHKeyManager;
@property(retain, nonatomic) NSURL *privateSSHKeyFileURL; // @synthesize privateSSHKeyFileURL=_privateSSHKeyFileURL;
@property(nonatomic) __weak NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property(nonatomic) __weak NSMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak NSWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <GTPrivateSSHKeyMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selectPrivateSSHKey:(id)arg1;
- (void)privateSSHKeySelectionDidChange:(id)arg1;
- (void)update;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
