//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGettingStartedDetailController.h"

#import "NSTextViewDelegate-Protocol.h"

@class NSScrollView, NSString, NSTextView, WebView;

@interface GTGettingStartedTourViewController : GTGettingStartedDetailController <NSTextViewDelegate>
{
    WebView *_webView;
    NSTextView *_contentTextView;
    NSScrollView *_contentTextScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSScrollView *contentTextScrollView; // @synthesize contentTextScrollView=_contentTextScrollView;
@property(retain, nonatomic) NSTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property __weak WebView *webView; // @synthesize webView=_webView;
- (void)didTriggeredNext:(id)arg1;
- (void)openBrowser:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

