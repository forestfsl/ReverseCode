//
//  InjectCode.m
//  Inject
//
//  Created by apple on 2020/5/21.
//  Copyright © 2020 fly. All rights reserved.
//

#import "InjectCode.h"
#import <sys/sysctl.h>
#import "fishhook.h"

@implementation InjectCode


//原始函数指针
int (*sysctl_p)(int *,u_int,void *,size_t *,void *,size_t);

//新函数地址
int my_sysctl(int *name,u_int namelen,void *info,size_t *infosize,void *newInfo,size_t newInfoSize){
    if (namelen == 4
        && name[0] == CTL_KERN
        && name[1] == KERN_PROC
        && name[2] == KERN_PROC_PID
        && info
        && (int)*infosize == sizeof(struct kinfo_proc)){
        int err = sysctl_p(name,namelen,info,infosize,newInfo,newInfoSize);
        
        struct kinfo_proc *myinfo = (struct kinfo_proc *)info;
        if ((myinfo->kp_proc.p_flag & P_TRACED) != 0) {
            //使用
            myinfo->kp_proc.p_flag ^= P_TRACED;
        }
        
        return err;
    }
    
    return sysctl_p(name,namelen,info,infosize,newInfo,newInfoSize);
}

+ (void)load{
   //交换
    rebind_symbols((struct rebinding[1]){{"sysctl",my_sysctl,(void *)&sysctl_p}},1);
}

@end
