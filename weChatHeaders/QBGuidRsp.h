//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSData;

@interface QBGuidRsp : QBJceObjectV2
{
    NSData *jcev2_p_0_o_vGuid;
    NSData *jcev2_p_1_o_vValidation;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=vValidation, setter=setVValidation:) NSData *jcev2_p_1_o_vValidation; // @synthesize jcev2_p_1_o_vValidation;
@property(retain, nonatomic, getter=vGuid, setter=setVGuid:) NSData *jcev2_p_0_o_vGuid; // @synthesize jcev2_p_0_o_vGuid;
- (void).cxx_destruct;
- (id)init;

@end

