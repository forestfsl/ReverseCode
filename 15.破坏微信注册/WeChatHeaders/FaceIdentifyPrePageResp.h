//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PromptButton;

@interface FaceIdentifyPrePageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bizHeadUrl; // @dynamic bizHeadUrl;
@property(retain, nonatomic) NSString *bizNickName; // @dynamic bizNickName;
@property(retain, nonatomic) NSString *businessTips; // @dynamic businessTips;
@property(nonatomic) unsigned int checkAliveType; // @dynamic checkAliveType;
@property(retain, nonatomic) NSString *complainUrl; // @dynamic complainUrl;
@property(retain, nonatomic) NSString *feedbackUrl; // @dynamic feedbackUrl;
@property(retain, nonatomic) NSString *headerPromptWording; // @dynamic headerPromptWording;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(nonatomic) float lightThreshold; // @dynamic lightThreshold;
@property(retain, nonatomic) PromptButton *prompt; // @dynamic prompt;

@end

