//
//  TradPlusAdInterstitial.h
//  TradPlusAds
//
//  Created by xuejun on 2021/9/6.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADInterstitialDelegate;

@interface TradPlusAdInterstitial : NSObject

/// 设置广告位ID
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
/// @param rootViewController rootViewController
/// @param sceneId 广告位ID
- (void)showAdFromRootViewController:(UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

@property (nonatomic, readonly) BOOL isAdReady;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADInterstitialDelegate> delegate;
@end


@protocol TradPlusADInterstitialDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpInterstitialAdLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpInterstitialAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpInterstitialAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpInterstitialAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击
- (void)tpInterstitialAdClicked:(NSDictionary *)adInfo;
///AD关闭
- (void)tpInterstitialAdDismissed:(NSDictionary *)adInfo;

@optional
///bidding开始
- (void)tpInterstitialAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpInterstitialAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success;
///开始加载
- (void)tpInterstitialAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpInterstitialAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpInterstitialAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpInterstitialAdAllLoaded:(BOOL)success;
///开始播放
- (void)tpInterstitialAdPlayStart:(NSDictionary *)adInfo;
///播放结束
- (void)tpInterstitialAdPlayEnd:(NSDictionary *)adInfo;
@end
NS_ASSUME_NONNULL_END
