//
//  NSURL+HookURL.m
//  MethodSwizzle
//
//  Created by fengsl on 2020/4/26.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "NSURL+HookURL.h"
#import <objc/runtime.h>

@implementation NSURL (HookURL)
+(void)load
{
    Method URLWithStr = class_getClassMethod(self, @selector(URLWithString:));
    
    Method HKURL = class_getClassMethod(self, @selector(HKURLWithStr:));
    
    //交换
    method_exchangeImplementations(URLWithStr, HKURL);
}

+(instancetype)HKURLWithStr:(NSString *)str{
    //调用系统原来的方法
    NSURL * url = [NSURL HKURLWithStr:str];
    if (url == nil) {
        str = [str stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    }
    url = [NSURL HKURLWithStr:str];
    
    return url;
}

@end
