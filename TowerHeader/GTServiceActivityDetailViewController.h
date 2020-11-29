//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNAppKit/FNViewController.h>

@class GTServiceActivityItem, NSString, NSTextView;

@interface GTServiceActivityDetailViewController : FNViewController
{
    BOOL _drawsBackground;
    GTServiceActivityItem *_item;
    NSTextView *_textView;
    NSString *_lastIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastIdentifier; // @synthesize lastIdentifier=_lastIdentifier;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(retain, nonatomic) GTServiceActivityItem *item; // @synthesize item=_item;
- (id)contentForServiceActivityItem:(id)arg1;
- (void)scrollToBottom;
- (void)scrollToTop;
- (void)update;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)configureTextView;

@end

