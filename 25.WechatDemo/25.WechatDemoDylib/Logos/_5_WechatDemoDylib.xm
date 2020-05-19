%hook BaseMsgContentViewController

- (void)addMessageNode:(id)arg1 layout:(_Bool)arg2 addMoreMsg:(_Bool)arg3 {
    %orig;
    
}

%end


%hook CMessageMgr
-(void)MainThreadNotifyToExt:(id)arg1{
    %orig;
}

-(void)onNewSyncAddMessage:(id)arg1{
    NSLog(@"%@\n%@",arg1,[arg1 class]);
    %orig;
}
%end

