//
//  TradPlusNativeInterstitial.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/9.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADNativeInterstitialDelegate;

@interface TradPlusNativeInterstitial : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;
/// 加载广告
- (void)loadAd;

///显示插屏
- (void)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;


@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic,weak) id <TradPlusADNativeInterstitialDelegate> delegate;

@end


@protocol TradPlusADNativeInterstitialDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeInterstitialAdDidLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpNativeInterstitialAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpNativeInterstitialAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpNativeInterstitialAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击
- (void)tpNativeInterstitialAdClicked:(NSDictionary *)adInfo;
///关闭
- (void)tpNativeInterstitialAdDismissed:(NSDictionary *)adInfo;
///bidding开始
- (void)tpNativeInterstitialAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpNativeInterstitialAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success;
///开始加载
- (void)tpNativeInterstitialAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpNativeInterstitialAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpNativeInterstitialAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpNativeInterstitialAdAllLoaded:(BOOL)success;
@end

NS_ASSUME_NONNULL_END




