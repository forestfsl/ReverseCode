#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"


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

@class BaseMsgContentViewController; 
static void (*_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$)(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST, SEL, id, _Bool, _Bool); 

#line 2 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"

static void _logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(_LOGOS_SELF_TYPE_NORMAL BaseMsgContentViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, _Bool arg2, _Bool arg3){
    _logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$(self, _cmd, arg1, arg2, arg3);
}
























static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$BaseMsgContentViewController = objc_getClass("BaseMsgContentViewController"); MSHookMessageEx(_logos_class$_ungrouped$BaseMsgContentViewController, @selector(addMessageNode:layout:addMoreMsg:), (IMP)&_logos_method$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$, (IMP*)&_logos_orig$_ungrouped$BaseMsgContentViewController$addMessageNode$layout$addMoreMsg$);} }
#line 30 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChat7.0.9/WeChat7.0.9Dylib/Logos/WeChat7_0_9Dylib.xm"
