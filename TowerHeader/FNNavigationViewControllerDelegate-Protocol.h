//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FNNavigationViewController, FNViewController;

@protocol FNNavigationViewControllerDelegate <NSObject>

@optional
- (void)navigationViewControllerDidUpdateNavigationItems:(FNNavigationViewController *)arg1;
- (void)navigationViewController:(FNNavigationViewController *)arg1 didShowViewController:(FNViewController *)arg2 animated:(BOOL)arg3;
- (void)navigationViewController:(FNNavigationViewController *)arg1 willShowViewController:(FNViewController *)arg2 animated:(BOOL)arg3;
@end

