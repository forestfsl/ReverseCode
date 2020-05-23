//
//  InjectCode.m
//  Inject
//
//  Created by apple on 2020/5/21.
//  Copyright © 2020 fly. All rights reserved.
//

#import "InjectCode.h"
#import "fishhook.h"
#import "MyPtraceHeader.h"

@implementation InjectCode

//定义指针，保存原来的函数地址
int (*ptrace_p)(int _request, pid_t _pid, caddr_t _addr, int _data);

//自定义的ptrace
int my_ptrace(int _request, pid_t _pid, caddr_t _addr, int _data){
    if (_request != PT_DENY_ATTACH) {//如果不是拒绝附加
        return ptrace_p(_request,_pid,_addr,_data);
    }
    //如果是拒绝附加，就直接return 不执行。
    return 0;
}

+(void)load
{
    //交换
    struct rebinding ptraceBd;
    ptraceBd.name = "ptrace";
    ptraceBd.replacement = my_ptrace;
    ptraceBd.replaced = (void *)&ptrace_p;
    struct rebinding binds[] = {ptraceBd};
    rebind_symbols(binds, 1);
    
}


@end
