//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSLogContainer : NSObject
{
    NSString *_batchId;
    NSArray *_logs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *logs; // @synthesize logs=_logs;
@property(copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (BOOL)isValid;
- (id)serializeLogWithPrettyPrinting:(BOOL)arg1;
- (id)serializeLog;
- (id)initWithBatchId:(id)arg1 andLogs:(id)arg2;

@end

