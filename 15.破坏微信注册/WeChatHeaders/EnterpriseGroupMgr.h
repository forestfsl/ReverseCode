//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface EnterpriseGroupMgr : MMService <MMService, PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleConvertBizChat:(id)arg1;
- (void)handleInitiateBizChat:(id)arg1;
- (void)handleQuitBizChat:(id)arg1;
- (void)handleUpdateBizChatMemberList:(id)arg1;
- (void)handleUpdateBizChat:(id)arg1;
- (void)handleCreateBizChatInfo:(id)arg1;
- (_Bool)updateGroupContactAttrToSvr:(id)arg1;
- (_Bool)updateGroupMemberListToSvr:(id)arg1;
- (_Bool)convertBizChat:(id)arg1 chatId:(id)arg2 chatType:(id)arg3 callBackId:(id)arg4;
- (_Bool)initiateBizChat:(id)arg1 chatTitle:(id)arg2 users:(id)arg3 callBackId:(id)arg4;
- (_Bool)updateGroupSetting:(id)arg1 bizFlag:(unsigned int)arg2;
- (_Bool)updateGroupName:(id)arg1 groupName:(id)arg2;
- (_Bool)deleteMemberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (_Bool)addMemeberList:(id)arg1 group:(id)arg2 brand:(id)arg3;
- (_Bool)quitEnterpriseGroup:(id)arg1;
- (_Bool)createEnterpriseGroup:(id)arg1 extKey:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

