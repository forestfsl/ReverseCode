//
//  ViewController.m
//  001--fishHookDemo
//
//  Created by H on 2018/12/12.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

#import "ViewController.h"
#import "fishhook.h"

@interface ViewController ()

@end

@implementation ViewController



- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    //rebinding结构体
    struct rebinding nslog;
    nslog.name = "NSLog";
    nslog.replacement = myNslog;
    nslog.replaced = (void *)&sys_nslog;
    //rebinding结构体数组
    struct rebinding rebs[1] = {nslog};
    /**
     * 存放rebinding结构体的数组
     * 数组的长度
     */
    rebind_symbols(rebs, 1);
}
//---------------------------------更改NSLog-----------
//函数指针
static void(*sys_nslog)(NSString * format,...);
//定义一个新的函数
void myNslog(NSString * format,...){
    format = [format stringByAppendingString:@"勾上了！\n"];
    //调用原始的
    sys_nslog(format);
}



-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSLog(@"点击了屏幕！！");
}

@end
