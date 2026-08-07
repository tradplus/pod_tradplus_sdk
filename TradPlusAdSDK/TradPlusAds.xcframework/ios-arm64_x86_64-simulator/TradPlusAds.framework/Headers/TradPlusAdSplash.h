//
//  TradPlusAdSplash.h
//  TradPlusAds
//
//  Created by xuejun on 2021/9/13.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusAds.h>
#import <TradPlusAds/TradPlusAdSplashObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADSplashDelegate;

@interface TradPlusAdSplash : NSObject

/// 设置广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///获取三方渠道广告对象
- (nullable id)getSplashAd;


///加载广告
- (void)loadAdWithWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView;
- (void)loadAdWithWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView maxWaitTime:(NSTimeInterval)maxWaitTime;

/// v9.7.0新增
/// 进入广告场景
/// @param sceneId 场景ID 可以为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

/// 显示广告
- (void)show;
- (void)showWithSceneId:(nullable NSString *)sceneId;

/// v8.4.0新增
/// 指定原生开屏的渲染模版 展示广告
/// @param renderingViewClass renderingViewClass 仅对Waterfall中的原生广告生效
- (void)showWithRenderingViewClass:(Class)renderingViewClass;
- (void)showWithRenderingViewClass:(Class)renderingViewClass sceneId:(nullable NSString *)sceneId;

/// v8.4.0新增
/// 指定原生开屏的renderer 展示广告
/// @param renderer 自定义renderer 仅对Waterfall中的原生广告生效
- (void)showWithRenderer:(TradPlusNativeRenderer *)renderer;
- (void)showWithRenderer:(TradPlusNativeRenderer *)renderer sceneId:(nullable NSString *)sceneId;

///指定 TradPlusAdSplashObject 展示广告
- (void)showWithSplashObject:(TradPlusAdSplashObject *)splashObject;
- (void)showWithSplashObject:(TradPlusAdSplashObject *)splashObject sceneId:(nullable NSString *)sceneId;

///v8.4.0新增
///设置 原生开屏 模版渲染的布局方式 默认 TPTemplateContentModeCenter
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

///v8.4.0新增
/// 设置 原生开屏 模版渲染的尺寸 需要在load之前设置
/// 默认使用 屏幕最短边正方形size进行渲染
/// @param size 尺寸
- (void)setTemplateRenderSize:(CGSize)size;

- (void)openAutoLoadCallback;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,weak) id <TradPlusADSplashDelegate> delegate;

//用户设置本地配置
@property (nullable,nonatomic, strong)NSDictionary *localParams;

///获取一个已缓存广告,获取后此广告会从缓存中移除，无广告时返回nil
- (nullable TradPlusAdSplashObject *)getReadySplashObject;


//v13.8.0新增API 用户在展示时传入window
//Sigmob开屏点击后无法弹出落地页
- (void)loadAdWithBottomView:(nullable UIView *)bottomView;
- (void)loadAdWithBottomView:(nullable UIView *)bottomView maxWaitTime:(NSTimeInterval)maxWaitTime;
- (void)showWithWindow:(UIWindow *)window;
- (void)showWithWindow:(UIWindow *)window sceneId:(nullable NSString *)sceneId;
- (void)showWithWindow:(UIWindow *)window renderingViewClass:(Class)renderingViewClass;
- (void)showWithWindow:(UIWindow *)window renderingViewClass:(Class)renderingViewClass sceneId:(nullable NSString *)sceneId;
- (void)showWithWindow:(UIWindow *)window renderer:(TradPlusNativeRenderer *)renderer;
- (void)showWithWindow:(UIWindow *)window renderer:(TradPlusNativeRenderer *)renderer sceneId:(nullable NSString *)sceneId;
- (void)showWithWindow:(UIWindow *)window splashObject:(TradPlusAdSplashObject *)splashObject;
- (void)showWithWindow:(UIWindow *)window splashObject:(TradPlusAdSplashObject *)splashObject sceneId:(nullable NSString *)sceneId;

@end

@protocol TradPlusADSplashDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpSplashAdLoaded:(NSDictionary *)adInfo;

///AD展现
- (void)tpSplashAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpSplashAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpSplashAdClicked:(NSDictionary *)adInfo;

///AD关闭
- (void)tpSplashAdDismissed:(NSDictionary *)adInfo;

@optional

///AD加载失败
///tpSplashAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpSplashAdLoadFailWithError:(NSError *)error;
///v11.8.0新增,同tpSplashAdLoadFailWithError:,两个回调任选其一
- (void)tpSplashAdLoadFailWithError:(NSError *)error adInfo:(NSDictionary *)adInfo;

///v7.6.0+新增 开始加载流程
- (void)tpSplashAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpSplashAdLoadStart:(NSDictionary *)adInfo;
- (void)tpSplashAdOneLayerStartLoad:(NSDictionary *)adInfo;

///v8.7.0+新增
///调用load之后如果收到此回调，说明广告位仍处于加载状态，无法触发新的一轮广告加载。
- (void)tpSplashAdIsLoading:(NSDictionary *)adInfo;

///bidding开始
- (void)tpSplashAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpSplashAdBidEnd:(NSDictionary *)adInfo error:(nullable NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpSplashAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpSplashAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpSplashAdAllLoaded:(BOOL)success;
///v11.8.0新增,同tpSplashAdAllLoaded:,两个回调任选其一
- (void)tpSplashAdAllLoaded:(BOOL)success adInfo:(NSDictionary *)adInfo;

//v8.1.0+新增 跳过
- (void)tpSplashAdSkip:(NSDictionary *)adInfo;
//v8.1.0+新增 点睛开始
- (void)tpSplashAdZoomOutViewShow:(NSDictionary *)adInfo;
//v8.1.0+新增 点睛关闭
- (void)tpSplashAdZoomOutViewClose:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpSplashAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpSplashAdBidEnd:error:");
- (void)tpSplashAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpSplashAdOneLayerStartLoad:");
@end

NS_ASSUME_NONNULL_END
