#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/BadgeTweak/BadgeTweak/BadgeTweak.xm"


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

@class SBIconParallaxBadgeView; 
static SBIconParallaxBadgeView* (*_logos_orig$_ungrouped$SBIconParallaxBadgeView$init)(_LOGOS_SELF_TYPE_INIT SBIconParallaxBadgeView*, SEL) _LOGOS_RETURN_RETAINED; static SBIconParallaxBadgeView* _logos_method$_ungrouped$SBIconParallaxBadgeView$init(_LOGOS_SELF_TYPE_INIT SBIconParallaxBadgeView*, SEL) _LOGOS_RETURN_RETAINED; 

#line 9 "/Users/apple/Documents/iOSReverse/ReverseCode/BadgeTweak/BadgeTweak/BadgeTweak.xm"


static SBIconParallaxBadgeView* _logos_method$_ungrouped$SBIconParallaxBadgeView$init(_LOGOS_SELF_TYPE_INIT SBIconParallaxBadgeView* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return nil;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$SBIconParallaxBadgeView = objc_getClass("SBIconParallaxBadgeView"); MSHookMessageEx(_logos_class$_ungrouped$SBIconParallaxBadgeView, @selector(init), (IMP)&_logos_method$_ungrouped$SBIconParallaxBadgeView$init, (IMP*)&_logos_orig$_ungrouped$SBIconParallaxBadgeView$init);} }
#line 16 "/Users/apple/Documents/iOSReverse/ReverseCode/BadgeTweak/BadgeTweak/BadgeTweak.xm"
