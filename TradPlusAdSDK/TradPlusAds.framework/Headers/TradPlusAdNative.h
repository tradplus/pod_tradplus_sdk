//
//  TradPlusAdNative.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/22.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusNativeRenderer.h>
#import <TradPlusAds/MsCommon.h>
#import <TradPlusAds/TradPlusAdNativeObject.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADNativeDelegate;

@interface TradPlusAdNative : NSObject


/// 设置广告位ID
/// @param adUnitID  广告位ID 默认开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID;


///  设置广告位ID
/// @param adUnitID 广告位ID
/// @param isAutoLoad  是否开启自动加载模式
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;


/// 加载广告
- (void)loadAd;


/// 加载广告并设置缓存个数
/// @param adsCount 缓存个数
- (void)loadAds:(NSInteger)adsCount;

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
///已缓存广告数量
@property (nonatomic,readonly)NSInteger readyAdCount;
@property (nonatomic, readonly) NSString *unitID;

@property (nonatomic,weak) id <TradPlusADNativeDelegate> delegate;

///返回下一个Ready的AD信息 无广告时返回nil
- (nullable NSDictionary *)getReadyAdInfo;

///返回当前显示的AD信息
- (nullable NSDictionary *)getCurrentAdInfo;

///获取一个已缓存广告,获取后此广告会从缓存中移除，无广告时返回nil
- (TradPlusAdNativeObject *)getReadyNativeObject;
@end

@protocol TradPlusADNativeDelegate <NSObject>

///AD加载完成 首个广告源加载成功时回调 一次加载流程只会回调一次
- (void)tpNativeAdLoaded:(NSDictionary *)adInfo;

///AD加载失败
///tpNativeAdOneLayerLoad:didFailWithError：返回三方源的错误信息
- (void)tpNativeAdLoadFailWithError:(NSError *)error;

///AD展现
- (void)tpNativeAdImpression:(NSDictionary *)adInfo;

///AD展现失败
- (void)tpNativeAdShow:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///AD被点击
- (void)tpNativeAdClicked:(NSDictionary *)adInfo;

@optional

///为三方提供rootviewController 用于点击广告后的操作
- (nullable UIViewController *)viewControllerForPresentingModalView;

///v7.6.0+新增 开始加载流程
- (void)tpNativeAdStartLoad:(NSDictionary *)adInfo;

///当每个广告源开始加载时会都会回调一次。
///v7.6.0+新增。替代原回调接口：tpNativeAdLoadStart:(NSDictionary *)adInfo;
- (void)tpNativeAdOneLayerStartLoad:(NSDictionary *)adInfo;

///AD被关闭
- (void)tpNativeAdClose:(NSDictionary *)adInfo;

///bidding开始
- (void)tpNativeAdBidStart:(NSDictionary *)adInfo;

///bidding结束 error = nil 表示成功
- (void)tpNativeAdBidEnd:(NSDictionary *)adInfo error:(NSError *)error;

///当每个广告源加载成功后会都会回调一次。
- (void)tpNativeAdOneLayerLoaded:(NSDictionary *)adInfo;

///当每个广告源加载失败后会都会回调一次，返回三方源的错误信息
- (void)tpNativeAdOneLayerLoad:(NSDictionary *)adInfo didFailWithError:(NSError *)error;

///加载流程全部结束
- (void)tpNativeAdAllLoaded:(BOOL)success;

///视频贴片类型播放完成回调 v6.8.0+
- (void)tpNativePasterDidPlayFinished:(NSDictionary *)adInfo;

///开始播放 v7.8.0+
- (void)tpNativeAdVideoPlayStart:(NSDictionary *)adInfo;

///播放结束 v7.8.0+
- (void)tpNativeAdVideoPlayEnd:(NSDictionary *)adInfo;

///以下回调接口已废弃v7.6.0+
- (void)tpNativeAdBidEnd:(NSDictionary *)adInfo success:(BOOL)success DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeAdBidEnd:error:");
- (void)tpNativeAdLoadStart:(NSDictionary *)adInfo DEPRECATED_MSG_ATTRIBUTE("Please use tpNativeAdOneLayerStartLoad:");

@end

NS_ASSUME_NONNULL_END
