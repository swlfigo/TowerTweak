//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage, NSString;
@protocol GTAutocompleteViewHelper;

@interface GTAutocompleteCellView : NSTableCellView
{
    id <GTAutocompleteViewHelper> _viewHelper;
}

+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingItem;
+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GTAutocompleteViewHelper> viewHelper; // @synthesize viewHelper=_viewHelper;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSImage *image;
- (id)item;

@end

