//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTGitRef, GTRefControl, NSArray, NSImageView, NSPopUpButton;

@interface GTHistoryCommitListHeaderView : NSView
{
    NSPopUpButton *_styleButton;
    GTRefControl *_gitRefControl;
    NSImageView *_iconView;
    NSArray *_refs;
    GTGitRef *_trackedRef;
    NSImageView *_topBarIconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImageView *topBarIconImageView; // @synthesize topBarIconImageView=_topBarIconImageView;
@property(retain, nonatomic) GTGitRef *trackedRef; // @synthesize trackedRef=_trackedRef;
@property(retain, nonatomic) NSArray *refs; // @synthesize refs=_refs;
@property(nonatomic) __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak GTRefControl *gitRefControl; // @synthesize gitRefControl=_gitRefControl;
@property(nonatomic) __weak NSPopUpButton *styleButton; // @synthesize styleButton=_styleButton;
- (id)imageForRef:(id)arg1;
- (void)updateRefImage;
- (void)updateRefControl;
- (void)update;

@end

