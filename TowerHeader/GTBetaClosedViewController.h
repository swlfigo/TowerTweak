//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTRegistrationViewController.h"

@class GTRegistrationClosedCouponCodeView, NSButton;

@interface GTBetaClosedViewController : GTRegistrationViewController
{
    GTRegistrationClosedCouponCodeView *_couponCodeContainer;
    NSButton *_quitButton;
    NSButton *_updateButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) NSButton *quitButton; // @synthesize quitButton=_quitButton;
@property(retain, nonatomic) GTRegistrationClosedCouponCodeView *couponCodeContainer; // @synthesize couponCodeContainer=_couponCodeContainer;
- (void)configureFooterButtons;
- (void)quit:(id)arg1;
- (void)updateTower:(id)arg1;
- (void)buyTower:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;

@end
