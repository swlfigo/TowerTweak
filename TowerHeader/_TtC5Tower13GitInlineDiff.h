//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC5Tower10StringDiff;

@interface _TtC5Tower13GitInlineDiff : NSObject
{
    // Error parsing type: , name: deletedLineNumber
    // Error parsing type: , name: addedLineNumber
    // Error parsing type: , name: stringDiff
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeletedLineNumber:(long long)arg1 addedLineNumber:(long long)arg2 stringDiff:(id)arg3;
@property(nonatomic, readonly) _TtC5Tower10StringDiff *stringDiff; // @synthesize stringDiff;
@property(nonatomic, readonly) long long addedLineNumber; // @synthesize addedLineNumber;
@property(nonatomic, readonly) long long deletedLineNumber; // @synthesize deletedLineNumber;

@end

