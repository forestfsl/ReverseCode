//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface OpVoiceReminderReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int opCode; // @dynamic opCode;
@property(retain, nonatomic) NSMutableArray *remindInfoList; // @dynamic remindInfoList;
@property(nonatomic) unsigned int remindInfoNum; // @dynamic remindInfoNum;

@end

