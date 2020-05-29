//
//  WeChatRedEnvelopesParamQueue.h
//  WeChatDemoDylib
//
//  Created by H on 2019/1/18.
//  Copyright © 2019年 LogicEDU. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WeChatRedEnvelopesParamQueue : NSObject

@property (nonatomic, assign) BOOL isAuto;

+(instancetype)sharedQueue;
-(void)enQueue:(NSMutableDictionary *)param;
-(NSMutableDictionary *)deQueue;
@end

NS_ASSUME_NONNULL_END
