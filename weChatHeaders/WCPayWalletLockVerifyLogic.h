//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPaySecurityBaseControlLogic.h"

#import "MMPatternLockLogicDelegate.h"
#import "WCPayTouchLockVerifyLogicDelegate.h"

@class NSString, WCPayWalletLockReportCgi;

@interface WCPayWalletLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, WCPayTouchLockVerifyLogicDelegate>
{
    unsigned int _patternLockLogicTag;
    unsigned long long _verifyScene;
    id <WCPayWalletLockVerifyLogicDelegate> _delegate;
    WCPayWalletLockReportCgi *_walletLockReportCgi;
}

@property(retain, nonatomic) WCPayWalletLockReportCgi *walletLockReportCgi; // @synthesize walletLockReportCgi=_walletLockReportCgi;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) __weak id <WCPayWalletLockVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long verifyScene; // @synthesize verifyScene=_verifyScene;
- (void).cxx_destruct;
- (void)realtimeReportWalletLock:(unsigned long long)arg1 verifyType:(unsigned long long)arg2 isVerifySuccess:(_Bool)arg3 failReason:(unsigned long long)arg4;
- (void)reportTouchLockToPwdVerifyCancel;
- (void)reportTouchLockToPwdVerifyResult:(_Bool)arg1;
- (void)reportTouchLockVerifyResult:(_Bool)arg1;
- (void)touchLockVerifyCancel:(id)arg1;
- (void)onPatternLockVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyCancel;
- (_Bool)needBlockUntilVerified:(id)arg1;
- (void)touchLockVerifySuccess:(id)arg1;
- (void)onPatternLockErrorOutOfLimit;
- (_Bool)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (_Bool)isInValidDuration;
- (void)reportUnlockWalletLockSuccess:(_Bool)arg1;
- (void)reportTryToUnlockWalletLock:(_Bool)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

