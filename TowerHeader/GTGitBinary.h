//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface GTGitBinary : NSObject
{
    NSURL *_fileURL;
    NSURL *_libexecDirectory;
    NSArray *_additionalPathComponents;
}

+ (id)systemGitBinary;
+ (id)bundledGitBinary;
+ (BOOL)validateGitBinaryAtURL:(id)arg1 error:(id *)arg2;
+ (BOOL)isBundledGitBinary:(id)arg1;
+ (BOOL)isSystemGitBinary:(id)arg1;
+ (id)defaultAdditionalComponentPaths;
+ (id)systemGitBinaryFileURL;
+ (BOOL)isSystemGitBinaryInstalled;
+ (id)minimumVersionRequirement;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *additionalPathComponents; // @synthesize additionalPathComponents=_additionalPathComponents;
@property(retain, nonatomic) NSURL *libexecDirectory; // @synthesize libexecDirectory=_libexecDirectory;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)description;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic, getter=isBundledGitBinary) BOOL bundledGitBinary;
@property(readonly, nonatomic, getter=isSystemGitBinary) BOOL systemGitBinary;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithFileURL:(id)arg1 libexecDirectory:(id)arg2;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

