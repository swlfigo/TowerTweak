//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MSEncrypter : NSObject
{
    NSData *_originalKeyData;
    NSData *_alternateKeyData;
}

+ (id)getMetadataStringWithKeyTag:(id)arg1;
+ (id)generateInitializationVector;
+ (id)generateAndSaveKeyWithTag:(id)arg1;
+ (id)performCryptoOperation:(unsigned int)arg1 input:(id)arg2 initializationVector:(id)arg3 key:(id)arg4;
+ (void)rotateToNewKeyTag:(id)arg1;
+ (id)getCurrentKeyTag;
- (void).cxx_destruct;
@property(retain) NSData *alternateKeyData; // @synthesize alternateKeyData=_alternateKeyData;
@property(retain) NSData *originalKeyData; // @synthesize originalKeyData=_originalKeyData;
- (id)getKeyWithKeyTag:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)decryptString:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)encryptString:(id)arg1;

@end
