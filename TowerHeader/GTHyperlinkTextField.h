//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSDictionary, NSString, NSTrackingArea;

@interface GTHyperlinkTextField : NSTextField
{
    NSString *_URLString;
    CDUnknownBlockType _linkAction;
    NSDictionary *_linkAttributes;
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(copy, nonatomic) CDUnknownBlockType linkAction; // @synthesize linkAction=_linkAction;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void)update;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)awakeFromNib;

@end
