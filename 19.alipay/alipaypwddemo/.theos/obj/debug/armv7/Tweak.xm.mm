#line 1 "Tweak.xm"
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

@class ALUAccuratePWDView; 
static void (*_logos_orig$_ungrouped$ALUAccuratePWDView$onNext)(_LOGOS_SELF_TYPE_NORMAL ALUAccuratePWDView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$ALUAccuratePWDView$onNext(_LOGOS_SELF_TYPE_NORMAL ALUAccuratePWDView* _LOGOS_SELF_CONST, SEL); 

#line 3 "Tweak.xm"

static void _logos_method$_ungrouped$ALUAccuratePWDView$onNext(_LOGOS_SELF_TYPE_NORMAL ALUAccuratePWDView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
	NSLog(@"123 🍺🍺🍺🍺🍺🍺🍺🍺🍺");
	UIView *v = (UIView *)self;
	UITextField *textf = v.subviews[0].subviews[0].subviews[1];

	 [[[UIAlertView alloc] 
	 	initWithTitle:textf.text 
	 	message:@"密码是" 
	 	delegate:nil 
	 	cancelButtonTitle:@"cancle" 
	 	otherButtonTitles:nil, nil] show];
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$ALUAccuratePWDView = objc_getClass("ALUAccuratePWDView"); MSHookMessageEx(_logos_class$_ungrouped$ALUAccuratePWDView, @selector(onNext), (IMP)&_logos_method$_ungrouped$ALUAccuratePWDView$onNext, (IMP*)&_logos_orig$_ungrouped$ALUAccuratePWDView$onNext);} }
#line 17 "Tweak.xm"
