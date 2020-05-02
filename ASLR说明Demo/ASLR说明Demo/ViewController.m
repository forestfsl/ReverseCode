//
//  ViewController.m
//  ASLR说明Demo
//
//  Created by fengsl on 2020/5/2.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

int a = 10;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)testASLR:(NSString *)text{
    a = 20;
    NSLog(@"测试ASLR的%@",text);
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self testASLR:@"demo"];
}


@end
