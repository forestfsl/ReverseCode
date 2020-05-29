#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/22.越狱防护/BadgeTweak/BadgeTweak/BadgeTweak.xm"


#if TARGET_OS_SIMULATOR
#error Do not support the simulator, please use the real iPhone Device.
#endif

#import <UIKit/UIKit.h>


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
static void (*_logos_orig$_ungrouped$ViewController$touchesBegan$withEvent$)(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST, SEL, NSSet<UITouch *> *, UIEvent *); static void _logos_method$_ungrouped$ViewController$touchesBegan$withEvent$(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST, SEL, NSSet<UITouch *> *, UIEvent *); 

#line 9 "/Users/apple/Documents/iOSReverse/ReverseCode/22.越狱防护/BadgeTweak/BadgeTweak/BadgeTweak.xm"



static void _logos_method$_ungrouped$ViewController$touchesBegan$withEvent$(_LOGOS_SELF_TYPE_NORMAL ViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSSet<UITouch *> * touches, UIEvent * event) {
    NSLog(@"和平相处");
}



static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$ViewController = objc_getClass("ViewController"); MSHookMessageEx(_logos_class$_ungrouped$ViewController, @selector(touchesBegan:withEvent:), (IMP)&_logos_method$_ungrouped$ViewController$touchesBegan$withEvent$, (IMP*)&_logos_orig$_ungrouped$ViewController$touchesBegan$withEvent$);} }
#line 18 "/Users/apple/Documents/iOSReverse/ReverseCode/22.越狱防护/BadgeTweak/BadgeTweak/BadgeTweak.xm"
