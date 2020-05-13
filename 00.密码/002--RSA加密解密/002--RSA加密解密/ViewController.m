//
//  ViewController.m
//  002--RSA加密解密
//
//  Created by H on 2018/11/30.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

/***
 RSA数学原理（理解：是什么、怎么用）
 总结：
 RSA  重要加密算法！
    |- RSA 数学原理 （记得最终的公式）
        |- 欧拉定理（公式转换）、模反元素
        |- 迪菲赫尔曼密钥交换（拆分欧拉定理）
    |- OpenSSL 命令
    |- 特点（自己总结）：1、效率低 2、加密小数据
        |- 运用：加密KEY、数字签名
    |- 证书的生成步骤
    |- RSA代码运用。 
*/

#import "ViewController.h"
#import "RSACryptor.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    //1、加载公钥
    [[RSACryptor sharedRSACryptor] loadPublicKey:[[NSBundle mainBundle] pathForResource:@"rsacert.der" ofType:nil]] ;
    
    //2、加载私钥
    [[RSACryptor sharedRSACryptor] loadPrivateKey:[[NSBundle mainBundle] pathForResource:@"p.p12" ofType:nil] password:@"123456"];
    
}


-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    //加密
    NSData * ret = [[RSACryptor sharedRSACryptor] encryptData:[@"hello" dataUsingEncoding:NSUTF8StringEncoding]];
    //编码
    NSString * base64 = [ret base64EncodedStringWithOptions:0];
    NSLog(@"%@",base64);
    
    //解密
    NSData * jiemi = [[RSACryptor sharedRSACryptor] decryptData:ret];
    NSLog(@"%@",[[NSString alloc] initWithData:jiemi encoding:NSUTF8StringEncoding]);
}

@end
