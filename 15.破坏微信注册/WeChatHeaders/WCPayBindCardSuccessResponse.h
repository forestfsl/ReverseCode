//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCPayBindCardActivityInfo, WCPayBindCardRecommendH5Info, WCPayBindCardRecommendNativeInfo, WCPayBindCardRecommendTinyAppInfo;

@interface WCPayBindCardSuccessResponse : NSObject
{
    unsigned int _jump_type;
    unsigned int _show_bind_succ_page;
    long long _retcode;
    NSString *_retmsg;
    NSString *_bind_flag;
    NSString *_bind_serial;
    NSString *_bind_succ_btn_wording;
    WCPayBindCardActivityInfo *_activity_info;
    WCPayBindCardRecommendH5Info *_h5_info;
    WCPayBindCardRecommendTinyAppInfo *_tinyapp_info;
    WCPayBindCardRecommendNativeInfo *_native_info;
    NSString *_bind_succ_remind_wording;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *bind_succ_remind_wording; // @synthesize bind_succ_remind_wording=_bind_succ_remind_wording;
@property(retain, nonatomic) WCPayBindCardRecommendNativeInfo *native_info; // @synthesize native_info=_native_info;
@property(retain, nonatomic) WCPayBindCardRecommendTinyAppInfo *tinyapp_info; // @synthesize tinyapp_info=_tinyapp_info;
@property(retain, nonatomic) WCPayBindCardRecommendH5Info *h5_info; // @synthesize h5_info=_h5_info;
@property(retain, nonatomic) WCPayBindCardActivityInfo *activity_info; // @synthesize activity_info=_activity_info;
@property(nonatomic) unsigned int show_bind_succ_page; // @synthesize show_bind_succ_page=_show_bind_succ_page;
@property(nonatomic) unsigned int jump_type; // @synthesize jump_type=_jump_type;
@property(retain, nonatomic) NSString *bind_succ_btn_wording; // @synthesize bind_succ_btn_wording=_bind_succ_btn_wording;
@property(retain, nonatomic) NSString *bind_serial; // @synthesize bind_serial=_bind_serial;
@property(retain, nonatomic) NSString *bind_flag; // @synthesize bind_flag=_bind_flag;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;
@property(nonatomic) long long retcode; // @synthesize retcode=_retcode;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;

@end

