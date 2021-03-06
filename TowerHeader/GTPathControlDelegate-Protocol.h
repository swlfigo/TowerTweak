//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTPathControl, NSImage, NSMenu, NSString;

@protocol GTPathControlDelegate <NSObject>

@optional
- (NSMenu *)pathControl:(GTPathControl *)arg1 menuForComponentAtIndex:(unsigned long long)arg2;
- (NSImage *)pathControl:(GTPathControl *)arg1 imageForComponentAtIndex:(unsigned long long)arg2;
- (NSString *)pathControl:(GTPathControl *)arg1 titleForComponentAtIndex:(unsigned long long)arg2;
- (void)pathControl:(GTPathControl *)arg1 didSelectComponentAtIndex:(unsigned long long)arg2;
@end

