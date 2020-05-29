//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface EmoticonOperateCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned long long m_opCode;
    unsigned long long m_type;
    _Bool _m_hasStartRequestOnce;
    unsigned int _m_eventId;
    id <EmoticonOperateCgiDelegate> _m_delegate;
    NSMutableArray *_m_md5List;
}

@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List=_m_md5List;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce=_m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId=_m_eventId;
@property(nonatomic) __weak id <EmoticonOperateCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callOkNeedUploadDelegate:(id)arg1;
- (void)callFailedDelegateForOverLimit;
- (void)callFailedDelegate;
- (void)internalRequest;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithOpcode:(unsigned long long)arg1 type:(unsigned long long)arg2 md5List:(id)arg3 delegate:(id)arg4;
- (void)dealloc;

@end

