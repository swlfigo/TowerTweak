//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTAutocompleteTableCellViewProvider-Protocol.h"

@class NSArray, NSString;
@protocol GTAutocompleteTableCellViewProvider;

@interface GTDefaultAutocompleteTableCellViewProvider : NSObject <GTAutocompleteTableCellViewProvider>
{
    id <GTAutocompleteTableCellViewProvider> _customCellProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GTAutocompleteTableCellViewProvider> customCellProvider; // @synthesize customCellProvider=_customCellProvider;
- (Class)tableCellClassForAutocompleteItem:(id)arg1;
@property(readonly, nonatomic) NSArray *tableCellIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

