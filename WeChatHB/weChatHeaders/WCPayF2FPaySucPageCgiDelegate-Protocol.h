//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CgiF2FPaySucPageResp, NSString;

@protocol WCPayF2FPaySucPageCgiDelegate <NSObject>
- (void)OnGetF2FPaySucPageResonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetF2FPaySucPageResonseOK:(CgiF2FPaySucPageResp *)arg1;
@end
