//
//  TradPlusNativeBanner.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/20.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusNativeRenderer.h>
#import <TradPlusAds/MsCommon.h>

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
@property (nonatomic, readonly)NSString *unitID;

@property (nonatomic,weak) id <TradPlusADNativeBannerDelegate> delegate;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

@protocol TradPlusADNativeBannerDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeBannerAdDidLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpNativeBannerAdOneLayerLoaded:didFailWithError：返回三方源的错误信息
- (void)tpNativeBannerAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpNativeBannerAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpNativeBannerAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpNativeBannerAdClicked:(NSDictionary *)adInfo;

@optional

///为三方提供rootviewController 用于点击广告后的操作
- (nullable UIViewController *)viewControllerForPresentingModalView;

///v7.6.0+新增 开始加载流程
- (void)tpNativeBannerAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpNativeBannerAdLoadStart:(NSDictionary *)adInfo;
- (void)tpNativeBannerAdOneLayerStartLoad:(NSDictionary *)adInfo;

///bidding开始
- (void)tpNativeBannerAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpNativeBannerAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpNativeBannerAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpNativeBannerAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpNativeBannerAdAllLoaded:(BOOL)success;

///以下回调接口已废弃v7.6.0+
- (void)tpNativeBannerAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeBannerAdBidEnd:error:");
- (void)tpNativeBannerAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeBannerAdOneLayerStartLoad:");

@end

NS_ASSUME_NONNULL_END
