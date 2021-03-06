//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSRegularExpression, NSString, NSURL;

@interface GTGPGConfBinary : NSObject
{
    NSURL *_fileURL;
    NSRegularExpression *_versionRegex;
}

+ (id)binaryWithFileURL:(id)arg1;
+ (BOOL)validateGPGConfBinaryAtURL:(id)arg1 error:(id *)arg2;
+ (id)minimumVersionRequirement;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *versionRegex; // @synthesize versionRegex=_versionRegex;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)gpgConfBinaryVersion;
@property(readonly, nonatomic) NSString *path;
- (id)initWithFileURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

@end

