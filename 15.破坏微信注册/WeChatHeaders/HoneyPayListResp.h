//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, HoneyPayListResp_Pertermit, NSMutableArray, NSString, RightCorner;

@interface HoneyPayListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *honeyRecords; // @dynamic honeyRecords;
@property(nonatomic) _Bool isShowOpenCardButton; // @dynamic isShowOpenCardButton;
@property(retain, nonatomic) HoneyPayListResp_Pertermit *pertermit; // @dynamic pertermit;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) RightCorner *rightCorner; // @dynamic rightCorner;

@end

