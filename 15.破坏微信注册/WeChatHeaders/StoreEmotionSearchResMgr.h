//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMResourceMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface StoreEmotionSearchResMgr : MMService <MMResourceMgrExt, MMService>
{
}

+ (id)unZipResIfTargetNotExistWithPath:(id)arg1 forSubType:(unsigned int)arg2;
+ (void)deleteResForSubType:(unsigned int)arg1;
+ (unsigned int)defaultVersionForSubType:(unsigned int)arg1;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)arg1;
+ (id)MMKVVersionKeyForEmoticonResWithSubType:(unsigned int)arg1;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)arg1;
+ (void)unZipResWithPath:(id)arg1 forSubType:(unsigned int)arg2 version:(unsigned int)arg3;
+ (void)tryUpdateEmoticonResForSubType:(unsigned int)arg1;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

