//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMenuGenerator.h"

@class GTGitRepository;

@interface GTGitFlowMenuGenerator : GTMenuGenerator
{
    GTGitRepository *_repository;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTGitRepository *repository; // @synthesize repository=_repository;
- (id)makeMenuItemWithTitle:(id)arg1 action:(SEL)arg2 representedObject:(id)arg3;
- (void)makeMenuItems;

@end

