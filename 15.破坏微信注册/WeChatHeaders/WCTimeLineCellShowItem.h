//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class NSString;

@interface WCTimeLineCellShowItem : NSObject <NSObject>
{
    _Bool m_showWithInfo;
    _Bool m_showLocationInfo;
    _Bool m_showActionInfo;
    _Bool m_isUploadFailed;
    _Bool m_showABTestTip;
    NSString *m_dataItemID;
    NSString *m_layerId;
    unsigned int m_rewardCount;
    _Bool m_isSightThumbImageDownloaded;
}

@property(nonatomic) _Bool m_isSightThumbImageDownloaded; // @synthesize m_isSightThumbImageDownloaded;
@property(nonatomic) unsigned int m_rewardCount; // @synthesize m_rewardCount;
@property(nonatomic) _Bool m_showABTestTip; // @synthesize m_showABTestTip;
@property(nonatomic) _Bool m_isUploadFailed; // @synthesize m_isUploadFailed;
@property(nonatomic) _Bool m_showActionInfo; // @synthesize m_showActionInfo;
@property(nonatomic) _Bool m_showLocationInfo; // @synthesize m_showLocationInfo;
@property(nonatomic) _Bool m_showWithInfo; // @synthesize m_showWithInfo;
- (void).cxx_destruct;
- (_Bool)isDifferentWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

