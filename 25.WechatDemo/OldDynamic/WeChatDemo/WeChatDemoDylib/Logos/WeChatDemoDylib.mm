#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"
#import<UIKit/UIKit.h>
#import "WeChatRedEnvelopesParamQueue.h"

@interface WCRedEnvelopesReceiveHomeView :UIView
{
    id  m_delegate;
    NSDictionary *m_dicBaseInfo;
}


@end

@interface BaseResponse

@property(nonatomic) int ret;
@end

@interface SKBuiltinBuffer_t
@property(retain, nonatomic) NSData *buffer; 
@property(nonatomic) unsigned int iLen;
@end


@interface HongBaoRes

@property(retain, nonatomic) BaseResponse *baseResponse; 
@property(nonatomic) int cgiCmdid; 
@property(retain, nonatomic) NSString *errorMsg; 
@property(nonatomic) int errorType; 
@property(retain, nonatomic) NSString *platMsg; 
@property(nonatomic) int platRet; 
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; 

@end


@interface WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
@end

@interface WCPayInfoItem
@property(retain, nonatomic) NSString *m_c2cNativeUrl;

@end

@interface  CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsFromUsr;
@end

@interface WCRedEnvelopesControlData

@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesBaseInfo;

@end




@interface WCRedEnvelopesReceiveControlLogic
{
    WCRedEnvelopesControlData * m_data;
}
@end


@interface CContact
- (id)getContactDisplayName;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl;
@end

@interface CContactMgr
- (id)getSelfContact;
@end

@interface MMMsgLogicManager
-(id)GetCurrentLogicController;
@end

@interface MMServiceCenter
+(id)defaultCenter;
-(id)getService:(Class)arg1;
@end

@interface WCBizUtil
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end


@interface WCPayLogicMgr
- (void)setRealnameReportScene:(unsigned int)arg1;
- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(void(^)())arg2 denyCallback:(void(^)())arg3;
@end

@interface CBaseContact
@property(retain, nonatomic) NSString *m_nsUsrName;
@end

@interface RoomContentLogicController
@property(retain, nonatomic) CBaseContact *m_contact;
@end




#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class WCRedEnvelopesLogicMgr; @class BaseMsgContentLogicController; @class WCRedEnvelopesReceiveControlLogic; @class WCRedEnvelopesReceiveHomeView; @class RoomContentLogicController; @class MMMsgLogicManager; @class CMessageMgr; @class MMServiceCenter; @class CContactMgr; @class WCPayLogicMgr; @class WCBizUtil; @class NSMutableDictionary; @class BaseMsgContentViewController; 
static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, HongBaoRes *, id); static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, HongBaoRes *, id); static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void (*_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); static void (*_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$)(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$NSMutableDictionary$safeSetObject$forKey$)(_LOGOS_SELF_TYPE_NORMAL NSMutableDictionary* _LOGOS_SELF_CONST, SEL, id, NSString *); static void _logos_method$_ungrouped$NSMutableDictionary$safeSetObject$forKey$(_LOGOS_SELF_TYPE_NORMAL NSMutableDictionary* _LOGOS_SELF_CONST, SEL, id, NSString *); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$CContactMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("CContactMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCRedEnvelopesLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCRedEnvelopesLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMServiceCenter(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMServiceCenter"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCPayLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCPayLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMMsgLogicManager(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMMsgLogicManager"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NSMutableDictionary(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NSMutableDictionary"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCBizUtil(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCBizUtil"); } return _klass; }
#line 109 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"

static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    
    WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
    


    
    
    NSString * m_c2cNativeUrl = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
     NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
    NSDictionary * url_dic = [_logos_static_class_lookup$WCBizUtil() dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
    NSMutableDictionary * mutalbe_dic = [_logos_static_class_lookup$NSMutableDictionary() dictionary];
    [mutalbe_dic setObject:@"1" forKey:@"msgType"];
    [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
    [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
     CContactMgr * contactMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$CContactMgr() class]];
    CContact* selfContact = [contactMgr getSelfContact];
    
    
    id displayName = [selfContact getContactDisplayName];

    [mutalbe_dic setObject:displayName forKey:@"nickName"];
    [mutalbe_dic setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
    CMessageWrap * msgWrap = [m_data m_oSelectedMessageWrap];
    if(msgWrap){
        NSString * m_c2cNativeUrl3 = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
        [mutalbe_dic setObject:m_c2cNativeUrl3 forKey:@"nativeUrl"];
    }
   
    MMMsgLogicManager * logciMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$MMMsgLogicManager() class]];
    RoomContentLogicController * currentLogicController = [logciMgr GetCurrentLogicController];
  
    if (currentLogicController)
    {
        CBaseContact * m_contact = [currentLogicController m_contact];
        if (m_contact)
        {
            NSString * m_nsUsrName = [m_contact m_nsUsrName];
            if(m_nsUsrName)
            {
                [mutalbe_dic setObject:m_nsUsrName forKey:@"sessionUserName"];
            }
        }
    }
  
    NSDictionary * baseInfo = [m_data m_structDicRedEnvelopesBaseInfo];
    
    NSString * timingIdentifier = [baseInfo objectForKey:@"timingIdentifier"];

    
    if(timingIdentifier.length)
        [mutalbe_dic setObject:timingIdentifier forKey:@"timingIdentifier"];
    WCPayLogicMgr * payLogic = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCPayLogicMgr() class]];
    [payLogic setRealnameReportScene:(unsigned int)1003];
    NSDictionary * baseInfo2 = [m_data m_structDicRedEnvelopesBaseInfo];
    id subScript = [baseInfo2 objectForKeyedSubscript:@"agree_duty"];
    [payLogic checkHongbaoOpenLicense:subScript acceptCallback:^(){
        
        WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
        NSLog(@"mutalbe_dic:%@",mutalbe_dic);
        
        [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:mutalbe_dic];
 
        
    }denyCallback:^(){
    }];
    
    
    _logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(self, _cmd);
}

















static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, HongBaoRes * arg1, id arg2){
    
    NSLog(@"cgiCmdid == %d",arg1.cgiCmdid);



    
    if(nil != arg1 && nil != arg2 && arg1.cgiCmdid == 3){
        NSError * err;
           NSDictionary * dict = [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:(NSJSONReadingMutableContainers) error:&err];
        
        
        NSString * timingId = dict[@"timingIdentifier"];
        NSMutableDictionary * param = [[WeChatRedEnvelopesParamQueue sharedQueue] deQueue];

        if(param){
            [param setObject:timingId forKey:@"timingIdentifier"];
            NSLog(@"param%@",param);
            sleep(1);
            
            WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
            
            [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:param];
            
        }
    }
    
    _logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(self, _cmd, arg1, arg2);
}












static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){








   
    _logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(self, _cmd);
}





















































static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, _Bool arg2, _Bool arg3) {
    _logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(self, _cmd, arg1, arg2, arg3);
    
}



















static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self, _cmd, arg1);
}











































static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, CMessageWrap * msgWrap){



    
     
        NSString * m_c2cNativeUrl = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
        
        
        if(msgWrap.m_uiMessageType == 49
           &&m_c2cNativeUrl
           &&[m_c2cNativeUrl containsString:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?"])
        {
            NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
            NSDictionary * url_dic = [_logos_static_class_lookup$WCBizUtil() dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
            NSMutableDictionary * mutalbe_dic = [_logos_static_class_lookup$NSMutableDictionary() dictionary];
            [mutalbe_dic setObject:@"1" forKey:@"msgType"];
            [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
            [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
            CContactMgr * contactMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$CContactMgr() class]];
            CContact* selfContact = [contactMgr getSelfContact];
            NSString * displayName = [selfContact getContactDisplayName];
            [mutalbe_dic setObject:displayName forKey:@"nickName"];
            [mutalbe_dic setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
            if(msgWrap){
                NSString * m_c2cNativeUrl3 = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
                [mutalbe_dic setObject:m_c2cNativeUrl3 forKey:@"nativeUrl"];
            }
            
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
            
            [mutalbe_dic setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];
            
            WeChatRedEnvelopesParamQueue * paramQueue = [WeChatRedEnvelopesParamQueue sharedQueue];
            [paramQueue enQueue:mutalbe_dic];
    
            
            
            NSMutableDictionary * params = [_logos_static_class_lookup$NSMutableDictionary() dictionary];
            [params setObject:@"0" forKey:@"agreeDuty"];
            [params setObject:url_dic[@"channelid"] forKey:@"channelId"];
            
            [params setObject:@"0" forKey:@"inWay"];
            [params setObject:url_dic[@"msgtype"] forKey:@"msgType"];
            [params setObject:m_c2cNativeUrl forKey:@"nativeUrl"];
            [params setObject:url_dic[@"sendid"] forKey:@"sendId"];
            
            WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
            
            
            
            [RedEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:params];
             NSLog(@"红包消息%d",msgWrap.m_uiMessageType);
        }else{
            NSLog(@"其他消息%d",msgWrap.m_uiMessageType);
        }
        _logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$(self, _cmd, msgWrap);
    
}






















static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$(self, _cmd, arg1);
}








static void _logos_method$_ungrouped$NSMutableDictionary$safeSetObject$forKey$(_LOGOS_SELF_TYPE_NORMAL NSMutableDictionary* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id anObject, NSString * key){
    _logos_orig$_ungrouped$NSMutableDictionary$safeSetObject$forKey$(self, _cmd, anObject, key);
}
static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic = objc_getClass("WCRedEnvelopesReceiveControlLogic"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic, @selector(WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes);Class _logos_class$_ungrouped$WCRedEnvelopesLogicMgr = objc_getClass("WCRedEnvelopesLogicMgr"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesLogicMgr, @selector(OnWCToHongbaoCommonResponse:Request:), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$);Class _logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView = objc_getClass("WCRedEnvelopesReceiveHomeView"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView, @selector(OnOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes);Class _logos_class$_ungrouped$BaseMsgContentViewController = objc_getClass("BaseMsgContentViewController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(addMessageNode:layout:addMoreMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$);Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(MainThreadNotifyToExt:), (IMP)&_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$);MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(onNewSyncAddMessage:), (IMP)&_logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$);Class _logos_class$_ungrouped$BaseMsgContentLogicController = objc_getClass("BaseMsgContentLogicController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentLogicController, @selector(DidAddMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$);Class _logos_class$_ungrouped$RoomContentLogicController = objc_getClass("RoomContentLogicController"); MSHookMessageEx(_logos_class$_ungrouped$RoomContentLogicController, @selector(DidAddMsg:), (IMP)&_logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$, (IMP*)&_logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$);Class _logos_class$_ungrouped$NSMutableDictionary = objc_getClass("NSMutableDictionary"); MSHookMessageEx(_logos_class$_ungrouped$NSMutableDictionary, @selector(safeSetObject:forKey:), (IMP)&_logos_method$_ungrouped$NSMutableDictionary$safeSetObject$forKey$, (IMP*)&_logos_orig$_ungrouped$NSMutableDictionary$safeSetObject$forKey$);} }
#line 488 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"
