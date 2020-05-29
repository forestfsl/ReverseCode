//
//  ViewController.m
//  003--基本防护
//
//  Created by H on 2018/12/12.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

#import "ViewController.h"
#import <objc/message.h>


@interface ViewController ()

@end

@implementation ViewController

+(void)load
{
    NSLog(@"ViewController + load");
   
}
- (void)viewDidLoad {
    [super viewDidLoad];
    
    
}



- (IBAction)click1:(id)sender {
    NSLog(@"按钮1");
    
}

- (IBAction)click2:(id)sender {
    NSLog(@"按钮2");
}

@end
