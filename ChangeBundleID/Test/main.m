//
//  main.m
//  Test
//
//  Created by fengsl on 2020/5/12.
//  Copyright © 2020 com.forest. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

int main(int argc, char * argv[]) {
    @autoreleasepool {
        
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
       
    }
}
/*
int main(int argc, char * argv[]) {
 
        。。。其他原来代码。。。
 
        rebind_symbols((struct rebinding[2]){{"close", my_close, (void *)&orig_close}, {"open", my_open, (void *)&orig_open}}, 2);
        
        // Open our own binary and print out first 4 bytes (which is the same
        // for all Mach-O binaries on a given architecture)
        int fd = open(argv[0], O_RDONLY);
        uint32_t magic_number = 0;
        read(fd, &magic_number, 4);
        printf("Mach-O Magic Number: %x \n", magic_number);
        close(fd);
 
        。。。其他原来代码。。。
}
int my_open(const char *path, int oflag, ...) {
    va_list ap = {0};
    mode_t mode = 0;
    
    if ((oflag & O_CREAT) != 0) {
        // mode only applies to O_CREAT
        va_start(ap, oflag);
        mode = va_arg(ap, int);
        va_end(ap);
 
        printf("Calling real open('%s', %d, %d)\n", path, oflag, mode);
 
        return orig_open(path, oflag, mode);
    } else {
        
        NSString *pathOri = [[NSString alloc]initWithUTF8String:path];
        if([pathOri rangeOfString:@"XXX.app/Info.plist"].length > 0){
            path = [[pathOri stringByReplacingOccurrencesOfString:@"Info.plist" withString:@"InfoYYY.plist"] UTF8String];
            printf("Calling real open('%s', %d)\n", path, oflag);
 
        }
        
        
        return orig_open(path, oflag, mode);
    }

*/
