//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "IWCLanDeviceMgrExt-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, WCDevice, WCDeviceBrandMgr, WCLanDeviceMgr;
@protocol WCDeviceSearchLogicDelegate;

@interface WCDeviceSearchLogic : NSObject <IWCDeviceBrandMgrExt, IWCLanDeviceMgrExt>
{
    WCDeviceBrandMgr *m_manager;
    WCLanDeviceMgr *m_LanManager;
    WCDevice *m_fliterDevice;
    NSMutableSet *m_macSet;
    NSMutableDictionary *m_bleDeviceMap;
    id <WCDeviceSearchLogicDelegate> _delegate;
    unsigned long long _deviceSearchType;
}

@property(nonatomic) unsigned long long deviceSearchType; // @synthesize deviceSearchType=_deviceSearchType;
@property(nonatomic) __weak id <WCDeviceSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (_Bool)isBLEDeviceBoundWithDid:(long long)arg1;
- (_Bool)isDeviceBoundWithDeviceType:(id)arg1 deviceID:(id)arg2;
- (_Bool)fliterDevice:(id)arg1;
- (void)stopScan;
- (void)startScan;
- (void)dealloc;
- (id)initWithFliterDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

