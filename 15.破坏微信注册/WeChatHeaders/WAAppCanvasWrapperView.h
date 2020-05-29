//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IWAMsgNodeJSCoreCenterExt-Protocol.h"
#import "WACanvasViewDelegate-Protocol.h"

@class DotLoadingView, NSObject, NSString, UIImageView, WAAppCanvasWrapperViewData, WACanvasView;
@protocol OS_dispatch_queue, WAAppCanvasWrapperViewDelegate;

@interface WAAppCanvasWrapperView : UIView <WACanvasViewDelegate, IWAMsgNodeJSCoreCenterExt>
{
    unsigned long long _beginTime;
    unsigned long long _firstDrawedTime;
    _Bool _isLoadingViewFading;
    unsigned int _coreId;
    id <WAAppCanvasWrapperViewDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_drawQueue;
    WACanvasView *_canvasView;
    UIImageView *_logoImgView;
    UIView *_defaultLogoBgView;
    UIView *_loadingViewBgView;
    DotLoadingView *_loadingIndicator;
    unsigned long long _viewState;
    WAAppCanvasWrapperViewData *_viewData;
}

@property(retain, nonatomic) WAAppCanvasWrapperViewData *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) _Bool isLoadingViewFading; // @synthesize isLoadingViewFading=_isLoadingViewFading;
@property(retain, nonatomic) DotLoadingView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *loadingViewBgView; // @synthesize loadingViewBgView=_loadingViewBgView;
@property(retain, nonatomic) UIView *defaultLogoBgView; // @synthesize defaultLogoBgView=_defaultLogoBgView;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) WACanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *drawQueue; // @synthesize drawQueue=_drawQueue;
@property(nonatomic) __weak id <WAAppCanvasWrapperViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int coreId; // @synthesize coreId=_coreId;
- (void).cxx_destruct;
- (void)notifyEventEndWithResult:(id)arg1;
- (void)hideDefaultLogoBgView;
- (void)hideLoadingView;
- (void)showDisabledView;
- (void)showDownloadFailView;
- (void)showLoadingView;
- (void)goDisabled;
- (void)goDrawed;
- (void)goDownloadFail;
- (void)tryGoTimeOut;
- (void)goLoading;
- (void)onJSCore:(unsigned int)arg1 showDatePickerView:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 showPickerView:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 dataUpdated:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 authorizeSuccess:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 openApp:(id)arg2;
- (void)onJSCore:(unsigned int)arg1 updateHeight:(double)arg2;
- (void)onJSCore:(unsigned int)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onJSCoreIamgeUrlDownloaded:(id)arg1;
- (void)onJSCore:(unsigned int)arg1 evaluatedResult:(id)arg2 reserve:(_Bool)arg3;
- (void)reportConsuming:(long long)arg1;
- (id)getImage:(id)arg1;
- (void)layoutSubviews;
- (void)clearCrashProtect;
- (void)notifyOnTapAt:(struct CGPoint)arg1 forEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateChangeHeight:(double)arg1;
- (void)markActive;
- (void)markUnactive;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)resume;
- (void)pause;
- (void)start;
- (void)setupWithParams:(id)arg1;
- (void)initLogoView;
- (void)initLoadingView;
- (void)initCanvasView;
- (void)makeSureViewInited;
- (double)getMilliseconds:(struct timeval)arg1;
- (void)doReportDrawTime;
- (id)createTestSpeedReportItem;
- (id)createIDKeyReportItem;
- (void)releaseResourcesOnSubthread;
- (void)dealloc;
- (void)initializeEnv;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

