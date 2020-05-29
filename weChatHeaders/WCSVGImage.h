//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCSVGCanvas;

@interface WCSVGImage : NSObject
{
    WCSVGCanvas *_mainCanvas;
    struct CGRect _viewBox;
}

+ (id)svgImageWithContentsOfFile:(id)arg1;
+ (id)svgImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 fromConfig:(id)arg2;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)imageNamed:(id)arg1;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) WCSVGCanvas *mainCanvas; // @synthesize mainCanvas=_mainCanvas;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageFromConfig:(id)arg1;

@end

