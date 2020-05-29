//
//  ViewController.m
//  001--antiDebug
//
//  Created by H on 2019/1/21.
//  Copyright © 2019年 LogicEDU. All rights reserved.


#import "ViewController.h"
#import "MyPtraceHeader.h"
#import <dlfcn.h>
#import <sys/syscall.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    char * dlname = getenv("DYLD_INSERT_LIBRARIES");
    if(dlname){
        NSLog(@"%s\n越狱手机，关闭部分功能",dlname);
    }else{
        NSLog(@"正常手机，");
    }
    
//    syscall(26,31,0,0);
//    asm volatile(
//                 "mov x0,#26\n"
//                 "mov x1,#31\n"
//                 "mov x2,#0\n"
//                 "mov x3,#0\n"
//        "mov x16,#0\n"//中断根据x16里面的值跳转 syscall
//        "svc #0x80\n"//这条指令就是触发中断（系统级别的跳转！）
//    );
    asm volatile(
                 "mov x0,#31\n"
                 "mov x1,#0\n"
                 "mov x2,#0\n"
                 "mov x16,#26\n"//中断根据x16里面的值跳转 ptrace
                 "svc #0x80\n"//这条指令就是触发中断（系统级别的跳转！）
                 );
    
    
}


//通过syscall 绕过前面断点
void syscallDemo(){
    /**
     1、参数是函数编号
     2、其他的就是参数顺序。
     */
    syscall(26,31,0,0);
    
}

void dlsymDemo(){
    
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
#ifdef __arm64__
    asm(
        "mov X0,#0\n"
        "mov w16,#1\n"
        "svc #0x80\n"
        );
#endif
#ifdef __arm__ //32位下
    asm(
        "mov r0,#0\n"
        "mov r16,#1\n"
        "svc #80\n"
        );
#endif
    
}


@end
