//
//  TradPlusAdRewarded.h
//  TradPlusAds
//
//  Created by xuejun on 2021/9/6.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADRewardedDelegate;
@protocol TradPlusADRewardedPlayAgainDelegate;

@interface TradPlusAdRewarded : NSObject

/// 设置广告位ID 默认开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID;

///  设置广告位ID
/// @param adUnitID 广告位ID
/// @param isAutoLoad  是否开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///加载广告
- (void)loadAd;

/// 显示广告
/// @param sceneId 场景ID 可以为nil
- (void)showAdWithSceneId:(nullable NSString *)sceneId;

/// 显示广告
/// @param rootViewController rootViewController
/// 当传入nil时SDK会自行获取key windows 的 rootViewController
/// @param sceneId 场景ID 可以为nil
- (void)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 可以为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

/// 设置服务器端奖励验证用户数据
/// @param userID 用户唯一识别码 必填
/// @param customData 附加信息 根据平台要求填写
- (void)setServerSideVerificationOptionsWithUserID:(nonnull NSString *)userID customData:(nullable NSString *)customData;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADRewardedDelegate> delegate;
@property (nonatomic,weak) id <TradPlusADRewardedPlayAgainDelegate> playAgainDelegate;

@end

@protocol TradPlusADRewardedDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpRewardedAdLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpRewardedAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpRewardedAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpRewardedAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpRewardedAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpRewardedAdClicked:(NSDictionary *)adInfo;

///AD关闭
- (void)tpRewardedAdDismissed:(NSDictionary *)adInfo;

///完成奖励
- (void)tpRewardedAdReward:(NSDictionary *)adInfo;

@optional

///v7.6.0+新增 开始加载流程
- (void)tpRewardedAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpRewardedAdLoadStart:(NSDictionary *)adInfo;
- (void)tpRewardedAdOneLayerStartLoad:(NSDictionary *)adInfo;

///bidding开始
- (void)tpRewardedAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpRewardedAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpRewardedAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpRewardedAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpRewardedAdAllLoaded:(BOOL)success;

///开始播放
- (void)tpRewardedAdPlayStart:(NSDictionary *)adInfo;

///播放结束
- (void)tpRewardedAdPlayEnd:(NSDictionary *)adInfo;

- (void)tpRewardedAdNoReward:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpRewardedAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpRewardedAdBidEnd:error:");
- (void)tpRewardedAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpRewardedAdOneLayerStartLoad:");
@end


@protocol TradPlusADRewardedPlayAgainDelegate <NSObject>

///AD展现
- (void)tpRewardedAdPlayAgainImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpRewardedAdPlayAgainShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpRewardedAdPlayAgainClicked:(NSDictionary *)adInfo;

///完成奖励
- (void)tpRewardedAdPlayAgainReward:(NSDictionary *)adInfo;

@optional

///开始播放
- (void)tpRewardedAdPlayAgainPlayStart:(NSDictionary *)adInfo;

///播放结束
- (void)tpRewardedAdPlayAgainPlayEnd:(NSDictionary *)adInfo;
@end
NS_ASSUME_NONNULL_END
