//[MethodTrace] ----[<BaseMsgContentViewController: 0x14cabac00> addMessageNode:{m_uiMesLocalID=1, m_ui64MesSvrID=915885649581078371, m_nsFromUsr=wxi*421~19, m_nsToUsr=wxi*o22~19, m_uiStatus=4, type=1, createTime=1590405315 msgSource="<msgsource><sequence_id>629080637</sequence_id></msgsource>"}  layout:0 addMoreMsg:0 ]
%hook BaseMsgContentViewController
-(void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3{
    %orig;
}

%end

//@interface WCPayInfoItem
//@property(retain, nonatomic) NSString *m_c2cNativeUrl;
//
//@end
//
//@interface  CMessageWrap
//@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
//@property(nonatomic) unsigned int m_uiMessageType;
//@property(retain, nonatomic) NSString *m_nsFromUsr;//
//@end
//
//%hook CMessageMgr
//-(void)MainThreadNotifyToExt:(id)arg1{//这个是可以在微信界面收到消息的时候就可以调用的办法
//    %orig;
//}
//
//-(void)onNewSyncAddMessage:(CMessageWrap *)msgWrap{
//      NSLog(@"是否是群消息:%@",msgWrap.m_nsFromUsr);
////        NSLog(@"%@\n%@",arg1,[arg1 class]);//CMessageWrap
//        %orig;
//}
