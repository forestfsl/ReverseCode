//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate.h"

@class QryHoneyPayCardDetailResp, WCPayBaseNetworkingError, WCPayQryHoneyPayCardDetailCgi;

@protocol WCPayQryHoneyPayCardDetailCgiDelegate <WCPayBaseCgiDelegate>
- (void)qryHoneyPayCardDetailCgi:(WCPayQryHoneyPayCardDetailCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)qryHoneyPayCardDetailCgi:(WCPayQryHoneyPayCardDetailCgi *)arg1 didGetResponse:(QryHoneyPayCardDetailResp *)arg2;
@end

