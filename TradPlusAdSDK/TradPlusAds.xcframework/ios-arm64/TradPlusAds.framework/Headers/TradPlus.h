//
//  TradPlus.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/10/12.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSLogging.h>
#import <TradPlusAds/MsCommon.h>
#import <TradPlusAds/TradPlusUID2Info.h>
#import <TradPlusAds/TPPlatformLimit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, AdMobAdChoicesPosition) {
    AdMobAdChoicesPositionTopRightCorner,     ///< Top right corner.
    AdMobAdChoicesPositionTopLeftCorner,      ///< Top left corner.
    AdMobAdChoicesPositionBottomRightCorner,  ///< Bottom right corner.
    AdMobAdChoicesPositionBottomLeftCorner    ///< Bottom Left Corner.
};

typedef NS_ENUM(NSInteger, TPPAGPAConsentType) {
    TPPAGPAConsentTypeNoConsent   =  0,   ///< User doesn't grant consent
    TPPAGPAConsentTypeConsent     =  1,   ///< User has granted the consent
};

@protocol TradPlusAdImpressionDelegate;

@interface TradPlus : NSObject
+ (instancetype)sharedInstance;

+ (void)initSDK:(NSString *)appId completionBlock:(void (^)(NSError* __nullable error))completionBlock;
+ (NSString *)getVersion;
+ (void)setLogLevel:(TPLogLevel)level;

+ (void)setGDPRDataCollection:(BOOL)canDataCollection;
+ (MSConsentStatus)getGDPRDataCollection;

///NO:加州用户均不上报数据；YES:接受上报数据
+ (void)setCCPADoNotSell:(BOOL)isCCPA;

+ (void)setCOPPAIsAgeRestrictedUser:(BOOL)isAgeRestrictedUser;
///v8.5.0版本新增LGPD设置
+ (void)setLGPDIsConsentEnabled:(BOOL)isConsentEnabled;
+ (void)setDevAllowTracking:(BOOL)allowTracking;
+ (void)setAllowMessagePush:(BOOL)bo;
+ (BOOL)isAllowTracking;

//设置Pangle是否投放广告 默认投放
+ (void)setPAConsent:(TPPAGPAConsentType)consent;

///注：此接口需要在initSDK之前调用
///此接口设置为Yes后SDK将只使用国内域名
+ (void)setCnServer:(BOOL)bo;


+ (void)setAdMobNativeLogoPosition:(AdMobAdChoicesPosition)positionType;

///v13.6.0新增 设置广告位级别LocalParams
/// @param localParams  设置为nil时则会对已设置的数据进行移除操作
/// @param placementId 广告位ID
+ (void)setLocalParams:(nullable NSDictionary *)localParams placementId:(NSString *)placementId;

/// 设置广告位级别流量分组信息
/// @param customDictionary 流量分组信息 设置为nil时则会对已设置流量分组数据进行移除操作
/// @param placementId 广告位ID
+ (void)setCustomDictionary:(nullable NSDictionary *)customDictionary  placementId:(NSString *)placementId;

/// 设置本地配置信息
/// @param configInfo 本地配置信息
/// @param placementId 广告位ID
+ (void)setLocalConfig:(NSString *)configInfo placementId:(NSString *)placementId;

///支持 TradPlusAdBanner TradPlusAdNative TradPlusNativeSplash TradPlusNativeBanner TradPlusAdInterstitial TradPlusAdRewarded TradPlusAdSplash 类型进行缓存过期的手动检测
+ (void)expiredAdCheck;

///设置应用在app store上的id 
+ (void)setAppStoreId:(NSString *)appStoreId;

///设置是否允许上传用户使用时长 默认允许
+ (void)setAppAllowUploadUseTime:(BOOL)allowUpload;

///设置是否开启个性化推荐广告。NO = 关闭 ，YES = 开启。默认 YES 开启
+ (void)setOpenPersonalizedAd:(BOOL)isOpen;

/// 清理 指定广告位的缓存广告
/// @param placementId 广告位ID
+ (void)clearCacheWithPlacementId:(NSString *)placementId;

/// v13.0.0新增 清理 指定广告位绑定的共享广告位的缓存
/// @param placementId 广告位ID
+ (void)clearShareCacheWithPlacementId:(NSString *)placementId;

//查看用户当前区域
//isUnknown = YES时表示 未知IP 或 网络请求失败
+ (void)checkCurrentArea:(void (^)(BOOL isUnknown,BOOL isCN,BOOL isCA,BOOL isEU))completionBlock;

//v13.1.0新增 设置指定平台的展示限制 可配合TPPlatformLimit使用
//也可以传入特定格式数组 例：@[@{@"platform":广告平台ID,@"num":展示频限数量},...]
//可传入空数组进行重置已设置配置
+ (void)setPlatformLimit:(NSArray *)list;

@property (nonatomic,strong)TradPlusUID2Info *UID2Info;

///当前的个性化状态
@property (nonatomic,readonly)BOOL isOpenPersonalizedAd;

///是否开启定时检查广告过期
///yes=允许定时检查 no=关闭定时检查 默认为YES
@property (nonatomic,assign)BOOL isExpiredAdChecking;

@property (nonatomic, strong) NSString *appId;
//用户信息自定义 key:{user_id, user_age, user_gender...}
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic, strong) NSDictionary *settingDataParam;

//v13.5.0新增 用于设置自定义测试ID 匹配测试模式
@property (nonatomic,copy)NSString *customTestID;

//v8.5.0新增，统一展示回调
@property (nonatomic,weak) id <TradPlusAdImpressionDelegate> impressionDelegate;
@end

@protocol TradPlusAdImpressionDelegate <NSObject>
//统一展示回调，开发者可通过此回调获取到各广告位的展示回调信息，方便开发者进行统计。
//注：此回调不保证在主线程回调。
- (void)tradPlusAdImpression:(NSDictionary *)adInfo;

@end

NS_ASSUME_NONNULL_END
