//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTCommitMessage : NSObject
{
    NSString *_subject;
    NSString *_body;
    NSString *_message;
}

+ (id)commitMessageWithSubject:(id)arg1 body:(id)arg2;
+ (id)commitMessageWithMessage:(id)arg1;
+ (id)keyPathsForValuesAffectingMessage;
+ (id)keyPathsForValuesAffectingBody;
+ (id)keyPathsForValuesAffectingSubject;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void)updateMessage;
- (void)setBodyFromCommitMessage:(id)arg1;
- (void)setSubjectFromCommitMessage:(id)arg1;

@end

