//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTUserInputValidator.h"

@class GTService, NSString;

@interface GTServiceUsernameFormatValidator : GTUserInputValidator
{
    // Error parsing type: , name: service
    // Error parsing type: , name: username
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)validate:(id *)arg1;
@property(nonatomic, copy) NSString *username;
@property(nonatomic, retain) GTService *service; // @synthesize service;

@end
