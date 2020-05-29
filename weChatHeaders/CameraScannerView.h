//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMTimer, NSMutableString, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface CameraScannerView : MMUIView <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_prevLayer;
    NSRecursiveLock *_cameraLock;
    id <CameraScannerViewDelegate> _delegate;
    _Bool _hasInit;
    _Bool _hasCaptureOutput;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    AVCaptureDevice *_captureDevice;
    MMTimer *_lowLightCheckTimer;
    _Bool _shouldCheckLowLight;
    _Bool _isLowLight;
    _Bool _isLightBoostOn;
    struct CGPoint _focusPoint;
    _Bool _observingFocus;
    _Bool _hasFocused;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    float _compareBrightness;
    AVCaptureStillImageOutput *_imageOutput;
    _Bool _isTakingPic;
    _Bool _shouldStopScan;
    _Bool _stopTimerCheck;
    unsigned int _lightMode;
    NSMutableString *_zoomOplog;
}

+ (void)releaseInstance;
+ (id)sharedInstance;
@property(nonatomic) _Bool stopTimerCheck; // @synthesize stopTimerCheck=_stopTimerCheck;
@property(readonly, nonatomic) unsigned int lightMode; // @synthesize lightMode=_lightMode;
@property(readonly, nonatomic) NSMutableString *zoomOplog; // @synthesize zoomOplog=_zoomOplog;
@property(readonly, nonatomic) NSRecursiveLock *cameraLock; // @synthesize cameraLock=_cameraLock;
@property _Bool hasCaptureOutput; // @synthesize hasCaptureOutput=_hasCaptureOutput;
@property(readonly, nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(nonatomic) __weak id <CameraScannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void).cxx_destruct;
- (void)clearLog;
- (void)addZoomFactorLog:(double)arg1 manually:(_Bool)arg2;
- (void)setZoomFactor:(double)arg1 animated:(_Bool)arg2;
- (double)getZoomFactor;
- (_Bool)setLightBoostOn:(_Bool)arg1;
- (_Bool)isLightBoostAvailable;
- (void)onTimerFocus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)continuousExposureAtPoint:(struct CGPoint)arg1;
- (void)continuousFocusAtPoint:(struct CGPoint)arg1;
- (float)getRotateDegreeRelativeToCamera;
- (struct CGPoint)pointToCaptureDevice:(struct CGPoint)arg1;
- (struct CGRect)convertPortraitToCameraRect:(struct CGRect)arg1;
- (struct CGPoint)convertToPortraitPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToPortraitRect:(struct CGRect)arg1;
- (void)addFocusObserver;
- (void)tryRemoveFocusObserver;
- (void)stopTimerCheckLowLight;
- (void)onTimerCheckLowLight;
- (void)startTimerCheckLowLight;
- (void)stop;
- (void)start;
- (void)setPreviewScale:(float)arg1;
- (void)onCaptureTimeout;
- (void)takePicturWithCompletion:(CDUnknownBlockType)arg1;
- (long long)getDeviceOrientation:(long long)arg1;
- (void)showTorchButtonWithSeconds:(unsigned int)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)initCaptureWithPreviewScale:(float)arg1;
- (float)getRotateRadius:(long long)arg1;
- (void)adjustToNewSize:(double)arg1;
- (void)layoutSubviews;
- (void)cleanupAVSession;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

