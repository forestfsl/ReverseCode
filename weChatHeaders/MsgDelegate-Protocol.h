//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, ImageInfo, MMAsset, NSArray, NSData, NSMutableArray, NSString, UIImage;

@protocol MsgDelegate <NSObject>

@optional
- (void)ClearUnRead:(NSString *)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetUnReadCount:(NSString *)arg1;
- (void)DelMsg:(NSString *)arg1 MsgList:(NSArray *)arg2 DelAll:(_Bool)arg3;
- (NSMutableArray *)GetMsg:(NSString *)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (void)ModMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (void)AddMsg:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2;
- (CMessageWrap *)formImageMsgByMMAsset:(MMAsset *)arg1 toUserName:(NSString *)arg2;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2 withData:(NSData *)arg3 withImageInfo:(ImageInfo *)arg4;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2 withData:(NSData *)arg3;
- (CMessageWrap *)FormImageMsg:(NSString *)arg1 withImage:(UIImage *)arg2;
- (CMessageWrap *)FormTextMsg:(NSString *)arg1 withText:(NSString *)arg2 withMsgSource:(NSString *)arg3;
- (CMessageWrap *)FormTextMsg:(NSString *)arg1 withText:(NSString *)arg2;
@end

