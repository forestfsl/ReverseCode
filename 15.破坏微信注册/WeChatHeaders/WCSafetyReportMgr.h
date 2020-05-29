//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "BaseScanLogicDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "IMassSendExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IWCRealTimeKVReportMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, ScanQRCodeLogicController, WCSafetyReportScanObj;
@protocol OS_dispatch_queue;

@interface WCSafetyReportMgr : MMService <WCFacadeExt, IMsgExt, IMassSendExt, IWCRealTimeKVReportMgrExt, BaseScanLogicDelegate, CNetworkStatusExt, MMService>
{
    ScanQRCodeLogicController *m_qrCodeScanner;
    _Bool bScanning;
    WCSafetyReportScanObj *m_scanObj;
    NSMutableDictionary *m_dicExistIDs;
    NSMutableDictionary *m_dicMd5ToScanItem;
    NSObject<OS_dispatch_queue> *m_scanImageQueue;
    NSMutableArray *_m_aryWaitScan;
    NSMutableArray *_m_aryReporting;
    NSMutableArray *_m_aryReportFail;
}

@property(retain) NSMutableArray *m_aryReportFail; // @synthesize m_aryReportFail=_m_aryReportFail;
@property(retain) NSMutableArray *m_aryReporting; // @synthesize m_aryReporting=_m_aryReporting;
@property(retain) NSMutableArray *m_aryWaitScan; // @synthesize m_aryWaitScan=_m_aryWaitScan;
- (void).cxx_destruct;
- (id)getMidImagePathOfMessage:(id)arg1;
- (id)getHDImagePathOfMessage:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onScanEnds;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (void)onMassNewMsgSent:(id)arg1 sendInfo:(id)arg2;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onSnsNewCommitFinished:(id)arg1;
- (_Bool)shouldReport:(int)arg1;
- (_Bool)tryCacheUrl:(id)arg1 forMd5:(id)arg2 codeType:(unsigned int)arg3;
- (void)reset;
- (void)tryReportLogId:(unsigned int)arg1 value:(id)arg2;
- (void)tryScanImageAtPath:(id)arg1;
- (void)finishScanTask:(id)arg1;
- (void)scanEndWithUrl:(id)arg1 shouldCache:(_Bool)arg2;
- (void)scanEndWithUrl:(id)arg1 shouldCache:(_Bool)arg2 scanResultType:(unsigned int)arg3;
- (void)tryScanNextImage;
- (void)tryStartNextScanTask;
- (void)addScanTask:(id)arg1;
- (void)dealloc;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceEnterForeground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

