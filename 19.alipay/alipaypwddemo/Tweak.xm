#import <UIKit/UIKit.h>

%hook ALUAccuratePWDView
- (void)onNext{
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
%end