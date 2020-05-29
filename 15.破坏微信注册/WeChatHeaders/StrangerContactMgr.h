//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IContactMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface StrangerContactMgr : MMService <IContactMgrExt, MMService, PBMessageObserverDelegate>
{
    _Bool m_bMemCacheNeedReload;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_lastUpdateTime;
    NSMutableArray *m_arrQueue;
    NSMutableDictionary *m_dicGetingContacts;
    NSMutableArray *m_arrUploading;
    unsigned int m_uiCurEventID;
}

- (void).cxx_destruct;
- (void)onDeleteContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleNewContact:(id)arg1;
- (_Bool)InternalUpdateContact:(id)arg1;
- (_Bool)checkIfForbiddenGetContact:(id)arg1;
- (void)CheckQueue;
- (id)GetUsrArray;
- (void)updateContactFromContact:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)SetAccessTime:(id)arg1;
- (_Bool)IsInQueue:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)dealloc;
- (void)onServiceInit;
- (void)clearMemoryCache;
- (void)saveData;
- (void)ReduceCache;
- (void)tryLoadData;
- (id)pathForTimeData;
- (id)pathForOldTimeData;
- (id)pathForData;
- (id)pathForOldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

