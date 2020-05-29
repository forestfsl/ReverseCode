//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayBankElementQueryCgiDelegate-Protocol.h"
#import "WCPayFillCardInfoViewControllerDelegate-Protocol.h"
#import "WCPayFillCardNumberViewControllerDelegate-Protocol.h"
#import "WCPayGetPayUserDutyCgiDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayPrivacyViewControllerDelegate-Protocol.h"
#import "WCPayTenpayImportCardInfoViewControllerDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class JSEvent, NSString, WCBaseControlLogic, WCPayBankElementQueryCgi, WCPayBindCardSuccessResponse, WCPayGetPayUserDutyCgi, WCPaySetUserExInfoCgi, WCRedEnvelopesControlData;
@protocol WCPayAddPayCardDelegate;

@interface WCPayAddPayCardLogic : WCPayControlLogic <WCPayPrivacyViewControllerDelegate, WCPayGetPayUserDutyCgiDelegate, WCPayBankElementQueryCgiDelegate, WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayTenpayImportCardInfoViewControllerDelegate>
{
    int m_uiLogicFinishedStatus;
    int m_uiWCPayAddPayCardLogicScene;
    JSEvent *m_jsEvent;
    NSString *m_nsAddPayCardToken;
    WCRedEnvelopesControlData *m_redEnvelopesData;
    WCBaseControlLogic *_fromControlLogic;
    id <WCPayAddPayCardDelegate> _payCardDelegate;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
    WCPayBindCardSuccessResponse *_m_bindCardSuccessResponse;
    WCPayGetPayUserDutyCgi *_m_getPayUserDutyCgi;
    WCPayBankElementQueryCgi *_m_getBankElementCgi;
}

@property(retain, nonatomic) WCPayBankElementQueryCgi *m_getBankElementCgi; // @synthesize m_getBankElementCgi=_m_getBankElementCgi;
@property(retain, nonatomic) WCPayGetPayUserDutyCgi *m_getPayUserDutyCgi; // @synthesize m_getPayUserDutyCgi=_m_getPayUserDutyCgi;
@property(retain, nonatomic) WCPayBindCardSuccessResponse *m_bindCardSuccessResponse; // @synthesize m_bindCardSuccessResponse=_m_bindCardSuccessResponse;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
@property(nonatomic) __weak id <WCPayAddPayCardDelegate> payCardDelegate; // @synthesize payCardDelegate=_payCardDelegate;
@property(retain, nonatomic) WCBaseControlLogic *fromControlLogic; // @synthesize fromControlLogic=_fromControlLogic;
@property(nonatomic) int m_uiWCPayAddPayCardLogicScene; // @synthesize m_uiWCPayAddPayCardLogicScene;
- (void).cxx_destruct;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1;
- (void)onWCPayGetPayUserDutyCgiError:(id)arg1;
- (void)onWCPayGetPayUserDutyCgiResp:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic:(id)arg1 withDelay:(_Bool)arg2;
- (void)EndWCPayAddPayCardLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic;
- (id)onWCPayBindCardSuccessViewControllerRequestResponse;
- (void)onWCPayBindCardSuccessViewControllerClickDone;
- (void)jumpSuccessViewController;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnSetWCPayPasswordInBind:(id)arg1 repsonse:(id)arg2;
- (void)OnBindCardVerifySMS:(id)arg1 Error:(id)arg2 repsonse:(id)arg3;
- (void)OnBindCardVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnWCPayGetBankResource:(id)arg1 Error:(id)arg2;
- (void)OnWCPayGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnTenpayImportBindQuery:(id)arg1 AppInfo:(id)arg2 UsrVerifiedInfo:(id)arg3 Error:(id)arg4;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)stopLogicToMyPayCardView;
- (void)stopLogicToRefreshPayCardList;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)WCPayTenpayImportCardInfoViewControllerReadAgreement;
- (void)WCPayTenpayImportCardInfoViewControllerNext;
- (void)WCPayTenpayImportCardInfoViewControllerCancel;
- (void)FillCardInfoReadAgreement;
- (void)FillCardInfoNext:(id)arg1;
- (id)getWCPayBindInfo:(id)arg1;
- (void)FillCardInfoCancel;
- (_Bool)NeedShowServiceAppInfo;
- (void)FillCardNumberBackToRefreshCardList;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)showGiveUpLogicAlert;
- (void)startAddCardLogic;
- (void)startTenpayImportCardLogic;
- (void)stopLogic;
- (void)startFromJsApi;
- (void)startGetPayUserDuty;
- (void)startLogic;
- (void)dealloc;
- (id)initWithRedEnvelopesData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

