//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTViewController.h"

#import "GTNavigationComponent-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"

@class NSArray, NSCollectionView, NSColor, NSFont, NSLayoutConstraint, NSString, NSURL;

@interface GTServicesDashboardViewController : GTViewController <NSCollectionViewDelegate, GTNavigationComponent>
{
    NSCollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSArray *_serviceItems;
    NSFont *_titleFont;
    NSColor *_titleColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSArray *serviceItems; // @synthesize serviceItems=_serviceItems;
@property(nonatomic) __weak NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *collectionViewWidthConstraint; // @synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint;
@property(nonatomic) __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)loadServiceItems;
- (void)configureCollectionView;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSArray *navigationPathComponents;
@property(readonly, nonatomic) NSURL *navigationURL;
@property(readonly, nonatomic) NSString *navigationIdentifier;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

