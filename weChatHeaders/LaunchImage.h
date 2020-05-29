//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMResourceMgrExt.h"
#import "PBCoding.h"

@class NSString;

@interface LaunchImage : NSObject <PBCoding, MMResourceMgrExt>
{
    unsigned int uiBeginTime;
    unsigned int uiEndTime;
    unsigned int uiResType;
    unsigned int uiResSubType;
    unsigned int uiResVersion;
}

+ (void)parseLaunchImage:(id)arg1 fromMsg:(id)arg2;
+ (id)parseChangeLaunchImage:(id)arg1;
+ (void)saveLaunchImage:(id)arg1;
+ (id)loadLaunchImage;
+ (id)GetLaunchImageConfigPath;
+ (id)GetLaunchImagePath;
+ (void)initialize;
@property(nonatomic) unsigned int uiResVersion; // @synthesize uiResVersion;
@property(nonatomic) unsigned int uiResSubType; // @synthesize uiResSubType;
@property(nonatomic) unsigned int uiResType; // @synthesize uiResType;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime;
- (void)checkResouce;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

