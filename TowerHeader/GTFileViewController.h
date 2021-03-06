//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTAbstractRepositoryViewController.h"

#import "GTFileControllerDelegate-Protocol.h"
#import "GTLineNumberViewDelegate-Protocol.h"
#import "GTViewStylesObserving-Protocol.h"
#import "NSLayoutManagerDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class GTAnnotatedTextViewNew, GTBlobTextView, GTFileController, GTLineNumberView, GTViewStylesObserver, NSData, NSString, NSTimer;

@interface GTFileViewController : GTAbstractRepositoryViewController <NSSplitViewDelegate, GTLineNumberViewDelegate, GTFileControllerDelegate, NSTextViewDelegate, NSLayoutManagerDelegate, GTViewStylesObserving>
{
    NSString *_filePath;
    NSString *_revision;
    GTLineNumberView *_lineNumberView;
    GTAnnotatedTextViewNew *_annotatedTextView;
    GTBlobTextView *_textView;
    GTFileController *_fileController;
    GTViewStylesObserver *_viewStylesObserver;
    NSData *_blob;
    NSTimer *_updateTimer;
    struct CGSize _textViewSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) struct CGSize textViewSize; // @synthesize textViewSize=_textViewSize;
@property(retain, nonatomic) NSData *blob; // @synthesize blob=_blob;
@property(retain, nonatomic) GTViewStylesObserver *viewStylesObserver; // @synthesize viewStylesObserver=_viewStylesObserver;
@property(retain, nonatomic) GTFileController *fileController; // @synthesize fileController=_fileController;
@property(nonatomic) GTBlobTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak GTAnnotatedTextViewNew *annotatedTextView; // @synthesize annotatedTextView=_annotatedTextView;
@property(nonatomic) __weak GTLineNumberView *lineNumberView; // @synthesize lineNumberView=_lineNumberView;
@property(retain, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)updateTextViewColorsAndStyes;
- (void)updateStyles;
- (void)viewStylesDidChangeWithNotification:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)fileController:(id)arg1 didFailLoadingBlobWithError:(id)arg2;
- (void)fileController:(id)arg1 didLoadBlob:(id)arg2;
- (double)heightForLineNumberView:(id)arg1;
- (double)lineHeightForLineNumberView:(id)arg1;
- (struct CGRect)lineNumberView:(id)arg1 rectForLineAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfLinesInLineNumberView:(id)arg1;
- (void)updateTextView;
- (void)updateLineNumbersView;
- (void)updateFileController;
- (BOOL)needsUpdateFileController;
- (BOOL)needsUpdateTextView;
- (BOOL)needsUpdateLineNumbersView;
- (void)updateViewComponents;
- (void)updateViewState;
- (void)prepareForUpdate;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)configureTextView;
- (void)configureLineNumberView;
- (void)configureSplitView;
@property(readonly, nonatomic) NSString *textViewSizeKey;
@property(readonly, nonatomic) NSString *blobKey;
@property(readonly, nonatomic) NSString *revisionKey;
@property(readonly, nonatomic) NSString *filePathKey;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

