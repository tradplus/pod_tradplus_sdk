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
#import <TradPlusAds/TradPlusAdRewardedObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADRewardedDelegate;
@protocol TradPlusADRewardedPlayAgainDelegate;

@interface TradPlusAdRewarded : NSObject

/// 设置广告位ID 
- (void)setAdUnitID:(NSString *)adUnitID;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///获取三方渠道广告对象
- (nullable id)getRewardedAd;

///加载广告
- (void)loadAd;
- (void)loadAdWithMaxWaitTime:(NSTimeInterval)maxWaitTime;

/// 显示广告
/// @param sceneId 场景ID 可以为nil
- (void)showAdWithSceneId:(nullable NSString *)sceneId;

/// 显示广告
/// @param rootViewController rootViewController
/// 当传入nil时SDK会自行获取key windows 的 rootViewController
/// @param sceneId 场景ID 可以为nil
- (void)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

///指定 TradPlusAdRewardedObject 展示广告
- (void)showWithRewardedObject:(TradPlusAdRewardedObject *)rewardedObject sceneId:(nullable NSString *)sceneId;
- (void)showWithRewardedObject:(TradPlusAdRewardedObject *)rewardedObject rootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

///获取一个已缓存广告,获取后此广告会从缓存中移除，无广告时返回nil
- (nullable TradPlusAdRewardedObject *)getReadyRewardedObject;

/// 进入广告场景
/// @param sceneId 场景ID 可以为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

/// 设置服务器端奖励验证用户数据
/// @param userID 用户唯一识别码 必填
/// @param customData 附加信息 根据平台要求填写
- (void)setServerSideVerificationOptionsWithUserID:(nonnull NSString *)userID customData:(nullable NSString *)customData;

- (void)openAutoLoadCallback;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADRewardedDelegate> delegate;
@property (nonatomic,weak) id <TradPlusADRewardedPlayAgainDelegate> playAgainDelegate;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;
@end

@protocol TradPlusADRewardedDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpRewardedAdLoaded:(NSDictionary *)adInfo;

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

///AD加载失败
///tpRewardedAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpRewardedAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpRewardedAdLoadFailWithError:,两个回调任选其一
- (void)tpRewardedAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

///v7.6.0+新增 开始加载流程
- (void)tpRewardedAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpRewardedAdLoadStart:(NSDictionary *)adInfo;
- (void)tpRewardedAdOneLayerStartLoad:(NSDictionary *)adInfo;

///v8.7.0+新增
///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpRewardedAdIsLoading:(NSDictionary *)adInfo;

///bidding开始
- (void)tpRewardedAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpRewardedAdBidEnd:(NSDictionary *)adInfo error:(nullable NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpRewardedAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpRewardedAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpRewardedAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpRewardedAdAllLoaded:,两个回调任选其一
- (void)tpRewardedAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;

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
