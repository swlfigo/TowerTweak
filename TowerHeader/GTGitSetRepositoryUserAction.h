//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTGitAction.h"

@class NSString;

@interface GTGitSetRepositoryUserAction : GTGitAction
{
    NSString *_userName;
    NSString *_userEmail;
    NSString *_userGPGKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userGPGKey; // @synthesize userGPGKey=_userGPGKey;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)actionDidFinish;
- (void)actionDidFailWithError:(id)arg1;
- (void)main;

@end
