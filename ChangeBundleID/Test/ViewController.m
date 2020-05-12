//
//  ViewController.m
//  Test
//
//  Created by fengsl on 2020/5/12.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
   NSString *bundleID = [[NSBundle mainBundle] bundleIdentifier];
    
    NSLog(@"bundleID:%@",bundleID);
    
    NSString *infoBundleID = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"];
     NSLog(@"infoBundleID:%@",infoBundleID);

}


@end
