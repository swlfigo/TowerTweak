//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTBackgroundTask : NSObject
{
    NSString *_backgroundSessionIdentifier;
    NSString *_name;
}

+ (id)taskWithName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *backgroundSessionIdentifier; // @synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier;
- (id)initWithName:(id)arg1;

@end
