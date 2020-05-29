//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface GameCenterUtil : MMObject
{
}

+ (void)useRoundCornorWithRadius:(double)arg1 View:(id)arg2;
+ (unsigned int)getUIAreaFromFeedsData:(id)arg1;
+ (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (_Bool)shouldUseHVAppInfo:(int)arg1 AppId:(id)arg2;
+ (_Bool)shouldUseHVAppInfo:(id)arg1;
+ (id)createWebViewController:(id)arg1 Url:(id)arg2 Manual:(_Bool)arg3;
+ (id)getGameCenterWebViewController:(id)arg1 Url:(id)arg2;
+ (id)createPreloadHomeWebViewController:(id)arg1 Url:(id)arg2;
+ (id)getGameCenterWebViewController:(_Bool)arg1 EntryScene:(id)arg2 Url:(id)arg3 presetUI:(id)arg4 Manual:(_Bool)arg5;
+ (id)getDefaultImage;
+ (id)parameterValueForKey:(id)arg1 fromQueryItems:(id)arg2;
+ (id)parameterValueForKey:(id)arg1 fromUrl:(id)arg2;
+ (id)parseUrlQuery:(id)arg1;
+ (id)getParseRegex;
+ (id)badgeFileNameWithLevel:(unsigned int)arg1;
+ (unsigned long long)actionTypeForGame:(id)arg1;
+ (id)parseHomepageDataWithResp:(id)arg1;
+ (id)getTopBannerFromV5:(id)arg1;
+ (id)trimmedStringWithString:(id)arg1;
+ (unsigned int)tagTypeWithString:(id)arg1;
+ (long long)trendTypeWithString:(id)arg1;
+ (id)getGameSettingCachePath;
+ (id)getGameSearchRecommendItemCachePath;
+ (id)getClassifyNewGameListCachePath:(id)arg1;
+ (id)getMoreGameListCachePath;
+ (id)getAllGameListDataPath;
+ (id)getAllMiniGameListDataPath;
+ (id)getUserSubscribeDataPath;
+ (id)getLibraryGameListCachePath;
+ (id)getGameAdsCountryInfoFilePath;
+ (id)getGameAdsFilePath;
+ (id)getGameMsgGiftInfoFilePath;
+ (id)getUserGameDetailFilePath:(id)arg1;
+ (id)getUserGlobalSettingFetchInfoPath;
+ (id)getUserGlobalSettingDataPath;
+ (id)getUserHomeTabNavPathV5;
+ (id)getUserHomeDataPathV5;
+ (id)getUserForeignHomeDataPathV4;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;
+ (id)getContactDisplayName:(id)arg1;

@end

