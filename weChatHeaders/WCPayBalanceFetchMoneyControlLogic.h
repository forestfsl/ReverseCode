//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayNewFetchViewControllerDelegate.h"
#import "WCPayPayMoneyLogicDelegate.h"

@class NSArray, NSString, WCPayAddPayCardLogic, WCPayBalanceTipsLogic, WCPayFetchBalanceReport, WCPayPayMoneyLogic, WCPayPayResponseRetryInfo;

@interface WCPayBalanceFetchMoneyControlLogic : WCPayControlLogic <WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayNewFetchViewControllerDelegate, WCBaseControlMgrExt>
{
    WCPayPayMoneyLogic *m_payLogic;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    WCPayBalanceTipsLogic *m_oContinueTipLogic;
    WCPayBalanceTipsLogic *m_oFirstChargeTipLogic;
    WCPayBalanceTipsLogic *m_oNotEnoughtFeeTipLogic;
    WCPayBalanceTipsLogic *m_fetchChargesTipLogic;
    _Bool m_bHaveShowFisrtChargeTip;
    NSArray *m_arrMyAllCardsBeforeAddCard;
    _Bool m_bAddingNewCard;
    WCPayPayResponseRetryInfo *m_retryInfo;
    WCPayFetchBalanceReport *m_reportLogic;
}

- (void).cxx_destruct;
- (id)getAvailableCards;
- (id)getNewBindCard;
- (void)storeAllExistCards;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onClickFetchAll;
- (void)showNotEnoughForFeeAlert:(id)arg1;
- (void)showFirstFetchInfoAlert:(id)arg1 notEnoughtForFee:(id)arg2;
- (void)showFetchChargeAlert:(id)arg1;
- (void)OnGetBalanceFetchRequest:(id)arg1 ExtData:(id)arg2 Error:(id)arg3;
- (void)OnContinueFetch;
- (void)doAddCard;
- (void)WCPayFetchViewControllerAddCard;
- (void)WCPayFetchViewControllerNext:(id)arg1 FetchAll:(_Bool)arg2;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(_Bool)arg1;
- (void)WCPayFetchViewControllerCancel:(_Bool)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (id)getReportLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

