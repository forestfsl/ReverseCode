//
//  WeChatRedEnvelopesParamQueue.m
//  WeChatDemoDylib
//
//  Created by H on 2019/1/18.
//  Copyright © 2019年 LogicEDU. All rights reserved.
//

#import "WeChatRedEnvelopesParamQueue.h"

@interface WeChatRedEnvelopesParamQueue()

@property (nonatomic, strong) NSMutableArray * arr;
@end

@implementation WeChatRedEnvelopesParamQueue

static WeChatRedEnvelopesParamQueue * queue= nil;

+(instancetype)sharedQueue
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = [[WeChatRedEnvelopesParamQueue alloc] init];
    });
    return queue;
}

-(instancetype)init
{
    if (self = [super init]) {
        _arr = [NSMutableArray array];
    }
    return self;
}

-(void)enQueue:(NSMutableDictionary *)param{
    [self.arr addObject:param];
}


-(NSMutableDictionary *)deQueue{
    if (self.arr.count == 0 && !self.arr.firstObject) {
        return nil;
    }
    NSMutableDictionary * dict = self.arr.firstObject;
    [self.arr removeObjectAtIndex:0];
    
    return dict;
}

@end
