//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWAJSContextWifiProtocol.h"

@interface WAJSEventHandler_connectWifi : WAJSEventHandler_BaseEvent <IWAJSContextWifiProtocol>
{
}

- (id)wifiInstance;
- (void)onWifiConfigDone:(int)arg1 errMsg:(id)arg2;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;

@end

