//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseHandler.h"

#import "FaceRecogBaseHandlerDelegate.h"
#import "FaceRecogCheckBrightnessLogicDelegate.h"
#import "FaceRecogHandlerDelegate.h"

@class FaceRecogCheckBrightnessLogic, NSString;

@interface FaceRecogInternelHandler : FaceRecogBaseHandler <FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate, FaceRecogCheckBrightnessLogicDelegate>
{
    unsigned int _checkAliveType;
    float _lightThreshold;
    FaceRecogBaseHandler *_faceHandler;
    FaceRecogCheckBrightnessLogic *_brightnessCheckLogic;
}

@property(retain, nonatomic) FaceRecogCheckBrightnessLogic *brightnessCheckLogic; // @synthesize brightnessCheckLogic=_brightnessCheckLogic;
@property(nonatomic) float lightThreshold; // @synthesize lightThreshold=_lightThreshold;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(retain, nonatomic) FaceRecogBaseHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (void).cxx_destruct;
- (void)faceRecogHandlerDidCancel:(id)arg1;
- (void)faceRecogHandlerDidFinish:(id)arg1;
- (void)onDidCheckBrightnessDone:(_Bool)arg1;
- (void)didAccessVideo;
- (void)subHandlerRequestAccessVideo;
- (void)startWithHasCheckBrightness:(_Bool)arg1;
- (void)startFace;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
