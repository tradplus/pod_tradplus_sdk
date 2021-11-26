//
//  TradPlus.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/10/12.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSLogging.h"
#import "MsCommon.h"

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, AdMobAdChoicesPosition) {
    AdMobAdChoicesPositionTopRightCorner,     ///< Top right corner.
    AdMobAdChoicesPositionTopLeftCorner,      ///< Top left corner.
    AdMobAdChoicesPositionBottomRightCorner,  ///< Bottom right corner.
    AdMobAdChoicesPositionBottomLeftCorner    ///< Bottom Left Corner.
};

@interface TradPlus : NSObject
+ (instancetype)sharedInstance;

+ (void)initSDK:(NSString *)appId completionBlock:(void (^)(NSError *error))completionBlock;
+ (NSString *)getVersion;
+ (void)setLogLevel:(MSLogLevel)level;

+ (void)setGDPRDataCollection:(BOOL)canDataCollection;
+ (MSConsentStatus)getGDPRDataCollection;

///NO:加州用户均不上报数据；YES:接受上报数据
+ (void)setCCPADoNotSell:(BOOL)isCCPA;

+ (void)setCOPPAIsAgeRestrictedUser:(BOOL)isAgeRestrictedUser;
+ (void)setAuthUID:(BOOL)authUID;
+ (void)setDevAllowTracking:(BOOL)allowTracking;
+ (void)setAllowMessagePush:(BOOL)bo;
+ (BOOL)isAllowTracking;


+ (void)setAdMobNativeLogoPosition:(AdMobAdChoicesPosition)positionType;

/// 设置本地配置信息
/// 暂时只支持native6.0
/// @param configInfo 本地配置信息
/// @param placementId 广告位ID
+ (void)setLocalConfig:(NSString *)configInfo placementId:(NSString *)placementId;

///暂时只支持native6.0
///检测缓存过期状态
+ (void)expiredAdCheck;

///设置应用在app store上的id 
+ (void)setAppStoreId:(NSString *)appStoreId;

///设置是否允许上传用户使用时长 默认允许
+ (void)setAppAllowUploadUseTime:(BOOL)allowUpload;

///支持 TradPlusAdSplash TradPlusAdRewarded TradPlusAdInterstitial TradPlusAdBanner TradPlusAdNative 类型开启关闭定时检查广告过期
///yes=允许定时检查 no=关闭定时检查 默认为YES
@property (nonatomic,assign)BOOL isExpiredAdChecking;

@property (nonatomic, strong) NSString *appId;
//用户信息自定义 key:{user_id, user_age, user_gender...}
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

NS_ASSUME_NONNULL_END
