//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSCoreService.h"

#import "WAGameContextDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAJSGameService : WAJSCoreService <WAGameContextDelegate>
{
    _Bool _webViewFinishLoad;
    NSMutableArray *_prevEvents;
    _Bool _workingThreadPaused;
    NSMutableArray *_blockedResults;
    NSMutableArray *_blockedEvents;
    unsigned int _instContextId;
    NSMutableDictionary *_callBackResult;
}

@property(retain, nonatomic) NSMutableDictionary *callBackResult; // @synthesize callBackResult=_callBackResult;
- (void).cxx_destruct;
- (void)onSubContextCreate:(id)arg1 contextId:(unsigned int)arg2 newInst:(_Bool)arg3;
- (void)prepareTypedArray:(struct OpaqueJSContext *)arg1;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)suspendWorkingThread;
- (void)tryInjectJavaScript;
- (void)onAfterGameBridgeScriptEvaluated;
- (struct OpaqueJSContext *)getContext;
- (id)getAppId;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4;
- (void)invokeCallbackHandler:(id)arg1;
- (void)workthread_sendJSEventToWKWebViewService:(id)arg1;
- (void)innerSendJSEventToService:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (void)sendErrorEvent:(id)arg1;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (void)printConsoleLog:(id)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)stopAppBrand;
- (void)startServiceThread;
- (void)setupAPIBlock:(id)arg1 contextId:(unsigned int)arg2;
- (void)injectGameScript:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

