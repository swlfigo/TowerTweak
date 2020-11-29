//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GTRepositoryDraggingActionManager : NSObject
{
    NSMutableDictionary *_draggingActions;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *draggingActions; // @synthesize draggingActions=_draggingActions;
- (id)draggingActionForQuery:(id)arg1;
- (void)removeAllDragginActions;
- (void)removeDraggingAction:(id)arg1;
- (void)addDraggingAction:(id)arg1;
- (void)addDraggingActionWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 action:(unsigned long long)arg3 alternateOperation:(BOOL)arg4 multipleItems:(BOOL)arg5;
- (void)addDraggingActionWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 action:(unsigned long long)arg3 alternateOperation:(BOOL)arg4;
- (void)addDraggingActionWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 action:(unsigned long long)arg3;
- (id)allDraggingActions;
- (id)init;

@end
