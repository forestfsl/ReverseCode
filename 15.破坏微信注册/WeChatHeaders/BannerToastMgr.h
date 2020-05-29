//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMWindowController, NSMutableArray, NSMutableDictionary, NSString, VoicePrintLogicControllerFactory;

@interface BannerToastMgr : MMService <MMService, IMsgExt>
{
    NSMutableArray *m_msgDic;
    NSMutableDictionary *m_friendRecommandMsgs;
    NSMutableDictionary *m_dicSecurityBannerMsgs;
    MMWindowController *m_windowController;
    VoicePrintLogicControllerFactory *m_verifyLogicController;
}

- (void).cxx_destruct;
- (void)logUniDirectionFriendBanner:(id)arg1 opType:(unsigned int)arg2;
- (void)logRecommandFriendBanner:(id)arg1 opType:(unsigned int)arg2 recCount:(unsigned int)arg3;
- (void)logMainFrameBanner:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)deleteSecurityBannerMsg:(id)arg1;
- (id)getSecurityBannerData:(id)arg1;
- (_Bool)shouldShowSecurityBannerToUser:(id)arg1;
- (id)pathForFriendRec;
- (void)loadFriendRecMsgs;
- (void)saveFriendRecMsgs;
- (void)deleteRecommandFriendMsg:(id)arg1;
- (_Bool)shouldRecommandFriendToUser:(id)arg1;
- (void)HideVoicePrintVerifyWindow;
- (void)showVoicePrintVerifyView;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleBannerMsg:(id)arg1;
- (id)makeMsgByType:(int)arg1;
- (void)loadMsgs;
- (void)saveOneMsg:(id)arg1;
- (void)saveMsgs;
- (id)pathForBannerMsg;
- (id)getRootDir;
- (void)trigBanner;
- (id)getShowMsg;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

