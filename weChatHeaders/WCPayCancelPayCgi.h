//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class NSString;

@interface WCPayCancelPayCgi : WCPayBaseCgi
{
    id <WCPayCancelPayCgiDelegate> _cgiDelegate;
    NSString *_reqKey;
}

@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(nonatomic) __weak id <WCPayCancelPayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (_Bool)selectCgi;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 PayScene:(unsigned int)arg2 PayChannel:(unsigned int)arg3 ReqKey:(id)arg4;

@end

