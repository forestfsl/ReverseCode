//
//  ViewController.m
//  MethodSwizzle
//
//  Created by fengsl on 2020/4/26.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    NSURL *url = [NSURL URLWithString:@"https://www.baidu.com/中文"];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    //发请求
    NSLog(@"%@",request);
}


@end
