//
//  TradPlusNativeSplash.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusNativeRenderer.h>
#import <TradPlusAds/MsCommon.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADNativeSplashDelegate;

@interface TradPlusNativeSplash : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;
/// 加载广告
- (void)loadAd;

/// 设置模版渲染的尺寸 需要在load之前设置
/// 默认使用 屏幕最短边正方形size进行渲染
/// @param size 尺寸
- (void)setTemplateRenderSize:(CGSize)size;

///设置模版渲染的布局方式 默认 TPTemplateContentModeCenter
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

/// 显示AD 会使用默认模版进行渲染
/// @param window window
- (void)showInWindow:(UIWindow *)window;

/// 通过指定渲染模版 展示广告
/// @param renderingViewClass renderingViewClass
/// @param window window
- (void)showWithRenderingViewClass:(Class)renderingViewClass window:(UIWindow *)window;


/// 通过指定 renderer 展示广告
/// @param renderer 自定义renderer
/// @param window window
- (void)showWithRenderer:(TradPlusNativeRenderer *)renderer window:(UIWindow *)window;


/// 显示AD 会使用默认模版进行渲染
/// @param subView subView
- (void)showInSubView:(UIView *)subView;

/// 通过指定渲染模版 展示广告
/// @param renderingViewClass renderingViewClass
/// @param subView subView
- (void)showWithRenderingViewClass:(Class)renderingViewClass subView:(UIView *)subView;


/// 通过指定 renderer 展示广告
/// @param renderer 自定义renderer
/// @param subView subView
- (void)showWithRenderer:(TradPlusNativeRenderer *)renderer subView:(UIView *)subView;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly)NSString *unitID;

@property (nonatomic,weak) id <TradPlusADNativeSplashDelegate> delegate;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

@protocol TradPlusADNativeSplashDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeSplashAdDidLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpNativeSplashAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpNativeSplashAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpNativeSplashAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpNativeSplashAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpNativeSplashAdClicked:(NSDictionary *)adInfo;

///关闭
- (void)tpNativeSplashAdClosed:(NSDictionary *)adInfo;

@optional

///为三方提供rootviewController 用于点击广告后的操作
- (nullable UIViewController *)viewControllerForPresentingModalView;

///v7.6.0+新增 开始加载流程
- (void)tpNativeSplashAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpNativeSplashAdLoadStart:(NSDictionary *)adInfo;
- (void)tpNativeSplashAdOneLayerStartLoad:(NSDictionary *)adInfo;

///bidding开始
- (void)tpNativeSplashAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpNativeSplashAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpNativeSplashAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpNativeSplashAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpNativeSplashAdAllLoaded:(BOOL)success;

///点击了跳过
- (void)tpNativeSplashAdClickSkip:(NSDictionary *)adInfo;

///跳过按钮显示
- (void)tpNativeSplashAdShowSkip:(NSDictionary *)adInfo;

///倒计时
- (void)tpNativeSplashAdCountDown:(NSDictionary *)adInfo progress:(NSInteger)progress;

///开始播放 v7.8.0+
- (void)tpNativeSplashAdVideoPlayStart:(NSDictionary *)adInfo;

///播放结束 v7.8.0+
- (void)tpNativeSplashAdVideoPlayEnd:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpNativeSplashAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeSplashAdBidEnd:error:");
- (void)tpNativeSplashAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeSplashAdOneLayerStartLoad:");
@end

NS_ASSUME_NONNULL_END
