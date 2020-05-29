//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSString, UINavigationController, WASessionContentViewController;

@protocol WASessionContentLogicHandlerDelegate <NSObject>
- (NSString *)getFromPagePath;
- (NSString *)getFatherAppid;
- (unsigned long long)getDebugMode;
- (unsigned int)getAppVersion;
- (NSString *)getSessionSceneID;
- (NSString *)getSessionContentPageID;
- (unsigned long long)getSessionContentEnterScene;
- (WASessionContentViewController *)getSessionContentViewController;
- (UINavigationController *)getSessionContentNavigationController;
- (CContact *)getSessionContentContact;
@end

