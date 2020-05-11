//
//  main.m
//  HKCmdTool
//
//  Created by H on 2018/12/26.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *const str = @"123";

int main(int argc, char * argv[]) {
    if (argv[0]) {
        NSLog(@"%s",argv[0]);
    }
    if (argv[1]) {
        NSLog(@"%s",argv[1]);
    }
    if (argv[2]) {
        NSLog(@"%s",argv[2]);
    }
    if (argv[3]) {
        NSLog(@"%s",argv[3]);
    }
    
    NSLog(@"这是一个命令行工%@具🍺🍺🍺🍺🍺",str);
    return 0;
}
