//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class GTAvatarInitialsPlaceholderDrawer, NSString;

@interface GTAvatarImageButtonCell : NSButtonCell
{
    NSString *_avatarName;
    GTAvatarInitialsPlaceholderDrawer *_initialsDrawer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTAvatarInitialsPlaceholderDrawer *initialsDrawer; // @synthesize initialsDrawer=_initialsDrawer;
@property(retain, nonatomic) NSString *avatarName; // @synthesize avatarName=_avatarName;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end
