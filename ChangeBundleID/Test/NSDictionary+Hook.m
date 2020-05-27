//
//  NSDictionary+Hook.m
//  Test
//
//  Created by fengsl on 2020/5/12.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "NSDictionary+Hook.h"

#import <UIKit/UIKit.h>
#import <objc/runtime.h>


@implementation NSDictionary (Hook)

+ (void)load {
//    //赋值时安全保护
//    Method fromMethod=class_getInstanceMethod(objc_getClass("__NSPlaceholderDictionary"),@selector(initWithObjects:forKeys:count:));
//    Method toMethod =class_getInstanceMethod(objc_getClass("__NSPlaceholderDictionary"),@selector(em_initWithObjects:forKeys:count:));
//    method_exchangeImplementations(fromMethod, toMethod);
//
////可变字典添加时安全保护
//    fromMethod =class_getInstanceMethod(objc_getClass("__NSDictionaryM"),@selector(setObject:forKey:));
//    toMethod =class_getInstanceMethod(objc_getClass("__NSDictionaryM"),@selector(em_setObject:forKey:));
//    method_exchangeImplementations(fromMethod, toMethod);

}

- (instancetype)em_initWithObjects:(id _Nonnull const[])objects forKeys:(id<NSCopying> _Nonnull const[])keys count:(NSUInteger)cnt

{
    NSInteger index =0;
    id newObjects[cnt];
    id<NSCopying> newKeys[cnt];
    for(int i=0; i<cnt; i++) {
    id object = objects[i];
        id<NSCopying> key = keys[i];
        if(object) {
            newObjects[index] = object;
            newKeys[index] = key;
            index++;
            
        }
        
    }
    cnt = index;
    return [self em_initWithObjects:newObjects forKeys:newKeys count:cnt];

}

- (void)em_setObject:(id)emObject forKey:(NSString*)key {
    if(emObject && key) {
        [self em_setObject:emObject forKey:key];
        
    }

}

- (id)objectValueForKey:(NSString*)key

{

    id value = [self valueForKey:key];
    if((!value || [value isKindOfClass:[NSNull class]]))
    {
        return nil;
        
    }else{
        return value;
        
    }

}

@end
