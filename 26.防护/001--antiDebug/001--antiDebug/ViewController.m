//
//  ViewController.m
//  001--antiDebug
//
//  Created by H on 2019/1/21.
//  Copyright © 2019年 LogicEDU. All rights reserved.


#import "ViewController.h"
#import "MyPtraceHeader.h"
#import <dlfcn.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //为了拼接一个ptrace字符串出来
    unsigned char str[] = {
        ('a' ^ 'p'),
        ('a' ^ 't'),
        ('a' ^ 'r'),
        ('a' ^ 'a'),
        ('a' ^ 'c'),
        ('a' ^ 'e'),
        ('a' ^ '\0')
    };
    unsigned char * p = str;
    while (((*p) ^= 'a') != '\0') p++;
    //通过dlopen拿到句柄
   void * handle = dlopen("/usr/lib/system/libsystem_kernel.dylib", RTLD_LAZY);
    //定义函数指针
    int (*ptrace_p)(int _request, pid_t _pid, caddr_t _addr, int _data);
    //获得ptrace函数指针
    ptrace_p = dlsym(handle, (const char *)str);
    if (!ptrace_p) {
        return ;
    }
    ptrace_p(PT_DENY_ATTACH, 0, 0, 0);
    
    
    
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSLog(@"正常运行！！");
}

@end
