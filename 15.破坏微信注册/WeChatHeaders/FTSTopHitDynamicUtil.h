//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTSTopHitDynamicUtil : NSObject
{
}

+ (int)ParseScoreInterval:(unsigned int)arg1;
+ (void)PrintLogs;
+ (_Bool)isSupportTopHitRemoval;
+ (unsigned int)CalDeclineScoreForMMGroup:(unsigned int)arg1;
+ (unsigned int)CalDeclineScore:(unsigned int)arg1;
+ (unsigned int)CalRaiseScore:(unsigned int)arg1;
+ (unsigned int)GetMaxDivScore;
+ (unsigned int)GetLeastDisplayScore;
+ (unsigned int)GetTopHitItemSurvivalDays;

@end

