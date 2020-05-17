//
//  ViewController.m
//  001--base64
//
//  Created by H on 2018/11/30.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//  对一个二进制数据进行编码，文件会变大！ 原有文件的4/3 ， 多了1/3
//  不便于查看的二进制数据，用base64进行表示。

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
}
//给一个字符 编码
-(NSString *)base64Endcode:(NSString *)str{
   NSData * data = [str dataUsingEncoding:NSUTF8StringEncoding];
    return [data base64EncodedStringWithOptions:0];
}


//给一个编码我对其进行解密
-(NSString *)base64Decode:(NSString *)str{
    NSData * data = [[NSData alloc] initWithBase64EncodedString:str options:0];
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSLog(@"%@",[self base64Endcode:@"A"]);
    
    NSLog(@"解码%@",[self base64Decode:@"QQ=="]);
}


@end
