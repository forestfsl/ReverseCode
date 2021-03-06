//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewController.h"

#import "IVOIPUILogicMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "MultiTalkMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WAGameActionSheetDelegate.h"
#import "WAOpenGLViewDelegate.h"
#import "YYWebViewDelegate.h"

@class MMTimer, MMUIButton, MMUIView, MMWebImageView, NSMutableArray, NSString, NSURLRequest, RCDraggableButton, UILabel, UILongPressGestureRecognizer, UIView, WAGameActionSheet, WAGameLoadingAnimateView, WAOpenGLView, WAPopOverTaskBarlogic, WAPopOverView, YYWAWebView;

@interface WAGameViewController : WAWebViewController <WAGameActionSheetDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, IVOIPUILogicMgrExt, MultiTalkMgrExt, WAOpenGLViewDelegate, YYWebViewDelegate, MMWebImageViewDelegate>
{
    WAOpenGLView *_glView;
    WAGameActionSheet *_gameSheet;
    RCDraggableButton *_debugBtn;
    YYWAWebView *_debugWebView;
    _Bool _vConsoleVisible;
    NSMutableArray *_menuList;
    UIView *_backgroundView;
    MMWebImageView *_coverImageView;
    WAGameLoadingAnimateView *m_gameloadingAnimationView;
    UILabel *_performance;
    UILabel *_progressLabel;
    MMTimer *_timerMockLoadingProgress;
    _Bool _showStatusBar;
    _Bool _useDebug;
    _Bool _vConsoleFnishLoad;
    NSMutableArray *_logs;
    _Bool _reportPerformance;
    long long _reportPerformanceInterval;
    UILongPressGestureRecognizer *_moreLongPressRecognizer;
    _Bool _isTrigerMoreLongPress;
    UILongPressGestureRecognizer *_exitlongPressRecognizer;
    WAPopOverTaskBarlogic *_popOverLogic;
    WAPopOverView *_popOverView;
    long long _fpsTestNum;
    NSMutableArray *_delayedGestures;
    long long _reportCBFPSInterval;
    long long _deviceOrientation;
    _Bool _autoRotate;
    long long _initMemory;
    _Bool _manualHideSplash;
    float _mockprogress;
    MMUIView *_capsuleView;
    UIView *_inputBackground;
    id <WAGameKeyboardDelegate> _keyboardDelegate;
    id <WAGameContextDelegate> _delegate;
    unsigned long long _lockedOrientation;
    MMUIButton *_menuMoreButton;
    MMUIButton *_menuExitButton;
}

+ (id)createLoadingImgView:(id)arg1 delegate:(id)arg2;
+ (void)updateLoadingView:(id)arg1 bgView:(id)arg2 inView:(id)arg3;
+ (id)createLoadingView:(id)arg1 inView:(id)arg2;
@property(retain, nonatomic) MMUIButton *menuExitButton; // @synthesize menuExitButton=_menuExitButton;
@property(retain, nonatomic) MMUIButton *menuMoreButton; // @synthesize menuMoreButton=_menuMoreButton;
@property(nonatomic) unsigned long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(nonatomic) __weak id <WAGameContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAGameKeyboardDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property(retain, nonatomic) UIView *inputBackground; // @synthesize inputBackground=_inputBackground;
@property(retain, nonatomic) MMUIView *capsuleView; // @synthesize capsuleView=_capsuleView;
- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)onTimerMockLoadingProgressTimer:(id)arg1;
- (void)invadateMockLoadingProgressTimer;
- (void)startMockLoadingProgressTimer;
- (_Bool)isReportCommandBufferPerformance;
- (_Bool)isUseCommandBufferInThisAppID;
- (void)initSubContext:(id)arg1 context:(struct OpaqueJSContext *)arg2;
- (void)prepareTypedArray:(struct OpaqueJSContext *)arg1;
- (void)onLongPressExitItem:(id)arg1;
- (void)directlyOnAllExit;
- (void)onLeave:(id)arg1;
- (void)onMenu:(id)arg1;
- (void)onLongPressMoreItem:(id)arg1;
- (void)genCapsuleView;
- (_Bool)shouldUseSmallMenu;
- (void)reportCommandBufferFPS;
- (void)reportGamePerformanceInfo;
- (id)pluginNavBar;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)adjustViewLayers;
- (void)updatePerf;
- (void)stop;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)logError:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)onFrameTimeout:(int)arg1;
- (void)systemLog:(id)arg1;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)unlockOrientation;
- (void)lockOrientation:(long long)arg1;
- (_Bool)isOrientationLanscape;
- (void)setDeviceOrientation:(_Bool)arg1;
- (void)resetSubviews;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)DismissMyselfAnimated:(_Bool)arg1;
- (_Bool)isShowStatusBar;
- (void)setFullScreen:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setHideSplash:(_Bool)arg1;
- (void)hideSplash;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (_Bool)isIndexDataLoaded;
- (void)injectGameScript:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)setupCoverImage;
- (void)initOpenGLView:(id)arg1;
- (id)getAppLaunchConfig;
- (void)internalInitWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)printGameFPS;
- (id)initWithBaseURL:(id)arg1 query:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)textInputDidChange:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)onConfirm;
- (void)setFocus:(id)arg1;
- (_Bool)onReturn:(id)arg1;
- (id)getConfirmCaption:(id)arg1;
- (long long)getConfirmButton:(id)arg1;
- (_Bool)showKeyboard:(id)arg1 delegate:(id)arg2;
- (void)setKeyboardValue:(id)arg1;
- (void)hideKeyboard;
- (_Bool)multiline;
- (void)setMultiline:(_Bool)arg1;
- (id)pluginReportPageEvent;
- (_Bool)isInStarList;
- (id)menuDebugButtonTitleArray;
- (id)menubuttonTitleArray;
- (id)pluginNavBar;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)gameActionSheetDidDismiss:(id)arg1;
- (void)gameActionSheetInfoCliked:(id)arg1;
- (void)gameActionSheet:(id)arg1 didDismissWithMenuIndex:(long long)arg2;
- (void)gameActionSheet:(id)arg1 clickedButtonTitle:(id)arg2;
- (void)showTipsViewController:(id)arg1;
- (void)onCancelStar;
- (void)onAddToStar;
- (void)onSwitchVConsole;
- (void)shareGame;
- (void)hideShowVConsole;
- (struct CGRect)getCapsuleViewRect;
- (void)requestGameMenuList;
- (void)onMenuShow;
- (void)setNavRightButtonHidden:(_Bool)arg1;
- (id)getCanvasImage:(unsigned int)arg1;
- (void)insertSubView:(id)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

