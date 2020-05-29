//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableSet, NSString;

@interface FTSLogItem : NSObject
{
    _Bool _isSilentGroup;
    int _searchScene;
    int _clickType;
    int _clickSubType;
    int _matchType;
    unsigned int _guideStyle;
    unsigned int _queryMatchType;
    unsigned int _groupMemberMatchLogType;
    unsigned int _browseTime;
    unsigned int _normalContactCount;
    unsigned int _groupContactCount;
    unsigned int _brandContactCount;
    unsigned int _messageCount;
    unsigned int _featureCount;
    unsigned int _favCount;
    unsigned int _gameCount;
    unsigned int _addressBookCount;
    unsigned int _weAppCount;
    unsigned int _miniGameCount;
    unsigned int _sectionPos;
    unsigned int _resultCount;
    unsigned int _lastActiveTime;
    unsigned int _myLastActiveTime;
    unsigned int _memCount;
    unsigned int _memFanCount;
    unsigned int _unReadCount;
    unsigned long long _row;
    unsigned long long _bussinessRow;
    NSString *_searchId;
    unsigned long long _docId;
    NSString *_itemName;
    NSString *_query;
    NSDictionary *_voiceInfo;
    NSMutableSet *_exposeSet;
}

@property(nonatomic) unsigned int unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) _Bool isSilentGroup; // @synthesize isSilentGroup=_isSilentGroup;
@property(nonatomic) unsigned int memFanCount; // @synthesize memFanCount=_memFanCount;
@property(nonatomic) unsigned int memCount; // @synthesize memCount=_memCount;
@property(nonatomic) unsigned int myLastActiveTime; // @synthesize myLastActiveTime=_myLastActiveTime;
@property(nonatomic) unsigned int lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(retain, nonatomic) NSMutableSet *exposeSet; // @synthesize exposeSet=_exposeSet;
@property(retain, nonatomic) NSDictionary *voiceInfo; // @synthesize voiceInfo=_voiceInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(nonatomic) unsigned int sectionPos; // @synthesize sectionPos=_sectionPos;
@property(nonatomic) unsigned int miniGameCount; // @synthesize miniGameCount=_miniGameCount;
@property(nonatomic) unsigned int weAppCount; // @synthesize weAppCount=_weAppCount;
@property(nonatomic) unsigned int addressBookCount; // @synthesize addressBookCount=_addressBookCount;
@property(nonatomic) unsigned int gameCount; // @synthesize gameCount=_gameCount;
@property(nonatomic) unsigned int favCount; // @synthesize favCount=_favCount;
@property(nonatomic) unsigned int featureCount; // @synthesize featureCount=_featureCount;
@property(nonatomic) unsigned int messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) unsigned int brandContactCount; // @synthesize brandContactCount=_brandContactCount;
@property(nonatomic) unsigned int groupContactCount; // @synthesize groupContactCount=_groupContactCount;
@property(nonatomic) unsigned int normalContactCount; // @synthesize normalContactCount=_normalContactCount;
@property(nonatomic) unsigned int browseTime; // @synthesize browseTime=_browseTime;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) unsigned int groupMemberMatchLogType; // @synthesize groupMemberMatchLogType=_groupMemberMatchLogType;
@property(nonatomic) unsigned int queryMatchType; // @synthesize queryMatchType=_queryMatchType;
@property(nonatomic) unsigned int guideStyle; // @synthesize guideStyle=_guideStyle;
@property(nonatomic) int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(nonatomic) unsigned long long bussinessRow; // @synthesize bussinessRow=_bussinessRow;
@property(nonatomic) int clickSubType; // @synthesize clickSubType=_clickSubType;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) int clickType; // @synthesize clickType=_clickType;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (void).cxx_destruct;
- (id)genStatStringForSubSearch;
- (id)genStatString;
- (id)getExposeInfo;
- (_Bool)isVoiceResultMod;
- (id)genVoiceInfo;
- (_Bool)hasVoiceInput;
- (id)formatLogString:(id)arg1;
- (void)parse:(id)arg1;
- (id)initWithParams:(id)arg1;
- (id)init;

@end

