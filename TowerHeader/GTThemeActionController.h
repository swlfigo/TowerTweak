//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GTThemeActionController : NSObject
{
    // Error parsing type: , name: themeController
    // Error parsing type: , name: actionManager
    // Error parsing type: , name: alert
    // Error parsing type: , name: errorController
}

+ (id)sharedController;
- (void).cxx_destruct;
- (id)init;
- (void)exportThemeWithTheme:(id)arg1 destinationURL:(id)arg2;
- (void)importThemeAt:(id)arg1;
- (void)renameTheme:(id)arg1 name:(id)arg2;
- (void)updateTheme:(id)arg1;
- (void)activateTheme:(id)arg1;
- (void)deleteTheme:(id)arg1;
- (void)createThemeWithName:(id)arg1;

@end

