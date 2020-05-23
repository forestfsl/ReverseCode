#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/26.防护/SysctlAndPtrace/monkeyDev1/MonkeyDevDemoDylib/Logos/MonkeyDevDemoDylib.xm"


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

@class ViewController; 
static void (*_logos_orig$_ungrouped$ViewController$click1$)(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$ViewController$click1$(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST, SEL, id); 

#line 2 "/Users/apple/Documents/iOSReverse/ReverseCode/26.防护/SysctlAndPtrace/monkeyDev1/MonkeyDevDemoDylib/Logos/MonkeyDevDemoDylib.xm"



static void _logos_method$_ungrouped$ViewController$click1$(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id sender) {
    NSLog(@"按钮1");
    
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$ViewController = objc_getClass("ViewController"); MSHookMessageEx(_logos_class$_ungrouped$ViewController, @selector(click1:), (IMP)&_logos_method$_ungrouped$ViewController$click1$, (IMP*)&_logos_orig$_ungrouped$ViewController$click1$);} }
#line 10 "/Users/apple/Documents/iOSReverse/ReverseCode/26.防护/SysctlAndPtrace/monkeyDev1/MonkeyDevDemoDylib/Logos/MonkeyDevDemoDylib.xm"
