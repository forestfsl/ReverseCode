//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCCardMsgTips : MMObject <PBCoding>
{
    unsigned int newCount;
    unsigned int lastUpdateTime;
    NSString *nsTipWording;
    NSString *nsTipIconUrl;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(nonatomic) unsigned int newCount; // @synthesize newCount;
- (void).cxx_destruct;
- (id)pathForCardMsgTips;
- (void)loadCardMsgTipsFromCache;
- (void)saveCardMsgTipsToCache;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

