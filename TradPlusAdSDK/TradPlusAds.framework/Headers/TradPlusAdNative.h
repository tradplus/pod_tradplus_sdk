//
//  TradPlusAdNative.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/22.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TradPlusNativeRenderer.h"
#import "MsCommon.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADNativeDelegate;

@interface TradPlusAdNative : NSObject


/// 设置广告位ID
/// @param adUnitID  广告位ID
- (void)setAdUnitID:(NSString *)adUnitID;


///  设置广告位ID
/// @param adUnitID 广告位ID
/// @param isAutoLoad  是否开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;

/// 加载广告
- (void)loadAd;

/// 显示广告
/// @param renderingViewClass renderingViewClass
/// @param subView 渲染后会添加到此view上
/// @param sceneId 场景ID 没有则设置为nil
- (void)showADWithRenderingViewClass:(Class)renderingViewClass
                             subview:(UIView *)subView
                             sceneId:(nullable NSString *)sceneId;

/// 显示广告
/// @param renderer 自定义renderer
/// @param subView 渲染后会添加到此view上
/// @param sceneId 场景ID 没有则设置为nil
- (void)showADWithNativeRenderer:(TradPlusNativeRenderer *)renderer
                         subview:(UIView *)subView
                         sceneId:(nullable NSString *)sceneId;

/// 进入广告场景
/// @param sceneId 场景ID 没有则设置为nil
- (void)entryAdScenario:(nullable NSString *)sceneId;

/// 设置模版渲染的尺寸 需要在load之前设置
/// Mintegral Pangle GDTMob KuaiShou 的模版渲染需要设置
/// @param size 尺寸
- (void)setTemplateRenderSize:(CGSize)size;
///设置模版渲染的布局方式 默认 TPTemplateContentModeScaleToFill
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

/// 当设置为YES时Loaded通知将会在图片资源全部下载成功后才会通知
@property (nonatomic,assign)BOOL finishDownload;
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

@property (nonatomic,readonly)BOOL isAdReady;

@property (nonatomic,weak) id <TradPlusADNativeDelegate> delegate;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;
@end

@protocol TradPlusADNativeDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeAdLoaded:(NSDictionary *)adInfo;
///AD加载失败
- (void)tpNativeAdLoadFailWithError:(NSError *)error;
///AD展现
- (void)tpNativeAdImpression:(NSDictionary *)adInfo;
///AD展现失败
- (void)tpNativeAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///AD被点击
- (void)tpNativeAdClicked:(NSDictionary *)adInfo;

@optional
///部分三方源需要设置rootviewController smaato GDTMob kuaishou
- (UIViewController *)viewControllerForPresentingModalView;

///AD被关闭
- (void)tpNativeAdClose:(NSDictionary *)adInfo;
///bidding开始
- (void)tpNativeAdBidStart:(NSDictionary *)adInfo;
///bidding结束
- (void)tpNativeAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success;
///开始加载
- (void)tpNativeAdLoadStart:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载成功后会都会回调一次。
- (void)tpNativeAdOneLayerLoaded:(NSDictionary *)adInfo;
//多缓存情况下，当每个广告源加载失败后会都会回调一次。
- (void)tpNativeAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;
///加载流程全部结束
- (void)tpNativeAdAllLoaded:(BOOL)success;
@end

NS_ASSUME_NONNULL_END
