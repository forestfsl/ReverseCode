#import<UIKit/UIKit.h>
#import "WeChatRedEnvelopesParamQueue.h"

@interface WCRedEnvelopesReceiveHomeView :UIView
{
    id  m_delegate;
    NSDictionary *m_dicBaseInfo;
}


@end

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
@property(retain, nonatomic) NSString *m_nsFromUsr;//
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

//通过汇编分析WCRedEnvelopesReceiveHomeView的WCRedEnvelopesReceiveHomeView->WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes

%hook WCRedEnvelopesReceiveControlLogic
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes{
    
    WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
    
//    CMessageWrap * msg = m_data.m_oSelectedMessageWrap;
//    NSLog(@"WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes : %@",msg);
    
    
    NSString * m_c2cNativeUrl = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
     NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
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
    
    
    %orig;
}
%end


%hook WCRedEnvelopesLogicMgr
/**回调
 拆开了红包。
 1、如果是没抢过的 ：cgiCmdid == 3  取出 timingIdentifier
 2、
 cgiCmdid = 3 说明是没有抢过的红包
 cgiCmdid = 4 我抢到的红包
 cgiCmdid = 5 抢过了的红包
 
 isSender = 1: 自己发的红包
 isSender = 0:别人发的红包
 
 ？、抢红包。 拼接timingIdentifier 开抢！
*/
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(id)arg2{
    
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
    
    %orig;
}
%end


//%hook WCRedEnvelopesLogicMgr
////这个目的是为了获取这个参数传递的是啥
//- (void)OpenRedEnvelopesRequest:(id)arg1{
//    NSLog(@"%@\n",[arg1 class]);
//}
//
//%end

%hook WCRedEnvelopesReceiveHomeView
- (void)OnOpenRedEnvelopes{
//    NSDictionary * dict = MSHookIvar<NSDictionary *>(self,"m_dicBaseInfo");
//    NSArray * arr = [dict allKeys];
//    for(int i = 0; i < arr.count ;i++){
//        NSLog(@"%@ : %@",arr[i],[dict objectForKey:arr[i]]);
//    }
//
//    //拿到代理
//    id delegate = MSHookIvar<id>(self,"m_delegate");
   
    %orig;
}

%end


%hook BaseMsgContentViewController

/*
 (lldb) bt
 * thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
   * frame #0: 0x000000010851014c libWeChatDemoDylib.dylib`_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(self=0x000000012d1a4a00, _cmd="addMessageNode:layout:addMoreMsg:", arg1=0x000000012e910880, arg2=true, arg3=false) at WeChatDemoDylib.xm:5:5
     frame #1: 0x00000001025a6160 WeChat`___lldb_unnamed_symbol145752$$WeChat + 520
     frame #2: 0x000000010258d238 WeChat`___lldb_unnamed_symbol145396$$WeChat + 360
     frame #3: 0x000000010673f40c MMCommon`_callExtension + 476
     frame #4: 0x0000000102fa7a58 WeChat`___lldb_unnamed_symbol184845$$WeChat + 560
     frame #5: 0x00000001085101f8 libWeChatDemoDylib.dylib`_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self=0x000000012e535ab0, _cmd="MainThreadNotifyToExt:", arg1=3 key/value pairs) at WeChatDemoDylib.xm:14:5
     frame #6: 0x0000000186ff7e60 Foundation`<redacted> + 340
     frame #7: 0x000000018606c544 CoreFoundation`<redacted> + 24
     frame #8: 0x000000018606bfd8 CoreFoundation`<redacted> + 540
     frame #9: 0x0000000186069cd8 CoreFoundation`<redacted> + 724
     frame #10: 0x0000000185f98ca0 CoreFoundation`CFRunLoopRunSpecific + 384
     frame #11: 0x00000001911d4088 GraphicsServices`GSEventRunModal + 180
     frame #12: 0x000000018b6b0ffc UIKit`UIApplicationMain + 204
     frame #13: 0x00000001001c1e74 WeChat`___lldb_unnamed_symbol5967$$WeChat + 508
     frame #14: 0x000000019b4b68b8 libdyld.dylib`<redacted> + 4
 断点进来发现没有符号表，这个时候我们需要恢复符号表
 渠道restore-symbol的目录中，然后执行指令
 ➜  restore-symbol git:(master) ✗ ./restore-symbol WeChat -o WeChatn
 =========== Start =============
 Scan OC method in mach-o-file.
 Scan OC method finish.
 =========== Finish ==========
 打包重新安装zip -ry WeChat.ipa Payload
 
 这个时候再重新运行程序,然后发送消息
 (lldb) bt
 * thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 1.1
 * frame #0: 0x0000000108f6c104 libWeChatDemoDylib.dylib`_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(self="wxid_16qadc6tls8421", _cmd="-\xffffff99\xffffff95\x04\xffffffa1\xffffffa1", arg1=0x000000014f29f560, arg2=false, arg3=false) at WeChatDemoDylib.xm:61
   frame #1: 0x000000010260e160 WeChat`-[BaseMsgContentLogicController DidAddMsg:] + 520
   frame #2: 0x00000001025f5238 WeChat`-[BaseMsgContentLogicController OnAddMsg:MsgWrap:] + 360
   frame #3: 0x000000010715b40c MMCommon`_callExtension + 476
   frame #4: 0x000000010300fa58 WeChat`-[CMessageMgr MainThreadNotifyToExt:] + 560
   frame #5: 0x0000000108f6c1f8 libWeChatDemoDylib.dylib`_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self=0x000000014ef270c0, _cmd="MainThreadNotifyToExt:", arg1=3 key/value pairs) at WeChatDemoDylib.xm:71:5
   frame #6: 0x0000000186ff7e60 Foundation`<redacted> + 340
   frame #7: 0x000000018606c544 CoreFoundation`<redacted> + 24
   frame #8: 0x000000018606bfd8 CoreFoundation`<redacted> + 540
   frame #9: 0x0000000186069cd8 CoreFoundation`<redacted> + 724
   frame #10: 0x0000000185f98ca0 CoreFoundation`CFRunLoopRunSpecific + 384
   frame #11: 0x00000001911d4088 GraphicsServices`GSEventRunModal + 180
   frame #12: 0x000000018b6b0ffc UIKit`UIApplicationMain + 204
   frame #13: 0x0000000100229e74 WeChat`___lldb_unnamed_symbol1286$$WeChat + 508
   frame #14: 0x000000019b4b68b8 libdyld.dylib`<redacted> + 4
 */

- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3 {
    %orig;
    
}

%end


/*
 (lldb) bt
 * thread #1, queue = 'com.apple.main-thread', stop reason = breakpoint 3.1
   * frame #0: 0x0000000108c84034 libWeChatDemoDylib.dylib`_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self=0x0000000137e4a5e0, _cmd="XTUM", arg1=0x000000018c0398c0) at WeChatDemoDylib.xm:60
     frame #1: 0x0000000186ff7e60 Foundation`<redacted> + 340
     frame #2: 0x000000018606c544 CoreFoundation`<redacted> + 24
     frame #3: 0x000000018606bfd8 CoreFoundation`<redacted> + 540
     frame #4: 0x0000000186069cd8 CoreFoundation`<redacted> + 724
     frame #5: 0x0000000185f98ca0 CoreFoundation`CFRunLoopRunSpecific + 384
     frame #6: 0x00000001911d4088 GraphicsServices`GSEventRunModal + 180
     frame #7: 0x000000018b6b0ffc UIKit`UIApplicationMain + 204
     frame #8: 0x00000001001dde74 WeChat`___lldb_unnamed_symbol1286$$WeChat + 508
     frame #9: 0x000000019b4b68b8 libdyld.dylib`<redacted> + 4
 */
%hook CMessageMgr
-(void)MainThreadNotifyToExt:(id)arg1{//这个是可以在微信界面收到消息的时候就可以调用的办法
    %orig;
}
/*
(id) arg1 = 0x000000018c0398c0
(lldb) register read x2
      x2 = 0x0000000141c9a000
(lldb) po 0x0000000141c9a000
{
    1 = 1;
    2 = "wxid_16qadc6tls8421";
    3 = "{m_uiMesLocalID=4, m_ui64MesSvrID=5430821553383793618, m_nsFromUsr=wxi*421~19, m_nsToUsr=wxi*o22~19, m_uiStatus=3, type=1, msgSource=\"<msgsource><sequence_id>629080529</sequence_id></msgsource>\"} ";
}
 
 这个方法调用多次，如果在这里写红包的插件，估计要多次调试

 */
//下面这个方法就是收到消息就调用一次，非常好，怎么找到的呢，在MDConfig 中的class——list中输入CMessageMgr，打印获取的
/*
 打开微信，进入微信红包界面查看当前视图
 cy# UIApp.keyWindow.recursiveDescription().toString()
 通过寻找发送人的名字，例如forest发送红包给lin，那么就搜索forest所在的label，然后进行一步步调试
 cy# #0x1498ae900.text = @"linlin"
 cy# #0x1498aeff0.text = @"songlin"
 cy# #0x1498aeff0.nextResponder()
 #"<UIImageView: 0x14913c850; frame = (32 53; 311 515); autoresize = LM+RM+TM+BM; layer = <CALayer: 0x14987a300>>"
 
 cy# #0x14913c850.subviews()
 @[#"<UIView: 0x1499797d0; frame = (0 0; 311 515); layer = <CALayer: 0x14994e090>>",#"<UIImageView: 0x149979940; frame = (0 0; 311 515); clipsToBounds = YES; opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x149926030>>",#"<UIImageView: 0x1498b7f40; frame = (0 0; 311 420); opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x1498a8f90>>",#"<MMHeadImageView: 0x14997a580; frame = (131.5 68; 48 48); clipsToBounds = YES; layer = <CALayer: 0x149933540>>",#"<MMUILabel: 0x1498ae900; baseClass = UILabel; frame = (15 126; 281 21); text = 'linlin'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x1495cead0>>",#"<MMUILabel: 0x1498aeff0; baseClass = UILabel; frame = (25 159; 261 31); text = 'songlin'; userInteractionEnabled = NO; layer = <_UILabelLayer: 0x1495dd580>>",#"<UIButton: 0x14994c1e0; frame = (0 0; 311 515); opaque = NO; layer = <CALayer: 0x1499688f0>>",#"<UIButton: 0x14997caf0; frame = (102.5 357; 106 106); opaque = NO; layer = <CALayer: 0x14996d0b0>>",#"<UIImageView: 0x149996dd0; frame = (102.5 357; 106 106); hidden = YES; opaque = NO; userInteractionEnabled = NO; layer = <CALayer: 0x1499765a0>>"]
 
 cy# #0x14997caf0.hidden = YES
 true
 cy# #0x14997caf0.hidden = NO
 false
 
 发现红包不见了，那么这个就是红包的按钮
 cy# #0x14997caf0.allTargets()
 [NSSet setWithArray:@[#"<WCRedEnvelopesReceiveHomeView: 0x1498a3b80; frame = (0 0; 375 667); clipsToBounds = YES; autoresize = W+H; layer = <CALayer: 0x149852f70>>"]]]
 cy# #0x14997caf0.allControlEvents()
 cy# [#0x14997caf0 actionsForTarget:#0x1498a3b80 forControlEvent:64]
 @["OnOpenRedEnvelopes"]
 
 cy#[#0x1498a3b80 OnOpenRedEnvelopes] 这个时候自动点击红包成功
 
 然后用ida分析二进制文件
 */
-(void)onNewSyncAddMessage:(CMessageWrap *)msgWrap{
//    NSLog(@"是否是群消息:%@",msgWrap.m_nsFromUsr);
//    NSLog(@"%@\n%@",arg1,[arg1 class]);//CMessageWrap
//    %orig;
    
     //取出url
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
             NSLog(@"红包消息%d",msgWrap.m_uiMessageType);
        }else{
            NSLog(@"其他消息%d",msgWrap.m_uiMessageType);
        }
        %orig;
    
}



/*
(lldb) po 0x0000000000000001
1

(lldb) register read x1
      x1 = 0x0000000108ef755a  "onNewSyncAddMessage:"
(lldb) register read x2
      x2 = 0x000000013f3c7be0
(lldb) po 0x000000013f3c7be0
{m_uiMesLocalID=6, m_ui64MesSvrID=4732814467424583981, m_nsFromUsr=wxi*421~19, m_nsToUsr=wxi*o22~19, m_uiStatus=3, type=49, msgSource="<msgsource><sequence_id>629080531</sequence_id>
    <pushkey />
</msgsource>
"}
 */
%end



%hook BaseMsgContentLogicController
- (void)DidAddMsg:(id)arg1{
    %orig;
}
%end

%hook RoomContentLogicController
- (void)DidAddMsg:(id)arg1{
    %orig;
}

%end


//上面调用setObject，如果交换了方法，断点应该会进入这里

%hook NSMutableDictionary

- (void)safeSetObject:(id)anObject forKey:(NSString *)key{
    %orig;
}
