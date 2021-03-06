//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "IVOIPUILogicMgrExt.h"
#import "MsgImgFullScreenContainerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "WAMediaFullScreenViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WXNetworkVideoPlayerViewTouchDelegate.h"

@class MsgImgFullScreenContainer, NSArray, NSMutableDictionary, NSString, UIView, WAImgBottomBar, WCActionSheet;

@interface WAMediaFullScreenViewController : FullScreenViewController <MsgImgFullScreenContainerDelegate, WXNetworkVideoPlayerViewTouchDelegate, WCActionSheetDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, WAMediaFullScreenViewControllerDelegate, IVOIPUILogicMgrExt, UIAlertViewDelegate>
{
    MsgImgFullScreenContainer *m_pagingScrollView;
    WAImgBottomBar *_bottomBar;
    WCActionSheet *m_actionSheet;
    UIView *m_snapShotImgView;
    struct CGRect m_originFrame;
    NSArray *m_mediaList;
    NSMutableDictionary *m_dicIndex2View;
    unsigned long long m_currentIndex;
    _Bool m_bIsRotating;
    _Bool m_bRotateDisable;
    id <WAMediaFullScreenViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WAMediaFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)viewForIndex:(unsigned long long)arg1 Frame:(struct CGRect)arg2;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)onWXNetworkVideoPlayerViewClose;
- (void)setToolViewAlpha:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onLongPress:(id)arg1;
- (void)onSingleTap;
- (void)onSingleTap:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateBottomBarViews;
- (void)onChangePage;
- (void)initBottomBar;
- (void)initScrollView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithMediaList:(id)arg1 CurrentMediaPreviewImgView:(id)arg2 CurrentMediaIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

