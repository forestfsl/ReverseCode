//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, OrderedDictionary;

@interface EmoticonCustomManageDataLogic : MMObject
{
    int m_mode;
    NSMutableArray *m_wrapArray;
    id <EmoticonCustomManageDataLogicDelegate> m_delegate;
    unsigned long long m_type;
    OrderedDictionary *_m_markedWrapList;
}

@property(retain, nonatomic) OrderedDictionary *m_markedWrapList; // @synthesize m_markedWrapList=_m_markedWrapList;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type;
@property(nonatomic) __weak id <EmoticonCustomManageDataLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_mode; // @synthesize m_mode;
@property(retain, nonatomic) NSMutableArray *m_wrapArray; // @synthesize m_wrapArray;
- (void).cxx_destruct;
- (id)reloadDataWithType:(int)arg1;
- (void)changeToRecoveringMode;
- (void)changeToNormalMode;
- (void)changeToEditingMode;
- (void)clearAllMark;
- (void)changeMarkStateWithWrap:(id)arg1;
- (id)emoticonWrapListForMarkItems;
- (id)md5ListForMarkItems;
- (id)arrayForMarkDelete;
- (id)arrayForRow:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (unsigned long long)totalEmoticonCountShowed;
- (unsigned long long)totalEmoticonCountIncludeRecoverFailed;
- (void)setDelegate:(id)arg1;
- (id)recoverMgr;
- (unsigned long long)columnCount;
- (void)dealloc;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;

@end

