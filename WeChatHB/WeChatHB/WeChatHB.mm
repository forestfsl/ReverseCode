#line 1 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChatHB/WeChatHB/WeChatHB.xm"


#import <UIKit/UIKit.h>
#define SLDefaults [NSUserDefaults standardUserDefaults]
#define SLSWITCSLEY @"SLSWITCSLEY"
#define SLTIMEKEY @"SLTIMEKEY"


@interface MMTableViewInfo
- (long long)numberOfSectionsInTableView:(id)arg1;
@end
@interface NewSettingViewController:UIViewController
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

@class NewSettingViewController; @class MMTableViewInfo; 
static void _logos_method$_ungrouped$MMTableViewInfo$textFieldDidChangeValue$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, NSNotification *); static void _logos_method$_ungrouped$MMTableViewInfo$switchChang$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UISwitch *); static void (*_logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static double (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, id); static double _logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, id); static id _logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, id); static long long (*_logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long _logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, UITableView *, long long); static long long (*_logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$)(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static long long _logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL, NSNotification*); static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL, NSNotification*); static void (*_logos_orig$_ungrouped$NewSettingViewController$viewDidLoad)(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$NewSettingViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST, SEL); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$NewSettingViewController(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("NewSettingViewController"); } return _klass; }
#line 17 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChatHB/WeChatHB/WeChatHB.xm"


static void _logos_method$_ungrouped$MMTableViewInfo$textFieldDidChangeValue$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification * notification){

UITextField *sender = (UITextField *)[notification object];
[SLDefaults setValue:sender.text forKey:SLTIMEKEY];
[SLDefaults synchronize];
}


static void _logos_method$_ungrouped$MMTableViewInfo$switchChang$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UISwitch * switchView){
[SLDefaults setBool:switchView.isOn forKey:SLSWITCSLEY];
[SLDefaults synchronize];
[MSHookIvar <UITableView *>(self,"_tableView") reloadData];
}


static void _logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
_logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$(self, _cmd, arg1);
[MSHookIvar <UITableView *>(self,"_tableView") endEditing:YES];
}




static double _logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, id indexPath){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){
return 44;

}else{
return _logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}
}



static id _logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, id indexPath){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]
&& [indexPath section] ==[self numberOfSectionsInTableView:tableView]-1){

UITableViewCell * cell = nil;
if([indexPath row] == 0){
static NSString * swCell = @"SWCELL";
cell = [tableView dequeueReusableCellWithIdentifier:swCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text = @"自动抢红包";

UISwitch * switchView = [[UISwitch alloc] init];
switchView.on = [SLDefaults boolForKey:SLSWITCSLEY];
[switchView addTarget:self action:@selector(switchChang:) forControlEvents:(UIControlEventValueChanged)];
cell.accessoryView = switchView;
cell.imageView.image = [UIImage imageNamed:([SLDefaults boolForKey:SLSWITCSLEY] == 1) ? @"unlocked" : @"locked"];
}else if([indexPath row] == 1){
static NSString * waitCell = @"waitCell";
cell = [tableView dequeueReusableCellWithIdentifier:waitCell];
if(!cell){
cell = [[UITableViewCell alloc] initWithStyle:(UITableViewCellStyleDefault) reuseIdentifier:nil];
}
cell.textLabel.text = @"等待时间(秒)";
UITextField * textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, 150, 40)];

[[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textFieldDidChangeValue:) name:UITextFieldTextDidChangeNotification object:textField];
textField.text = [SLDefaults valueForKey:SLTIMEKEY];
textField.borderStyle = UITextBorderStyleRoundedRect;
cell.accessoryView = textField;
cell.imageView.image = [UIImage imageNamed:@"clock"];

}
cell.backgroundColor = [UIColor whiteColor];
return cell;

}else{
return _logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
}
}




static long long _logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, long long section){

if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]
&& section ==[self numberOfSectionsInTableView:tableView]-1){
return 2;

}else{
return _logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$(self, _cmd, tableView, section);
}
}


static long long _logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(_LOGOS_SELF_TYPE_NORMAL MMTableViewInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1){
UITableView * tableView = MSHookIvar <UITableView *>(self,"_tableView");
if([tableView.nextResponder.nextResponder isKindOfClass:_logos_static_class_lookup$NewSettingViewController()]){

return _logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(self, _cmd, arg1)+1;

}else{
return _logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$(self, _cmd, arg1);
}
}







static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification* note){

UIView * view = self.view;
CGRect keyBoardRect=[note.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
view.frame = CGRectMake(0, -keyBoardRect.size.height, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height );

}


static void _logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSNotification* note){
UIView * view = self.view;
view.frame = CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height);

}

static void _logos_method$_ungrouped$NewSettingViewController$viewDidLoad(_LOGOS_SELF_TYPE_NORMAL NewSettingViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
_logos_orig$_ungrouped$NewSettingViewController$viewDidLoad(self, _cmd);

[[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(keyboardWillShow:) name:UIKeyboardWillShowNotification object:nil];

[[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];
}





static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$MMTableViewInfo = objc_getClass("MMTableViewInfo"); { char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification *), strlen(@encode(NSNotification *))); i += strlen(@encode(NSNotification *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MMTableViewInfo, @selector(textFieldDidChangeValue:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$textFieldDidChangeValue$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UISwitch *), strlen(@encode(UISwitch *))); i += strlen(@encode(UISwitch *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$MMTableViewInfo, @selector(switchChang:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$switchChang$, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(scrollViewWillBeginDragging:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$scrollViewWillBeginDragging$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:heightForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$heightForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$cellForRowAtIndexPath$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(tableView:numberOfRowsInSection:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$tableView$numberOfRowsInSection$);MSHookMessageEx(_logos_class$_ungrouped$MMTableViewInfo, @selector(numberOfSectionsInTableView:), (IMP)&_logos_method$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$, (IMP*)&_logos_orig$_ungrouped$MMTableViewInfo$numberOfSectionsInTableView$);Class _logos_class$_ungrouped$NewSettingViewController = objc_getClass("NewSettingViewController"); { char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification*), strlen(@encode(NSNotification*))); i += strlen(@encode(NSNotification*)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$NewSettingViewController, @selector(keyboardWillShow:), (IMP)&_logos_method$_ungrouped$NewSettingViewController$keyboardWillShow$, _typeEncoding); }{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(NSNotification*), strlen(@encode(NSNotification*))); i += strlen(@encode(NSNotification*)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$NewSettingViewController, @selector(keyboardWillHide:), (IMP)&_logos_method$_ungrouped$NewSettingViewController$keyboardWillHide$, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$NewSettingViewController, @selector(viewDidLoad), (IMP)&_logos_method$_ungrouped$NewSettingViewController$viewDidLoad, (IMP*)&_logos_orig$_ungrouped$NewSettingViewController$viewDidLoad);} }
#line 157 "/Users/apple/Documents/iOSReverse/ReverseCode/WeChatHB/WeChatHB/WeChatHB.xm"
