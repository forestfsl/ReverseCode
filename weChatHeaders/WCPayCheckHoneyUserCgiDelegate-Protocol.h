//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class CheckHoneyUserResp, WCPayBaseNetworkingError, WCPayCheckHoneyUserCgi;

@protocol WCPayCheckHoneyUserCgiDelegate <WCPayBaseCgiDelegate>
- (void)checkHoneyUserCgi:(WCPayCheckHoneyUserCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)checkHoneyUserCgi:(WCPayCheckHoneyUserCgi *)arg1 didGetResponse:(CheckHoneyUserResp *)arg2;
@end

