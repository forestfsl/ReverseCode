@interface WCPayInfoItem
@property(retain, nonatomic) NSString *m_c2cNativeUrl;

@end

@interface  CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsFromUsr;//
@end

%hook CMessageMgr
-(void)MainThreadNotifyToExt:(id)arg1{//这个是可以在微信界面收到消息的时候就可以调用的办法
    %orig;
}

-(void)onNewSyncAddMessage:(CMessageWrap *)msgWrap{
      NSLog(@"是否是群消息:%@",msgWrap.m_nsFromUsr);
//        NSLog(@"%@\n%@",arg1,[arg1 class]);//CMessageWrap
        %orig;
}
