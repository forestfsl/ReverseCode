#import <UIKit/UIKit.h>
#import "WeChatRedEnvelopesParamQueue.h"


@interface BaseResponse
//@property(retain, nonatomic) SKBuiltinString_t *errMsg; // @dynamic errMsg;
@property(nonatomic) int ret;
@end

@interface SKBuiltinBuffer_t
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int iLen;
@end


@interface HongBaoRes

@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;
@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;

@end



@interface WCPayInfoItem
@property(retain, nonatomic) NSString *m_c2cNativeUrl;

@end

@interface  CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsFromUsr;//

@end

@interface MMMsgLogicManager
-(id)GetCurrentLogicController;
@end

@interface WCRedEnvelopesControlData
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap;
@property(retain, nonatomic) NSDictionary *m_structDicRedEnvelopesBaseInfo;

@end

@interface WCRedEnvelopesReceiveControlLogic : NSObject
{
    WCRedEnvelopesControlData * m_data;
}


@end

@interface MMServiceCenter
+(id)defaultCenter;
-(id)getService:(Class)arg1;
@end

@interface WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;

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


@interface CContact
- (id)getContactDisplayName;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl;
@end

@interface WCBizUtil
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end

@interface CContactMgr
- (id)getSelfContact;
@end


%hook CMessageMgr
-(void)MainThreadNotifyToExt:(id)arg1{//这个是可以在微信界面收到消息的时候就可以调用的办法
    %orig;
  
}


/**
 思路：
 1、收到消息，如果是红包？type 49 url = @"..."
 2、拼接参数。
 3、保存参数 --？
 4、发送拆红包的请求！
 */


- (void)onNewSyncAddMessage:(CMessageWrap *)msgWrap{
    BOOL isSwitch =  [SLDefaults boolForKey:SLSWITCSLEY];
    [WeChatRedEnvelopesParamQueue sharedQueue].isAuto = isSwitch;
      NSLog(@"onNewSyncAddMessage是否自动抢红包%d",[WeChatRedEnvelopesParamQueue sharedQueue].isAuto);
    if([WeChatRedEnvelopesParamQueue sharedQueue].isAuto){
        //      NSLog(@"是否是群消息:%@",msgWrap.m_nsFromUsr);
        //        NSLog(@"%@\n%@",msgWrap,[msgWrap class]);//CMessageWrap
            //因此可以在这里负责抢红包的代码写道这里来
        //    /取出url
                NSString * m_c2cNativeUrl = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
                
                //-----------------------------------拼接参数！！-------------------------------
                if(msgWrap.m_uiMessageType == 49
                   &&m_c2cNativeUrl
                   &&[m_c2cNativeUrl containsString:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?"])//说明是红包消息！
                {
                    NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
                    NSDictionary * url_dic = [%c(WCBizUtil) dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
                    NSMutableDictionary * mutalbe_dic = [%c(NSMutableDictionary) dictionary];
                    [mutalbe_dic setObject:@"1" forKey:@"msgType"];
                    [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
                    [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
                    CContactMgr * contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
                    CContact* selfContact = [contactMgr getSelfContact];
                    NSString * displayName = [selfContact getContactDisplayName];
                    [mutalbe_dic setObject:displayName forKey:@"nickName"];
                    [mutalbe_dic setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
                    if(msgWrap){
                        NSString * m_c2cNativeUrl3 = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
                        [mutalbe_dic setObject:m_c2cNativeUrl3 forKey:@"nativeUrl"];
                    }
                    
            //        MMMsgLogicManager * logciMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(MMMsgLogicManager) class]];
            //        RoomContentLogicController * currentLogicController = [logciMgr GetCurrentLogicController];
            //
            //        if (currentLogicController)
            //        {
            //            CBaseContact * m_contact = [currentLogicController m_contact];
            //            if (m_contact)
            //            {
            //                NSString * m_nsUsrName = [m_contact m_nsUsrName];
            //                if(m_nsUsrName)
            //                {
            //
            //                    [mutalbe_dic setObject:m_nsUsrName forKey:@"sessionUserName"];
            //                }
            //            }
            //        }
                    //重点提醒!容易
                    [mutalbe_dic setObject:msgWrap.m_nsFromUsr forKey:@"sessionUserName"];
                    //保存 mutalbe_dic 进入队列！
                    WeChatRedEnvelopesParamQueue * paramQueue = [WeChatRedEnvelopesParamQueue sharedQueue];
                    [paramQueue enQueue:mutalbe_dic];
            //-----------------------------------拆红包！！-------------------------------
                    
                    //拼接参数
                    NSMutableDictionary * params = [%c(NSMutableDictionary) dictionary];
                    [params setObject:@"0" forKey:@"agreeDuty"];
                    [params setObject:url_dic[@"channelid"] forKey:@"channelId"];
                    //根据msgWrap.m_nsFromUsr 判断是否是（群）0
                    [params setObject:@"0" forKey:@"inWay"];//群消息&私人消息
                    [params setObject:url_dic[@"msgtype"] forKey:@"msgType"];
                    [params setObject:m_c2cNativeUrl forKey:@"nativeUrl"];
                    [params setObject:url_dic[@"sendid"] forKey:@"sendId"];
                    
                    WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
                    
                    
                    //真正拆开红包的请求！
                    [RedEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:params];
                }else{
                }

    }else{
       
    }
   %orig;
  
}

-(void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2{
//  b  NSLog(@"%@\n%@ ---- %@\n%@",arg1,[arg1 class],arg2,[arg2 class]);//CMessageWrap
    %orig;
}

%end



@interface WCRedEnvelopesReceiveHomeView : UIView
{
    id m_delegate;
    NSDictionary *m_dicBaseInfo;//成员变量
}

@end

//手动点击红包时候调用的方法
//%hook WCRedEnvelopesReceiveHomeView
//- (void)OnOpenRedEnvelopes{
//    //获取成员变量不能通过self
//  NSDictionary *dict =  MSHookIvar<NSDictionary *>(self,"m_dicBaseInfo");
//    NSArray *arr = [dict allKeys];
//    for(int i = 0; i < arr.count; i++){
//        NSLog(@"%@:%@",arr[i],[dict objectForKey:arr[i]]);
//    }
//
//   id delegate =  MSHookIvar<NSDictionary *>(self,"m_delegate");
////    2020-05-27 16:51:34.940 WeChat[1608:125864] delegateClass:WCRedEnvelopesReceiveControlLogic
//    NSLog(@"delegateClass:%@",[delegate class]);
//
//}
//
//
//%end




%hook WCRedEnvelopesReceiveControlLogic
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes{
      NSLog(@"WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes是否自动抢红包%d",[WeChatRedEnvelopesParamQueue sharedQueue].isAuto);
    if([WeChatRedEnvelopesParamQueue sharedQueue].isAuto){
          //获取m_data
            WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
        //        CMessageWrap * msg = m_data.m_oSelectedMessageWrap;
        //        NSLog(@"WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes : %@",msg);
            
             NSString * m_c2cNativeUrl2 = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
            
        //    id url_dic [%c(WCBizUtil) dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
        //    NSLog(@"url_dic:%@:%@\n%@",url_dic,[url_dic class]);
            NSDictionary * url_dic = [%c(WCBizUtil) dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
                NSMutableDictionary * mutalbe_dic = [%c(NSMutableDictionary) dictionary];
                [mutalbe_dic setObject:@"1" forKey:@"msgType"];
                [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
                [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
                 CContactMgr * contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
                CContact* selfContact = [contactMgr getSelfContact];
                
                
                id displayName = [selfContact getContactDisplayName];
            //    NSLog(@"%@",[displayName class]);
                [mutalbe_dic setObject:displayName forKey:@"nickName"];
                [mutalbe_dic setObject:[selfContact m_nsHeadImgUrl] forKey:@"headImg"];
                CMessageWrap * msgWrap = [m_data m_oSelectedMessageWrap];
                if(msgWrap){
                    NSString * m_c2cNativeUrl3 = msgWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
                    [mutalbe_dic setObject:m_c2cNativeUrl3 forKey:@"nativeUrl"];
                }
               
                MMMsgLogicManager * logciMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(MMMsgLogicManager) class]];
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
            //    NSLog(@" %@",timingIdentifier);
                
                if(timingIdentifier.length)
                    [mutalbe_dic setObject:timingIdentifier forKey:@"timingIdentifier"];
                WCPayLogicMgr * payLogic = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCPayLogicMgr) class]];
                [payLogic setRealnameReportScene:(unsigned int)1003];
                NSDictionary * baseInfo2 = [m_data m_structDicRedEnvelopesBaseInfo];
                id subScript = [baseInfo2 objectForKeyedSubscript:@"agree_duty"];
                [payLogic checkHongbaoOpenLicense:subScript acceptCallback:^(){
                    
                    WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
                    NSLog(@"mutalbe_dic:%@",mutalbe_dic);
                    //真正开红包的代码
                    [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:mutalbe_dic];
             
                    
                }denyCallback:^(){
                }];
                
    }else{
        
    }
  
        
        %orig;
}

%end



/*

其他字段：
HongBaoRes * arg1 中
    cgiCmdid = 3 说明是没有抢过的红包
    cgiCmdid = 4 我抢到的红包
    cgiCmdid = 5 抢过了的红包
HongBaoRes * arg1 的 retText 中
    isSender ： 1  自己发的红包
    isSender ： 0  别人发的红包

    receiveStatus : 0 自己没有抢过
    receiveStatus : 2 自己抢过的红包



param{
    channelId = 1;
    headImg = "http://wx.qlogo.cn/mmhead/ver_1/RYfsVv65cTo7zBz8HpzPjSzNzMDvg6QfGgMILLZiaMUrjQTQIYrCfr2DXNfYM844SKnT4L5a2JNyibG4Zek2qP8IXQKVyg3fHc6vRBNeE4M1g/132";
    msgType = 1;
    nativeUrl = "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?msgtype=1&channelid=1&sendid=1000039401201901186030488218938&sendusername=hanzidandan1314&ver=6&sign=56e26d068b29189eb6ab80dd2c979b2228cc27fcb896333e9bff8c311c38b6e1fc636e76779b41027a101bc0a7c9d75d87433c3cf08425a9481e587198a96c7fe7abf8775d853270f09d3a96b767d373";
    nickName = "\U4fee\U5fc3";
    sendId = 1000039401201901186030488218938;
    timingIdentifier = A325C6B015DBEF426AD1D9419942CEDE;
}

 mutalbe_dic:{
    channelId = 1;
    headImg = "http://wx.qlogo.cn/mmhead/ver_1/RYfsVv65cTo7zBz8HpzPjSzNzMDvg6QfGgMILLZiaMUrjQTQIYrCfr2DXNfYM844SKnT4L5a2JNyibG4Zek2qP8IXQKVyg3fHc6vRBNeE4M1g/132";
    msgType = 1;
    nativeUrl = "wxpay://c2cbizmessagehandler/hongbao/receivehongbao?msgtype=1&channelid=1&sendid=1000039401201901186030488218938&sendusername=hanzidandan1314&ver=6&sign=56e26d068b29189eb6ab80dd2c979b2228cc27fcb896333e9bff8c311c38b6e1fc636e76779b41027a101bc0a7c9d75d87433c3cf08425a9481e587198a96c7fe7abf8775d853270f09d3a96b767d373";
    nickName = "\U4fee\U5fc3";
    sendId = 1000039401201901186030488218938;
    sessionUserName = "12043179270@chatroom";
    timingIdentifier = A325C6B015DBEF426AD1D9419942CEDE;
}
 */

%hook WCRedEnvelopesLogicMgr
/**回调
 拆开了红包。
 1、如果是没抢过的 ：cgiCmdid == 3  取出 timingIdentifier
 2、
 
 ？、抢红包。 拼接timingIdentifier 开抢！
*/
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(id)arg2{
    NSLog(@"OnWCToHongbaoCommonResponse是否自动抢红包%d",[WeChatRedEnvelopesParamQueue sharedQueue].isAuto);
    if([WeChatRedEnvelopesParamQueue sharedQueue].isAuto){
          NSLog(@"cgiCmdid == %d",arg1.cgiCmdid);
        //    for(int i = 0;i < arr.count ;i++){
        //        NSLog(@"%@:%@",arr[i],dict[arr[i]]);
        //    }
            //留个作业hbStatus 找出不同的数字意义！！
            if(nil != arg1 && nil != arg2 && arg1.cgiCmdid == 3){//我认为没有被开过！！
                NSError * err;
                   NSDictionary * dict = [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:(NSJSONReadingMutableContainers) error:&err];
                
                //取出timingIdentifier
                NSString * timingId = dict[@"timingIdentifier"];
                NSMutableDictionary * param = [[WeChatRedEnvelopesParamQueue sharedQueue] deQueue];

                if(param){//开始拼接参数 然后抢红包！！
                    [param setObject:timingId forKey:@"timingIdentifier"];
                    NSLog(@"param%@",param);
                    sleep(1);
                    //真正的抢红包请求！
                    WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
                    //真正开红包的代码
                    [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:param];
                    
                }
            }
            
    }else{
        
    }
  
    %orig;
}
%end


//safeSetObject 这个方法还原
//%hook NSMutableDictionary
//- (void)safeSetObject:(id)anObject forKey:(NSString *)aKey{
//    %orig;
//}

//%end


