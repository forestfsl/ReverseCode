//
//  TestInjectCode.m
//  TestHook
//
//  Created by apple on 2020/4/24.
//  Copyright © 2020 apple. All rights reserved.
//

#import "TestInjectCode.h"
#import <objc/runtime.h>

@implementation TestInjectCode
+(void)load
{
    NSLog(@"InjectCode+load");
    Method btn1 = class_getInstanceMethod(objc_getClass("ViewController"), @selector(click:));
     Method myBtn = class_getInstanceMethod(self, @selector(myBtn));
    method_exchangeImplementations(myBtn, btn1);
    
    
}

-(void)myBtn{
    NSLog(@"HOOK住了！！");
}

@end
