//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol WCMallChargeMobileViewControllerDelegate <NSObject>
- (_Bool)IsNeedShowChargeEnsureAlertView;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(NSString *)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (unsigned int)GetWCMallMallProductsAllListCount;
- (NSArray *)GetWCMallMallProductsFiltedOldList:(NSString *)arg1;
- (_Bool)IsUsedWCMallMallProduct;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(NSDictionary *)arg1;
- (void)OnWCMallInputedCompleteTelphone:(NSString *)arg1;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerBack;
@end
