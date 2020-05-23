#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"
@interface WCPayInfoItem
@property(retain, nonatomic) NSString *m_c2cNativeUrl;

@end

@interface  CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsFromUsr;
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

@class CMessageMgr; 
static void (*_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, CMessageWrap *); 

#line 12 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"

static void _logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
    _logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$(self, _cmd, arg1);
}

static void _logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, CMessageWrap * msgWrap){
      NSLog(@"是否是群消息:%@",msgWrap.m_nsFromUsr);

        _logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$(self, _cmd, msgWrap);
}
static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(MainThreadNotifyToExt:), (IMP)&_logos_method$_ungrouped$CMessageMgr$MainThreadNotifyToExt$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$MainThreadNotifyToExt$);MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(onNewSyncAddMessage:), (IMP)&_logos_method$_ungrouped$CMessageMgr$onNewSyncAddMessage$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$onNewSyncAddMessage$);} }
#line 22 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"
