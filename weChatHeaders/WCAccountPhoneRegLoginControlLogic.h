//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IRsaCertMgrExt.h"
#import "WCAccountBindPhoneForRegCGIDelegate.h"
#import "WCAccountCreateVoicePrintControlLogicDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountPhoneVerifyUpViewControllerDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountRegByOldPhoneViewControllerDelegate.h"
#import "WCAccountRegisterViewControllerDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPrivacyPolicyControlLogicDelegate.h"

@class NSString, WCAccountBindPhoneForRegCGI, WCAccountCreateVoicePrintControlLogic, WCAccountManualAuthControlLogic, WCAccountRegisterControlLogic, WCPrivacyPolicyControlLogic;

@interface WCAccountPhoneRegLoginControlLogic : WCAccountBaseControlLogic <WCBaseControlMgrExt, WCAccountRegisterViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountRegByOldPhoneViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBindPhoneForRegCGIDelegate, WCAccountPhoneVerifyUpViewControllerDelegate, WCAccountCreateVoicePrintControlLogicDelegate, WCPrivacyPolicyControlLogicDelegate, IRsaCertMgrExt>
{
    unsigned int m_uiABtest;
    unsigned long long m_eRegStyleStatus;
    unsigned int m_uiTryCount;
    _Bool m_bNeedSetPwd;
    unsigned int m_uiCheckVerifyUpCount;
    NSString *m_nsDefaultISO;
    _Bool m_isDefaultEU;
    WCAccountBindPhoneForRegCGI *m_modelLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    WCAccountCreateVoicePrintControlLogic *m_createVoicePrintLogic;
    WCAccountRegisterControlLogic *m_registerLogic;
    WCPrivacyPolicyControlLogic *_privacyPolicyLogic;
    CDUnknownBlockType privacyPolicyDoneBlock;
}

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (_Bool)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (_Bool)onErrorHandleLogicDone;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)loginForPhone;
- (void)jumpToManulLoginControlMgrToRegister;
- (void)onGetVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (id)getRegSessionID;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onCreateVoicePrintControlLogicDone:(id)arg1 data:(id)arg2;
- (void)onCreateVoicePrintControlLogicCancel;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyUpBack;
- (void)onRegByOldPhoneLogin;
- (void)onRegByOldPhoneContinueReg;
- (void)onRegByOldPhoneBack;
- (void)checkHavePwd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onVoiceVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyBack;
- (void)delaySetPrivacyPolicyLogicNil;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)showPrivacyPolicyWithCC:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 isAge:(_Bool)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (void)onRegNextWith:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 pwd:(id)arg4;
- (_Bool)onRegNextWithISO:(id)arg1 isDefault:(_Bool)arg2;
- (void)onRegNextWith:(id)arg1 headImage:(id)arg2;
- (void)onRegBack;
- (void)onRegNickNameBack;
- (_Bool)isEURegion;
- (unsigned long long)onRegStatus;
- (void)doRegAccount;
- (void)preCheckReg;
- (void)loginAccount;
- (void)getVerifyCode;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (_Bool)getVerifyCodeReady;
- (void)cancelAllEvent;
- (void)startLogic;
- (id)genInitRegRequest;
- (void)reportABTestStatus:(unsigned int)arg1;
- (unsigned int)getCCType;
- (id)initWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

