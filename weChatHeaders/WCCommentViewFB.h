//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "IMMLanguageMgrExt.h"
#import "ITranslateSnsMgrExt.h"
#import "IWCMyStoryUserStateUtilExt.h"
#import "RichTextLayoutDelegate.h"
#import "WCForceTouchTriggerLongPressProtocol.h"

@class NSMutableArray, NSString, RichTextView, UIButton, UIImageView, UINavigationController, WCUserComment;

@interface WCCommentViewFB : MMUIView <RichTextLayoutDelegate, WCForceTouchTriggerLongPressProtocol, IMMLanguageMgrExt, IWCMyStoryUserStateUtilExt, ILinkEventExt, ITranslateSnsMgrExt>
{
    RichTextView *_contentView;
    id <ILinkEventExt> _urlLabelDelegate;
    RichTextView *_translateView;
    UIButton *_translateStatusView;
    UIImageView *_translateLineView;
    int eTranslateStatus;
    NSString *_copyedText;
    _Bool _isLongPressHandled;
    id <WCCommentViewFBDelegate> _commentDelegate;
    WCUserComment *_commentUserInfo;
    double _fMaxWidth;
    _Bool _shouldConfirmDelete;
    UINavigationController *navigationController;
    _Bool _isRedType;
    _Bool _isAdComment;
    UIButton *fulltextButton;
    NSMutableArray *hasNewStoryArray;
    NSString *m_dataItemTid;
    double _firstTopHeight;
}

+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
+ (double)getVisibleHeightForCrashProtectedStateWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2;
+ (double)getVisibleHeightWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 andDataItemTid:(id)arg3;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genContentStrPrefix:(id)arg1;
+ (id)genContentUserStr:(id)arg1 nickname:(id)arg2 isHBComment:(_Bool)arg3 isAdvertiserUser:(_Bool)arg4;
@property(nonatomic) double firstTopHeight; // @synthesize firstTopHeight=_firstTopHeight;
@property(nonatomic) _Bool isRedType; // @synthesize isRedType=_isRedType;
@property(retain, nonatomic) NSString *m_dataItemTid; // @synthesize m_dataItemTid;
@property(nonatomic) _Bool shouldConfirmDelete; // @synthesize shouldConfirmDelete=_shouldConfirmDelete;
@property(nonatomic) __weak id <WCCommentViewFBDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(nonatomic) __weak id <ILinkEventExt> urlLabelDelegate; // @synthesize urlLabelDelegate=_urlLabelDelegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
@property(nonatomic) double fMaxWidth; // @synthesize fMaxWidth=_fMaxWidth;
- (void).cxx_destruct;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onLanguageChange;
- (double)lineWidthAtY:(double)arg1 richTextView:(id)arg2;
- (void)onFulltextBtnClick;
- (void)tryAddFullTextBtnView;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (void)makeTranslateShowAnimation;
- (double)initContentTranslateView:(id)arg1;
- (void)onTranslate:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetNormal;
- (void)onViewLongPressed;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(struct CGRect)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showAtedFriendMenuItemForNoTextWithRect:(struct CGRect)arg1;
- (void)onRestore:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)showWC;
- (double)getVisibleHeight;
- (void)manualLayoutSubViews;
- (void)createSubviews;
- (void)dealloc;
- (void)initStoryUserStateFor:(id)arg1;
- (void)initHasNewStoryLogic;
- (id)initWithCommentUserInfo:(id)arg1 andDataItemTid:(id)arg2 isAdComment:(_Bool)arg3;
- (id)GetTranslateSnsKeyID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

