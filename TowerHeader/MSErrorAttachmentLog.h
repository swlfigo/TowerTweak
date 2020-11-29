//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSAbstractLog.h"

@class NSData, NSString;

@interface MSErrorAttachmentLog : MSAbstractLog
{
    NSString *_contentType;
    NSString *_filename;
    NSData *_data;
    NSString *_attachmentId;
    NSString *_errorId;
}

+ (id)attachmentWithBinary:(id)arg1 filename:(id)arg2 contentType:(id)arg3;
+ (id)attachmentWithText:(id)arg1 filename:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errorId; // @synthesize errorId=_errorId;
@property(copy, nonatomic) NSString *attachmentId; // @synthesize attachmentId=_attachmentId;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (id)serializeToDictionary;
- (id)initWithFilename:(id)arg1 attachmentText:(id)arg2;
- (id)initWithFilename:(id)arg1 attachmentBinary:(id)arg2 contentType:(id)arg3;
- (id)init;

@end

