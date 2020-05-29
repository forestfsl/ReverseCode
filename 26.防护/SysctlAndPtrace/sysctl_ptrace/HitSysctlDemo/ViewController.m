//
//  ViewController.m
//  HitSysctlDemo
//
//  Created by apple on 2020/5/21.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"
#import <sys/sysctl.h>
#import "MyPtraceHeader.h"
#import "MyPtraceHeader.h"

@interface ViewController ()

@end

@implementation ViewController




- (void)viewDidLoad {
    [super viewDidLoad];
    /*
        arg1:ptrace 要做的事情
        arg2:要操作的进程的id
        arg3(地址)\arg4(数据)：取决于第一个参数
        */
       ptrace(PT_DENY_ATTACH, 0, 0, 0);
}


@end
