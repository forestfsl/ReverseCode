//
//  ViewController.m
//  BlockDemo
//
//  Created by apple on 2020/5/20.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    /*
    returnType(^<#blockName#>)(<#parameterTypes#>) = ^returnType(<#parameters#>) {
        <#statements#>
    };
    */
    id(^block)(void) = ^id(){
        NSString *str = [NSString stringWithFormat:@"hello"];
        return str;
    };
    
    block();
}


@end
