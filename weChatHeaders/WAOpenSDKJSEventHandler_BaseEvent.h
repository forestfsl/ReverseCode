//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAOpenSDKJSEventHandlerContext;

@interface WAOpenSDKJSEventHandler_BaseEvent : NSObject
{
    NSString *_transitiveData;
    WAOpenSDKJSEventHandlerContext *_context;
    id <WAOpenSDKJSEventHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAOpenSDKJSEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAOpenSDKJSEventHandlerContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *transitiveData; // @synthesize transitiveData=_transitiveData;
- (void).cxx_destruct;
- (void)endWithResult:(id)arg1;
- (void)endWithErrMsg:(id)arg1;
- (void)endWithSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

