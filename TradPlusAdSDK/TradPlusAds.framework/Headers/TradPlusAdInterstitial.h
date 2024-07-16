//
//  TradPlusAdInterstitial.h
//  TradPlusAds
//
//  Created by xuejun on 2021/9/6.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusAds.h>
#import <TradPlusAds/TradPlusAdInterstitialObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADInterstitialDelegate;

@interface TradPlusAdInterstitial : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///获取三方渠道广告对象
- (nullable id)getInterstitialAd;

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

///指定 TradPlusAdInterstitialObject 展示广告
- (void)showWithInterstitialObject:(TradPlusAdInterstitialObject *)interstitialObject sceneId:(nullable NSString *)sceneId;
- (void)showWithInterstitialObject:(TradPlusAdInterstitialObject *)interstitialObject rootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

///获取一个已缓存广告,获取后此广告会从缓存中移除，无广告时返回nil
- (nullable TradPlusAdInterstitialObject *)getReadyInterstitialObject;

/// 进入广告场景
/// @param sceneId 场景ID 可以为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

- (void)openAutoLoadCallback;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADInterstitialDelegate> delegate;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;
@end


@protocol TradPlusADInterstitialDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpInterstitialAdLoaded:(NSDictionary *)adInfo;

///AD展现
- (void)tpInterstitialAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpInterstitialAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpInterstitialAdClicked:(NSDictionary *)adInfo;

///AD关闭
- (void)tpInterstitialAdDismissed:(NSDictionary *)adInfo;

@optional

///AD加载失败
///tpInterstitialAdOneLayerLoaded:didFailWithError：返回三方源的错误信息
- (void)tpInterstitialAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpInterstitialAdLoadFailWithError:,两个回调任选其一
- (void)tpInterstitialAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

///v7.6.0+ 开始加载流程
- (void)tpInterstitialAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpInterstitialAdLoadStart:(NSDictionary *)adInfo;
- (void)tpInterstitialAdOneLayerStartLoad:(NSDictionary *)adInfo;

///v8.7.0+新增
///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpInterstitialAdIsLoading:(NSDictionary *)adInfo;

///bidding开始
- (void)tpInterstitialAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpInterstitialAdBidEnd:(NSDictionary *)adInfo error:(nullable NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpInterstitialAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpInterstitialAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpInterstitialAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpInterstitialAdAllLoaded:,两个回调任选其一
- (void)tpInterstitialAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;

///开始播放
- (void)tpInterstitialAdPlayStart:(NSDictionary *)adInfo;

///播放结束
- (void)tpInterstitialAdPlayEnd:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpInterstitialAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpInterstitialAdBidEnd:error:");
- (void)tpInterstitialAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpInterstitialAdOneLayerStartLoad:");
@end
NS_ASSUME_NONNULL_END
