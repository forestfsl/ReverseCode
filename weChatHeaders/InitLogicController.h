//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ContactInitLogicExt.h"
#import "INewInitExt.h"

@class ContactInitLogic, MMTimer, NSString;

@interface InitLogicController : MMObject <ContactInitLogicExt, INewInitExt>
{
    id <initLogicControllerDelegate> m_delegate;
    _Bool m_bIsIniting;
    _Bool m_bFromReg;
    MMTimer *m_percenTimer;
    unsigned int m_curPercent;
    unsigned int m_uiEventID;
    ContactInitLogic *m_contactInitLogic;
}

@property(nonatomic) _Bool m_bFromReg; // @synthesize m_bFromReg;
@property(readonly, nonatomic) _Bool m_bIsIniting; // @synthesize m_bIsIniting;
@property(nonatomic) __weak id <initLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onContactInitSuccess;
- (void)onContactInitFail;
- (void)onContactInitProcessUpdate:(unsigned int)arg1;
- (void)retryInitContact;
- (void)tryInitContact;
- (void)onNewInitOK;
- (void)onNewInitFail;
- (void)onNewInitConnectFail;
- (void)stopIniting:(unsigned int)arg1;
- (void)appFirstBecomeActive;
- (_Bool)startInit;
- (void)stopPercentTimer;
- (void)startPercentTimer;
- (void)onPercentTimer;
- (void)percentIniting;
- (unsigned int)getCurNetworkStatus;
- (_Bool)initInternal;
- (_Bool)isNeedInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

