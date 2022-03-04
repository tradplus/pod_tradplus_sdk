//
//  TradPlusNativeBanner.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/20.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TradPlusNativeRenderer.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADNativeBannerDelegate;

@interface TradPlusNativeBanner : UIView

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///是否为自动展示模式 默认 YES
@property (nonatomic,assign)BOOL autoShow;

/// 加载广告
/// @param sceneId 场景ID 没有则设置为nil 用于自动展示模式下
- (void)loadAdWithSceneId:(nullable NSString *)sceneId;


/// 展示广告
/// @param sceneId 场景ID 没有则设置为nil
- (void)showWithSceneId:(nullable NSString *)sceneId;

/// 通过指定渲染模版 展示广告
/// @param renderingViewClass renderingViewClass
/// @param sceneId 场景ID 没有则设置为nil
- (void)showWithRenderingViewClass:(Class)renderingViewClass sceneId:(nullable NSString *)sceneId;


/// 通过指定 renderer 展示广告
/// @param renderer 自定义renderer
/// @param sceneId 场景ID 没有则设置为nil
- (void)showWithRenderer:(TradPlusNativeRenderer *)renderer sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic,weak) id <TradPlusADNativeBannerDelegate> delegate;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

@protocol TradPlusADNativeBannerDelegate <NSObject>

- (UIViewController *)viewControllerForPresentingModalView;
///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeBannerAdDidLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpNativeBannerAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpNativeBannerAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpNativeBannerAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击
- (void)tpNativeBannerAdClicked:(NSDictionary *)adInfo;

@optional
///bidding开始
- (void)tpNativeBannerAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpNativeBannerAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success;
///开始加载
- (void)tpNativeBannerAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpNativeBannerAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpNativeBannerAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpNativeBannerAdAllLoaded:(BOOL)success;
@end

NS_ASSUME_NONNULL_END
