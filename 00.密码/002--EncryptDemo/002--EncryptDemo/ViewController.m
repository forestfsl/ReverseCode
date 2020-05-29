//
//  ViewController.m
//  002--EncryptDemo
//
//  Created by H on 2018/12/3.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//  

#import "ViewController.h"
#import "EncryptionTools.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    /** AES - ECB */
    NSString * key = @"abc";
    NSString * encStr = [[EncryptionTools sharedEncryptionTools] encryptString:@"http://127.0.0.1:8080" keyString:key iv:nil];
    
    NSLog(@"加密的结果是：%@",encStr);
    
    NSLog(@"解密的结果是：%@",[[EncryptionTools sharedEncryptionTools] decryptString:encStr keyString:key iv:nil]);
    
    /** AES - CBC 加密 */
    uint8_t iv[8] = {1,2,3,4,5,6,7,8};
    NSData * ivData = [NSData dataWithBytes:iv length:sizeof(iv)];
    
    
    
    NSLog(@"CBC加密：%@",[[EncryptionTools sharedEncryptionTools] encryptString:@"http://127.0.0.1:8080" keyString:@"abc" iv:ivData]);
    
    NSLog(@"解密：%@",[[EncryptionTools sharedEncryptionTools] decryptString:@"KPZbh+YWL2DEpJ3scCffc7VG8bbqZFyp8Slp6wXeFw4=" keyString:key iv:ivData]);
}


@end
