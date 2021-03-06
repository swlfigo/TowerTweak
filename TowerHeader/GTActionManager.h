//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

@interface GTActionManager : NSObject
{
    NSMapTable *_identifierToActionMap;
    NSMutableArray *_actions;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSMapTable *identifierToActionMap; // @synthesize identifierToActionMap=_identifierToActionMap;
- (void)actionDidFinish:(id)arg1;
- (id)actionForIdentifier:(id)arg1;
- (void)performAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

