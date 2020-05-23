


%hook BaseMsgContentViewController

//收到消息会调用！！而且拥有消息类型的参数！！
- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3 {
    
    %log; %orig;
    
    
}
%end
