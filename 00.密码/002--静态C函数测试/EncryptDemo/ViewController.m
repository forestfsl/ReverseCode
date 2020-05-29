//
//  ViewController.m
//  EncryptDemo
//
//  Created by H on 2018/10/31.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

#import "ViewController.h"
#import "RSACryptor.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    //1.加载公钥
    [[RSACryptor sharedRSACryptor] loadPublicKey:[[NSBundle mainBundle] pathForResource:@"rsacert.der" ofType:nil]];
    //2.加载私钥
    [[RSACryptor sharedRSACryptor] loadPrivateKey: [[NSBundle mainBundle] pathForResource:@"p.p12" ofType:nil] password:@"123456"];
    
    
}

static void my_encrypt(){
    NSData * result = [[RSACryptor sharedRSACryptor] encryptData:[@"hello" dataUsingEncoding:NSUTF8StringEncoding]];
    //base64编码
    NSString * base64 = [result base64EncodedStringWithOptions:0];
    NSLog(@"加密之后:%@\n",base64);
    
    //解密
    NSData * dcStr = [[RSACryptor sharedRSACryptor] decryptData:result];
    NSLog(@"%@",[[NSString alloc] initWithData:dcStr encoding:NSUTF8StringEncoding]);
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    my_encrypt();
}

@end
