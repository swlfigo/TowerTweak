//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTActionSenderValidator.h"

@class NSArray;

@interface GTOpenFileActionsValidator : GTActionSenderValidator
{
    NSArray *_fileURLs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
- (id)fileURLsFromItem:(id)arg1;
- (BOOL)validateOpenFilesActionWithItem:(id)arg1;
- (BOOL)validateOpenFileActionWithItem:(id)arg1;
- (void)registerActions;

@end
