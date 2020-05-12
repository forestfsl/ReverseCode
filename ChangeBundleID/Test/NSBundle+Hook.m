//
//  NSBundle+Hook.m
//  Test
//
//  Created by fengsl on 2020/5/12.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "NSBundle+Hook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@implementation NSBundle (Hook)

+ (void)load{
//    // 获取原始的方法
//    Method originMethod = class_getClassMethod([UIImage class], @selector(imageNamed:));
//    // 获取新的方法
//    Method newMethod = class_getClassMethod([UIImage class], @selector(customImageNamed:));
//    // 交换方法
//    method_exchangeImplementations(originMethod, newMethod);
    
    //尝试1失效
//    Method originMethod = class_getClassMethod([NSBundle class], @selector(bundleIdentifier));
//    // 获取新的方法
//    Method newMethod = class_getClassMethod([NSBundle class], @selector(custombundleIdentifier));
//    // 交换方法
//    method_exchangeImplementations(originMethod, newMethod);
    
    //测试2，只能返回正确的
//    static dispatch_once_t once_token;
//    dispatch_once(&once_token,  ^{
//        Method originalMethod = class_getClassMethod(self, @selector(mainBundle));
//        Method extendedMethod = class_getClassMethod(self, @selector(bundleForTestTarget));
//        //swizzling mainBundle method with our own custom method
//        method_exchangeImplementations(originalMethod, extendedMethod);
//    });
    
    //测试3返回成功
//    Method originalMethod = class_getInstanceMethod([NSBundle class], @selector(bundleIdentifierS));
//    Method swizzledMethod = class_getInstanceMethod([NSBundle class], @selector(bundleIdentifier));
//    method_exchangeImplementations(originalMethod, swizzledMethod);

    
        Method originalMethod = class_getInstanceMethod([NSBundle class], @selector(infoDictionaryS1));
        Method swizzledMethod = class_getInstanceMethod([NSBundle class], @selector(infoDictionary));
        method_exchangeImplementations(originalMethod, swizzledMethod);
            
    

}


- (NSDictionary*)infoDictionaryS1{
    
    NSMutableDictionary *dicc = [self infoDictionaryS1].mutableCopy;
    [dicc setObject:@"om.forest.Test1" forKey:@"CFBundleIdentifier"];
    return dicc;
}

- (NSString *)bundleIdentifierS{
    return @"com.forest.Test1";
}

//method for returning app Test target
+(NSBundle *)bundleForTestTarget {
    NSBundle * bundle = [NSBundle bundleWithIdentifier:@"com.forest.Test"];

    return bundle;
}

- (void)custombundleIdentifier{
    NSLog(@"hook 成功");
}

//+(UIImage *)customImageNamed:(NSString *)name {
//    NSString *skinFolderPath = [NSString stringWithFormat:@"%@",[NSBundle mainBundle].resourcePath];
//
//    NSString *path = nil;
//    if([name hasSuffix:@".png"]) {
//        path = [NSString stringWithFormat:@"%@/%@",skinFolderPath,name];
//    } else {
//        path = [NSString stringWithFormat:@"%@/%@.png",skinFolderPath,name];
//    }
//    UIImage *image = [UIImage imageWithContentsOfFile:path];
//    if(image == nil) {
//        /*==================================*/
//        // 由于方法交换了,这里不能用  image =[UIImage imageNamed:name];
//        /*==================================*/
//        image = [UIImage customImageNamed:name];
//    }
//    return image;
//}

@end
