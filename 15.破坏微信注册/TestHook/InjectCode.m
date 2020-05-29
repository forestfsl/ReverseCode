//
//  InjectCode.m
//  TestHook
//
//  Created by fengsl on 2020/4/26.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "InjectCode.h"
#import <objc/runtime.h>

@implementation InjectCode

//+(void)load
//{
//    Method oldMethod = class_getInstanceMethod(objc_getClass("WCAccountLoginControlLogic"), @selector(onFirstViewRegester));
//
//    Method newMethod = class_getInstanceMethod(self, @selector(test));
//
//    method_exchangeImplementations(oldMethod, newMethod);
//}
//
//-(void)test{
//    NSLog(@"检测到状态异常！不能注册！！");
//}


//错误做法 因为WCAccountMainLoginViewController 没有这个方法
//+(void)load
//{
//    //WCAccountMainLoginViewController onNext
//    Method onNext = class_getInstanceMethod(objc_getClass("WCAccountMainLoginViewController"), @selector(onNext));
//    Method my_next = class_getInstanceMethod(self, @selector(my_next));
//
//    method_exchangeImplementations(onNext, my_next);
//}
//
////id self , SEL _cmd
//-(void)my_next{
//
//    NSString * pwd = [[[self valueForKey:@"_textFieldUserPwdItem"]valueForKey:@"m_textField"] performSelector:@selector(text)];
//    NSLog(@"密码是！%@",pwd);//破坏！
//    //self:当前方法的调用者！
//    [self my_next];
//}




//奔溃解决方法1
//+(void)load{
//    //1.拿到原始的Method
//    Method onNext = class_getInstanceMethod(objc_getClass("WCAccountMainLoginViewController"), @selector(onNext));
//    //2.添加新的方法
//    BOOL didAddMethod = class_addMethod(objc_getClass("WCAccountMainLoginViewController"), @selector(new_onNext), my_next, "v@:");
//    method_exchangeImplementations(onNext, class_getInstanceMethod(objc_getClass("WCAccountMainLoginViewController"), @selector(new_onNext)));
//}
////id self , SEL _cmd
//void my_next(id self,SEL _cmd){
//
//    NSString * pwd = [[[self valueForKey:@"_textFieldUserPwdItem"]valueForKey:@"m_textField"] performSelector:@selector(text)];
//    NSLog(@"密码是！%@",pwd);//破坏！
//    //调用原来的方法
//    [self performSelector:@selector(new_onNext)];
//}

//解决方法2
+ (void)load{
    //GET & SET
    Method onNext = class_getInstanceMethod(objc_getClass("WCAccountMainLoginViewController"), sel_registerName("onNext"));
    //1.保存原始的IMP
    old_onNext = method_getImplementation(onNext);
    //2.SET
    method_setImplementation(onNext, (IMP)my_next);
}

IMP (*old_onNext)(id self,SEL _cmd);

void my_next(id self,SEL _cmd){
    NSString *pwd = [[[self valueForKey:@"_textFieldUserPwdItem"] valueForKey:"m_textField"] performSelector:@selector(text)];
    NSLog(@"密码是%@",pwd);//拿到密码
    //调用原来的方法
    old_onNext(self,_cmd);
}

@end
