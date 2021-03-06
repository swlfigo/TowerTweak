//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FNFoundation/FNRESTAPIRequestOperation.h>

@class FNProductNewsletterAPIConfig, FNProductNewsletterAPIResponse;

@interface FNProductNewsletterAPIRequestOperation : FNRESTAPIRequestOperation
{
    FNProductNewsletterAPIConfig *_config;
    CDUnknownBlockType _completionHandler;
    id _result;
    FNProductNewsletterAPIResponse *_APIResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNProductNewsletterAPIResponse *APIResponse; // @synthesize APIResponse=_APIResponse;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FNProductNewsletterAPIConfig *config; // @synthesize config=_config;
- (id)makeRequestErrorUserInfoFromRequest:(id)arg1;
- (void)requestDidFinish;
- (id)handleAPIErrorResponse:(id)arg1 data:(id)arg2;
- (void)setRequestBodyWithParams:(id)arg1 contentType:(id)arg2;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2 method:(id)arg3 params:(id)arg4 contentType:(id)arg5;

@end

