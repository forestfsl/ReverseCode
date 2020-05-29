//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMThemeUtil : NSObject
{
}

+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
+ (id)parseOneColor:(id)arg1 fromDeclarations:(id)arg2 intoValues:(id)arg3;
+ (id)parseColorFromValues:(id)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (struct CGRect)parseRectFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (struct CGSize)parseSizeFromValues:(id)arg1;
+ (struct CGPoint)parsePointFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1 needCeil:(_Bool)arg2;
+ (double)parseFloatFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (id)parseFontFromValues:(id)arg1;
+ (_Bool)parseBOOLFromValues:(id)arg1;

@end

