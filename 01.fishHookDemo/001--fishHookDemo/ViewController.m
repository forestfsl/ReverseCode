//
//  ViewController.m
//  001--fishHookDemo
//
//  Created by H on 2018/12/12.
//  Copyright © 2018年 LogicEDU. All rights reserved.
//

#import "ViewController.h"
#import "fishhook.h"
#import "SSZipArchive.h"

@interface ViewController ()
@property (copy, nonatomic) NSString *samplePath;
@property (copy, nonatomic) NSString *zipPath;


@end

@implementation ViewController

#pragma mark - Private
- (NSString *)tempZipPath {
    NSString *path = [NSString stringWithFormat:@"%@/%@.zip",
                      NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)[0],
                      [NSUUID UUID].UUIDString];
    return path;
}

- (NSString *)tempUnzipPath {
    NSString *path = [NSString stringWithFormat:@"%@/%@",
                      NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)[0],
                      [NSUUID UUID].UUIDString];
    NSURL *url = [NSURL fileURLWithPath:path];
    NSError *error = nil;
    [[NSFileManager defaultManager] createDirectoryAtURL:url
                             withIntermediateDirectories:YES
                                              attributes:nil
                                                   error:&error];
    if (error) {
        return nil;
    }
    return url.path;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
//
//    //rebinding结构体
//    struct rebinding nslog;
//    nslog.name = "NSLog";
//    nslog.replacement = myNslog;
//    nslog.replaced = (void *)&sys_nslog;
//    //rebinding结构体数组
//    struct rebinding rebs[1] = {nslog};
//    /**
//     * 存放rebinding结构体的数组
//     * 数组的长度
//     */
//    rebind_symbols(rebs, 1);
    
    _samplePath = [[NSBundle mainBundle].bundleURL
                      URLByAppendingPathComponent:@"Sample Data"
                      isDirectory:YES].path;
        NSLog(@"Sample path: %@", _samplePath);
        
       
        _zipPath = [self tempZipPath];
           NSLog(@"Zip path: %@", _zipPath);
       
           BOOL success = [SSZipArchive createZipFileAtPath:_zipPath
                                    withContentsOfDirectory:_samplePath
                                        keepParentDirectory:NO
                                           compressionLevel:-1
                                                   password: nil
                                                        AES:YES
                                            progressHandler:nil];
           if (success) {
               NSLog(@"Success zip");
    
           } else {
               NSLog(@"No success zip");
               
           }
       
    }

    #pragma mark - IBAction
    - (IBAction)zipPressed:(id)sender {
        _zipPath = [self tempZipPath];
        NSLog(@"Zip path: %@", _zipPath);
  
        BOOL success = [SSZipArchive createZipFileAtPath:_zipPath
                                 withContentsOfDirectory:_samplePath
                                     keepParentDirectory:NO
                                        compressionLevel:-1
                                                password:nil
                                                     AES:YES
                                         progressHandler:nil];
        if (success) {
            NSLog(@"Success zip");

        } else {
            NSLog(@"No success zip");
     
        }

}
//---------------------------------更改NSLog-----------
//函数指针
static void(*sys_nslog)(NSString * format,...);
//定义一个新的函数
void myNslog(NSString * format,...){
    format = [format stringByAppendingString:@"勾上了！\n"];
    //调用原始的
    sys_nslog(format);
}



-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSLog(@"点击了屏幕！！");
}

@end
