//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSErrorLogFormatter : NSObject
{
}

+ (id)formatAddress:(unsigned long long)arg1 is64bit:(BOOL)arg2;
+ (id)uuidRefToString:(struct __CFUUID *)arg1;
+ (id)addressesFromReport:(id)arg1;
+ (id)findCrashedThreadInReport:(id)arg1;
+ (BOOL)isCodeType64bit:(unsigned long long)arg1;
+ (long long)imageTypeForImagePath:(id)arg1 processPath:(id)arg2;
+ (id)selectorForRegisterWithName:(id)arg1 ofThread:(id)arg2 report:(id)arg3;
+ (id)anonymizedPathFromPath:(id)arg1;
+ (BOOL)isBinaryWithStart:(unsigned long long)arg1 end:(unsigned long long)arg2 inAddresses:(id)arg3;
+ (id)extractBinaryImagesFromReport:(id)arg1 is64bit:(BOOL)arg2;
+ (id)selectorRegisterValueFromReport:(id)arg1 ofCrashedThread:(id)arg2 codeType:(unsigned long long)arg3;
+ (id)extractExceptionReasonFromReport:(id)arg1;
+ (id)extractRegistersFromCrashedThread:(id)arg1 is64bit:(BOOL)arg2;
+ (id)formatStackFrame:(id)arg1 report:(id)arg2;
+ (id)extractThreadsFromReport:(id)arg1 crashedThread:(id)arg2 is64bit:(BOOL)arg3;
+ (id)getCrashTimeFromReport:(id)arg1;
+ (id)getAppLaunchTimeFromReport:(id)arg1;
+ (id)addProcessInfoAndApplicationPathTo:(id)arg1 fromCrashReport:(id)arg2;
+ (id)errorIdForCrashReport:(id)arg1;
+ (id)errorReportFromLog:(id)arg1;
+ (id)errorReportFromCrashReport:(id)arg1;
+ (id)errorLogFromCrashReport:(id)arg1;

@end
