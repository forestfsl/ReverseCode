//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTBaseSectionData.h"

@class CMessageWrap;

@interface BTNotifySectionData : BTBaseSectionData
{
    unsigned int _notifyCount;
    CMessageWrap *_latestMsgWrap;
}

@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(retain, nonatomic) CMessageWrap *latestMsgWrap; // @synthesize latestMsgWrap=_latestMsgWrap;
- (void).cxx_destruct;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;

@end

