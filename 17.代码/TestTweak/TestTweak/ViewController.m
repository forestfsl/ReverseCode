//
//  ViewController.m
//  TestTweak
//
//  Created by MJ Lee on 2018/1/27.
//  Copyright © 2018年 MJ Lee. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)click
{
    UISwitch *s = [[UISwitch alloc] init];
    s.center = CGPointMake(100, 100);
    s.on = YES;
    [self.view addSubview:s];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self click];
}

@end
