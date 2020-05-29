//
//  ViewController.m
//  AttactAntiDebug
//
//  Created by apple on 2020/5/21.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"
#import <sys/sysctl.h>

@interface ViewController ()

@end

@implementation ViewController


static dispatch_source_t timer ;
void debuggerCheck(){
 timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, dispatch_get_global_queue(0, 0));
    dispatch_source_set_timer(timer, DISPATCH_TIME_NOW, 1.0 * NSEC_PER_SEC, 0.0 * NSEC_PER_SEC);
    dispatch_source_set_event_handler(timer, ^{
        if (isDebugger()) {
            NSLog(@"有附加！");
        }else
        {
            NSLog(@"没有！");
        }
    });
    dispatch_resume(timer);
}

BOOL isDebugger(){
    int name[4]; //里面存放字节码
    name[0] = CTL_KERN;//内核查询
    name[1] = KERN_PROC;//查询进程
    name[2] = KERN_PROC_PID;//传递参数是进程的id
    name[3] = getpid();//PID的值
    
    struct kinfo_proc info;//接受查询结果的结构体
    size_t info_size = sizeof(info);
    sysctl(name, 4, &info, &info_size, NULL, 0);
    int flag = info.kp_proc.p_flag & P_TRACED;
    NSLog(@"%d",flag);
    //看info.kp_proc.p_flag 的第12位。如果位1，表示调试状态
    return ((info.kp_proc.p_flag & P_TRACED) != 0);
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    debuggerCheck();
}


@end
