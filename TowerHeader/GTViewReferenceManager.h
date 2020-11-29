//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GTViewReferenceManager : NSObject
{
    NSMutableDictionary *_viewReferenceDefinitionsByIdentifier;
}

+ (id)sharedManager;
+ (void)loadMainWindowViewReferences;
+ (void)loadActivityWindowViewReferences;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewReferenceDefinitionsByIdentifier; // @synthesize viewReferenceDefinitionsByIdentifier=_viewReferenceDefinitionsByIdentifier;
- (id)viewReferenceURLForIdentifier:(id)arg1 arguments:(id)arg2;
- (id)viewReferenceForURL:(id)arg1;
- (void)unregisterViewReferenceWithIdentifier:(id)arg1;
- (void)registerViewReferenceWithIdentifier:(id)arg1 windowIdentifier:(id)arg2 URLPattern:(id)arg3;
- (id)init;

@end

