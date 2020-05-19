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


%hook WCRedEnvelopesReceiveControlLogic
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes{
    
    WCRedEnvelopesControlData * m_data = MSHookIvar<WCRedEnvelopesControlData *>(self,"m_data");
    
    NSString * m_c2cNativeUrl = m_data.m_oSelectedMessageWrap.m_oWCPayInfoItem.m_c2cNativeUrl;
    
     NSString * m_c2cNativeUrl2 = [m_c2cNativeUrl substringFromIndex:@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?".length];
    NSLog(@"m_c2cNativeUrl:%@----------m_c2cNativeUrl2:%@",m_c2cNativeUrl,m_c2cNativeUrl2);
    
    NSDictionary * url_dic = [%c(WCBizUtil) dictionaryWithDecodedComponets:m_c2cNativeUrl2 separator:@"&"];
  
    NSMutableDictionary * mutalbe_dic = [%c(NSMutableDictionary) dictionary];
    
    [mutalbe_dic setObject:@"1" forKey:@"msgType"];
    [mutalbe_dic setObject:url_dic[@"sendid"] forKey:@"sendId"];
    [mutalbe_dic setObject:url_dic[@"channelid"] forKey:@"channelId"];
   
    
     CContactMgr * contactMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
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
    if(timingIdentifier.length)
        [mutalbe_dic setObject:timingIdentifier forKey:@"timingIdentifier"];
    WCPayLogicMgr * payLogic = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCPayLogicMgr) class]];
    [payLogic setRealnameReportScene:(unsigned int)1003];
    NSDictionary * baseInfo2 = [m_data m_structDicRedEnvelopesBaseInfo];
    id subScript = [baseInfo2 objectForKeyedSubscript:@"agree_duty"];
    [payLogic checkHongbaoOpenLicense:subScript acceptCallback:^(){
        
        WCRedEnvelopesLogicMgr * RedEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
        
        [RedEnvelopesLogicMgr OpenRedEnvelopesRequest:mutalbe_dic];
 
        
    }denyCallback:^(){
    }];

}
%end


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
-(void)onNewSyncAddMessage:(id)arg1{
    NSLog(@"%@\n%@",arg1,[arg1 class]);//CMessageWrap
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
