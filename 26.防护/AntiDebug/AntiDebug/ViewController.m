//
//  ViewController.m
//  AntiDebug
//
//  Created by apple on 2020/5/21.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"
//在iOS里面是没有这个头文件的，需要新建一个mac的命令行然后倒入这个头文件，之后进入到里面copy出来即可，这里我copy奥了MyPtraceHeader.h里面
//#import <sys/ptrace.h>
#import "MyPtraceHeader.h"


/**
 ptrace防护的一个特点：
 1.重签名运行之后闪退
 2.手动打开正常
 */

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor redColor];
    // Do any additional setup after loading the view.
    /*
     arg1:ptrace 要做的事情
     arg2:要操作的进程id
     arg3:地址
     arg4:数据
     */
    ptrace(PT_DENY_ATTACH, 0, 0, 0);
}



@end
