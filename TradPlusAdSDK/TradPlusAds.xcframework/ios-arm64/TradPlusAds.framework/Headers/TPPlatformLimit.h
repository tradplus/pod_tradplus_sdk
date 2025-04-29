//
//  TPPlatformLimit.h
//  TradPlusAds
//
//  Created by xuejun on 2025/1/14.
//  Copyright © 2025 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger
{
    TPPlatformID_Meta = 1,
    TPPlatformID_Admob = 2,
    TPPlatformID_AdColony = 4,
    TPPlatformID_UnityAds = 5,
    TPPlatformID_Tapjoy = 6,
    TPPlatformID_Liftoff = 7,
    TPPlatformID_AppLovin = 9,
    TPPlatformID_IronSource = 10,
    TPPlatformID_Chartboost = 15,
    TPPlatformID_TencentAds = 16,//优量汇
    TPPlatformID_CSJ = 17,//穿山甲
    TPPlatformID_Mintegral = 18,
    TPPlatformID_Pangle = 19,
    TPPlatformID_KuaishouAds = 20,
    TPPlatformID_Sigmob = 21,
    TPPlatformID_Inmobi = 23,
    TPPlatformID_Fyber = 24,
    TPPlatformID_YouDao = 25,
    TPPlatformID_CrossPromotion = 27,//交叉推广
    TPPlatformID_StartIO = 28,
    TPPlatformID_Helium = 30,
    TPPlatformID_Maio = 31,
    TPPlatformID_Criteo = 32,
    TPPlatformID_MyTarget = 33,
    TPPlatformID_Ogury = 34,
    TPPlatformID_AppNext = 35,
    TPPlatformID_Kidoz = 37,
    TPPlatformID_Smaato = 38,
    TPPlatformID_ADX = 40,
    TPPlatformID_HuaWei = 41,
    TPPlatformID_Baidu = 43,//百度
    TPPlatformID_Klevin = 44,//游可赢
    TPPlatformID_A4G = 45,
    TPPlatformID_Mimo = 46,//米盟
    TPPlatformID_SuperAwesome = 47,
    TPPlatformID_GoogleAdManager = 48,
    TPPlatformID_Yandex = 50,
    TPPlatformID_Verve = 53,
    TPPlatformID_ZMaticoo = 55,
    TPPlatformID_ReklamUp = 56,
    TPPlatformID_Bigo = 57,
    TPPlatformID_Beizi = 58,
    TPPlatformID_TapTap = 63,
    TPPlatformID_ONEMOB = 60,
    TPPlatformID_PremiumAds = 64,
    TPPlatformID_GreedyGame = 67,
    TPPlatformID_AlgoriX = 68,
    TPPlatformID_BeesAds = 69,
    TPPlatformID_Amazon = 70,
    TPPlatformID_MangoX = 71,
    TPPlatformID_Sailoff = 72,
    TPPlatformID_TanX = 73,//阿里妈妈
    TPPlatformID_TaurusX = 74,
    TPPlatformID_KwaiAds = 75,
    TPPlatformID_Columbus = 76,
    TPPlatformID_YSO = 77,
    TPPlatformID_VivoAds = 78,
    TPPlatformID_OppoAds = 79,
    TPPlatformID_HONOR = 80,
} TPPlatformID;

@interface TPPlatformLimit : NSObject

@property (nonatomic,readonly)NSArray *list;
- (void)setLimitWithPlatformID:(NSInteger)platformID num:(NSInteger)num;
@end

NS_ASSUME_NONNULL_END
