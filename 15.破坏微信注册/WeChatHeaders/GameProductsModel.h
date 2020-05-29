//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMutableCopying-Protocol.h"

@class NSMutableArray, NSString, Utpmpinfo;

@interface GameProductsModel : NSObject <NSMutableCopying>
{
    NSString *_name;
    NSString *_promotionMessage;
    NSMutableArray *_products;
    Utpmpinfo *_firstChargeInfo;
}

+ (id)gameProductsModel:(id)arg1 promotionMessage:(id)arg2;
@property(retain, nonatomic) Utpmpinfo *firstChargeInfo; // @synthesize firstChargeInfo=_firstChargeInfo;
@property(readonly, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSString *promotionMessage; // @synthesize promotionMessage=_promotionMessage;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

