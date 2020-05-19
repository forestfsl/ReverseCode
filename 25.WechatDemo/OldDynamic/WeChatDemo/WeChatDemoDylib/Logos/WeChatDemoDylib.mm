#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"
#import<UIKit/UIKit.h>

@interface WCRedEnvelopesReceiveHomeView :UIView
{
    id  m_delegate;
    NSDictionary *m_dicBaseInfo;
}


@end

@interface WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1;
@end

@interface WCPayInfoItem
@property(retain, nonatomic) NSString *m_c2cNativeUrl;
@end

@interface  CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
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

@class WCBizUtil; @class WCRedEnvelopesLogicMgr; @class MMMsgLogicManager; @class CMessageMgr; @class BaseMsgContentViewController; @class WCRedEnvelopesReceiveControlLogic; @class WCRedEnvelopesReceiveHomeView; @class BaseMsgContentLogicController; @class MMServiceCenter; @class CContactMgr; @class NSMutableDictionary; @class WCPayLogicMgr; @class RoomContentLogicController; 
static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveHomeView* _LOGOS_SELF_CONST, SEL); static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void (*_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$)(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST, SEL, id); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMMsgLogicManager(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMMsgLogicManager"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCPayLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCPayLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCRedEnvelopesLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCRedEnvelopesLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCBizUtil(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCBizUtil"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NSMutableDictionary(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NSMutableDictionary"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$CContactMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("CContactMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMServiceCenter(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMServiceCenter"); } return _klass; }
#line 78 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"

static void _logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesReceiveControlLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
    
    WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
    
    NSString * m_c2cNativeUrl = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
    
     NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
    NSLog(@"m_c2cNativeUrl:%@",m_c2cNativeUrl);
    
    NSDictionary * url_dic = [_logos_static_class_lookup$WCBizUtil() dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
  
    NSMutableDictionary * mutalbe_dic = [_logos_static_class_lookup$NSMutableDictionary() dictionary];
    
    [mutalbe_dic setObject:@"1" forKey:@"msgType"];
    [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
    [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
   
    
     CContactMgr * contactMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$CContactMgr() class]];
    CContact* selfContact = [contactMgr getSelfContact];
    
    
    id displayName = [selfContact getContactDisplayName];
    NSLog(@"%@",[displayName class]);
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
        
        [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:mutalbe_dic];
 
        
    }denyCallback:^(){
    }];

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











































static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    NSLog(@"%@\n%@",arg1,[arg1 class]);
    _logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$(self, _cmd, arg1);
    
}




















static void _logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$(_LOGOS_SELF_TYPE_NORMAL RoomContentLogicController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$(self, _cmd, arg1);
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic = objc_getClass("WCRedEnvelopesReceiveControlLogic"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveControlLogic, @selector(WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveControlLogic$WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes);Class _logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView = objc_getClass("WCRedEnvelopesReceiveHomeView"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesReceiveHomeView, @selector(OnOpenRedEnvelopes), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesReceiveHomeView$OnOpenRedEnvelopes);Class _logos_class$_ungrouped$BaseMsgContentViewController = objc_getClass("BaseMsgContentViewController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(addMessageNode:layout:addMoreMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$);Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(MainThreadNotifyToExt:), (IMP)&_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$);MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(onNewSyncAddMessage:), (IMP)&_logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$);Class _logos_class$_ungrouped$BaseMsgContentLogicController = objc_getClass("BaseMsgContentLogicController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentLogicController, @selector(DidAddMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentLogicController$DidAddMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentLogicController$DidAddMsg$);Class _logos_class$_ungrouped$RoomContentLogicController = objc_getClass("RoomContentLogicController"); MSHookMessageEx(_logos_class$_ungrouped$RoomContentLogicController, @selector(DidAddMsg:), (IMP)&_logos_method$_ungrouped$RoomContentLogicController$DidAddMsg$, (IMP*)&_logos_orig$_ungrouped$RoomContentLogicController$DidAddMsg$);} }
#line 324 "/Users/apple/Documents/iOSReverse/ReverseCode/25.WechatDemo/OldDynamic/WeChatDemo/WeChatDemoDylib/Logos/WeChatDemoDylib.xm"
