//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString, PushMailWrap;

@interface CExtendInfoOfPushMail : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>
{
    PushMailWrap *m_oPushMailWrap;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) PushMailWrap *m_oPushMailWrap; // @synthesize m_oPushMailWrap;
- (void).cxx_destruct;
- (id)messageFTSText;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
