//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;

@interface WCPayPaidDetailQueryAwardCgi : WCPayBaseTenPayCgi
{
    NSString *_activityId;
    NSString *_awardId;
    NSString *_sendRecordId;
    NSString *_userRecordId;
    NSString *_reqKey;
    NSString *_transactionId;
    NSString *_activityMchId;
    NSString *_activityType;
    id <WCPayPaidDetailQueryAwardCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayPaidDetailQueryAwardCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSString *activityMchId; // @synthesize activityMchId=_activityMchId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) NSString *userRecordId; // @synthesize userRecordId=_userRecordId;
@property(retain, nonatomic) NSString *sendRecordId; // @synthesize sendRecordId=_sendRecordId;
@property(retain, nonatomic) NSString *awardId; // @synthesize awardId=_awardId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)callErrorDelegate;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

